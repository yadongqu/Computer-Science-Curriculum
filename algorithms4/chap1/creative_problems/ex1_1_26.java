class ex1_1_26 {
	public static void sortThreeNumbers(int a, int b, int c){
		 int t;
		 if (a > b) { t = a; a = b; b = t; }
         if (a > c) { t = a; a = c; c = t; }
         if (b > c) { t = b; b = c; c = t; }
         System.out.println(a);
         System.out.println(b);
         System.out.println(c);
	}
	public static void main(String[] args){
		sortThreeNumbers(10, 8, 2);
	}
}