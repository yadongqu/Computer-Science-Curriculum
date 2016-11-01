import java.io.File;
import java.util.PriorityQueue;
public class ex43 {
	public static void listf(String indent, File directoryName, PriorityQueue<File> files){
		File[] fList = directoryName.listFiles();

		for(File file : fList){
			if(file.isFile()){
				files.add(file);
				System.out.println(indent + files.poll());
			} else if(file.isDirectory()){
				System.out.println(indent + file);
				indent += " ";
				listf(indent, file, files);
			}
		}
	}
	public static void main(String[] args){
			File dir = new File(args[0]);
			PriorityQueue<File> pq = new PriorityQueue<File>();
			ex43.listf("", dir, pq);
	}
}