import java.util.Scanner;
class Nuke2 {
	public static void main(String [] args){
		System.out.println("Please input a string:");
		Scanner scan = new Scanner(System.in);
		String text = scan.nextLine();

		System.out.println(text.substring(0, 1) + text.substring(2));
		System.exit(0); 
	}
}