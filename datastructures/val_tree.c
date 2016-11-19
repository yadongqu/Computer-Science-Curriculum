#include <stdio.h>
#include <stdlib.h>
struct node
{
	int key;
	struct node *left;
	struct node *right;
	int height;
};

int max(int a , int b);

int height(struct node *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

// helper function that allocates a new node with 
// null left and right pointers.
struct node* newNode(int key)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return (node);
}


struct node *rightRotate(struct node *y)
{
	struct node *x = y->left;
	struct node *T2 = x->right;


	// perform rotation
	x->right = y;
	y->left = T2;

	y->height = max(height(y->left), height(y->right)) + 1;
	x->height = max(height(x->left), height(x->right)) + 1;
	return x;
}

struct node *leftRotate(struct node *x){
	struct node *y = x->right;
	struct node *T2 = y->left;
	y->left = x;
	x->right = T2;

	x->height = max(height(x->left), height(x->right)) + 1;
	y->height = max(height(y->left), height(y->right)) + 1;
	return y;
}

int getBalance(struct node *N)
{
	if(N == NULL)
		return 0;
	return height(N->left) - height(N->right);
}


struct node* insert(struct node* node, int key)
{
	if(node == NULL)
		return (newNode(key));
	if(key < node->key)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);
	node->height = max(height(node->left), height(node->right)) + 1;
	int balance = getBalance(node);

	if(balance > 1 && key < node->left->key)
		return rightRotate(node);
	if(balance < -1 && key > node->right->key)
		return leftRotate(node);
	if(balance > 1 && key > node->left->key){
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if(balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;

}

struct node * minValueNode(struct node* node)
{
    struct node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}

struct node* deleteNode(struct node* root, int key)
{
	if(root == NULL)
		return root;

	if(key < root->key)
		root->left = deleteNode(root->left, key);
	else if(key > root->key)
		root->right = deleteNode(root->right, key);
	else 
	{
		if((root->left == NULL) || (root->right == NULL))
		{
			struct node *temp = root->left? root->left : root->right;
			if(temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			*root = *temp;
			free(temp);
		}
		else {
			struct node* temp = minValueNode(root->right);
			root->key = temp->key;
			root->right = deleteNode(root->right, temp->key);
		}
	}

	if(root == NULL)
		return root;
	root->height = max(height(root->left), height(root->right))+1;
	int balance = getBalance(root);
	 // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);
 
    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left =  leftRotate(root->left);
        return rightRotate(root);
    }
 
    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);
 
    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
 
    return root;
}


void preOrder(struct node *root)
{
	if(root != NULL)
	{
		printf("%d ", root->key);
		preOrder(root->left);
		preOrder(root->right);
	}
}

int main()
{
	struct node *root = NULL;
    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 0);
    root = insert(root, 6);
    root = insert(root, 11);
    root = insert(root, -1);
    root = insert(root, 1);
    root = insert(root, 2);

	printf("Pre order traversal of the constructed AVL tree is \n");
    preOrder(root);

    root = deleteNode(root, 10);
    printf("\nPre order traversal after deletion of 10 \n");
    preOrder(root);

    return 0;
}








