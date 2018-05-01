package labda;

import java.util.concurrent.TimeUnit;
import java.math.*;

public class labda {

public static void main(String[] args){

		int width = 50 , height = 50;
	    int x = 10, y = 20;
	    int x2 = x, y2 = y;

	    for(;;){
	    	try {
				TimeUnit.MILLISECONDS.sleep(50);

				y2=(y2+1)%(2*height);
			    y=(int) (y+Math.pow(-1, (Math.floor(y2/height))));
				x2=(x2+1)%(2*width);
				x=(int) (x+Math.pow(-1, (Math.floor(x2/width))));

                int i;
                for(i = 0; i < width; i++){
                    System.out.print("~");
                }
                System.out.println("");


                for(i = 0; i < y-1; i++){
                    System.out.print("~");
                    for(int j = 0; j < width-2; j++){
                        System.out.print(" ");
                    }
                    System.out.println("~");
                }


                System.out.print(" ");
                for(i = 0; i < x-1; i++){
                    System.out.print(" ");
                }
                System.out.print("X");
                for(i = x+1; i < width-1; i++){
                    System.out.print(" ");
                }
                System.out.println("~");


                for(i = y; i < height-2; i++){
                    System.out.print("~");
                    for(int j = 0; j < width-2; j++){
                        System.out.print(" ");
                    }
                    System.out.println("~");
                }


                for(i = 0; i < x-1; i++){
                    System.out.print("~");
                }
                System.out.print(" ");
                for(i = x; i < width; i++){
                    System.out.print("#");
                }


			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
	    }
}

}
