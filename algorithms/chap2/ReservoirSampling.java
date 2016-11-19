import java.util.concurrent.ThreadLocalRandom;

public class ReservoirSampling {
	public static void main(String[] args){
		int[] S = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		int k = 5;
		// declare the Reservoir array
		int[] R = new int[k];

        // fill the Reservoir array with first k elements.
 		int i = 0;
 		for(; i < k; i++){
			R[i] = S[i];
		} 
		for(; i < S.length; i++){
			int j = ThreadLocalRandom.current().nextInt(0, i);
			if (j < k){
				R[j] = S[i];
			}
		}

		for(int e: R){
			System.out.println(e);
		}
	}
}