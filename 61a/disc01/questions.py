def wears_jacket(temp, raining):
    """
    Alfonso will only wear a jacket outside if it is below 60 degrees or 
    it is raining. Fill in the function wears jacket which takes in the 
    current temperature and a Boolen value telling if it is raining and
    returns True if Alfonso will wear a jacket ad False otherwise. This
    should only take one line of code!
    """
    return temp < 60 or raining

def handle_overflow(s1, s2):
    """
    To handle discussion section overflow, TAs may direct students to a 
    more empty section that is happening at the same time. Write the 
    function handle overflow, which takes in the number of students at 
    two sections and prints out what to do if either section
    exceeds 30 students. See the doctests below for the behavior.
    """
    if s1 < 30 and s2 < 30:
        print("No overflow.")
    elif s1 < 30:
        print("%d spot left in Section 1." % (30-s1))
    elif s2 < 30:
        print("%d spot left in Section 2." % (30-s2))
    elif s1 >= 30 and s2 >= 30:
        print("No space left in either section.")

def is_prime(n):
    if n == 1:
        return False
    elif n == 2:
        return True
    elif n % 2 == 0:
        return False
    for i in range(3, int(n**0.5 + 1), 2):
        if n % i == 0:
            return False
    return True


def fizzbuzz(n):
    """
    >>> result = fizzbuzz(16)
    1
    2
    fizz
    4
    buzz
    fizz
    7
    8
    fizz
    buzz
    11
    fizz
    13
    14
    fizzbuzz
    16
    >>> result == None
    True
    """
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            print("fizzbuzz")
        elif i % 3 == 0:
            print("fizz")
        elif i % 5 == 0:
            print("buzz")
        else:
            print(i)





