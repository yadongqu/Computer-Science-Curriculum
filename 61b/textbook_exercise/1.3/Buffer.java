import java.util.Stack;
public class Buffer {
	Stack<Character> buffer;
	public int cur;
	int size;
	public Buffer(){
		// a empty buffer has no cursor position.
		buffer = new Stack<Character>();
		cur = -1;
		size = 0;
	}

	public void insert(char c){
		buffer.push(c);
		cur += 1;
		size += 1;
	}

	public char delete(){
		Stack<Character> newBuffer = new Stack<Character>();
		int index = size - 1;
		while(index > cur){
			newBuffer.push(buffer.pop());
			index -= 1;
		}
		// get the char to be deleted
		char d = buffer.pop();
		while(!newBuffer.empty()){
			buffer.push(newBuffer.pop());
		}
		cur -= 1;
		size -= 1;
		return d;
	}

	public void left(int k){
		if(cur - k < 0){
			throw new IndexOutOfBoundsException("can not move cursor position to small than 0");
		}
		cur -= k;
	}
	public void right(int k){
		if(cur + k >= size){
			throw new IndexOutOfBoundsException("can not move cursor position to bigger than stack size");
		}
		cur += k;
	}

	public int size(){
		return size;
	}

	public static void main(String[] args){
		Buffer b = new Buffer();
		b.insert('H');
		b.insert('e');
		b.insert('l');
		b.insert('o');
		b.insert('o');
		b.left(2);
		System.out.println(b.delete());
		b.right(1);
		System.out.println(b.delete());
	}
}