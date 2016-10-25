public class Color {
	short red;
	short green;
	short blue;

	public Color(short red, short green, short blue){
		this.red = red;
		this.green = green;
		this.blue = blue;

	}

	public void add(Color p1){
		this.red += p1.red;
		this.green += p1.green;
		this.blue += p1.blue;
		
	}

}