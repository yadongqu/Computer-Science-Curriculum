import java.util.*;
public class p_1_26 {
	public static void main(String[] args) {
	   List<String> list = new ArrayList<String>();
	   Scanner input = new Scanner(System.in);
	   int lines = 0;
	   while (lines < 10) {
	   	 	list.add(input.nextLine());
	   	 	lines += 1;
	   }
	   int index = list.size() - 1;
	   for (int i = index; i >= 0; i--){
	   	System.out.println(list.get(i));
	   }
	}
     
}