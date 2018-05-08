package bouncing_ball;

import javax.swing.JFrame;

public class Main {

	public static void main(String[] args) {
		JFrame obj=new JFrame();
		Ball ball=new Ball();
		obj.setBounds(10, 10, 720, 640);
		obj.setTitle("Bouncing ball");
		obj.setResizable(true);
		obj.setVisible(true);
		obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		obj.add(ball);


	}

}
