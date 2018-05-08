package bouncing_ball;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.*;
import java.util.*;
import javax.swing.Timer;

import javax.swing.JPanel;

public class Ball extends JPanel implements ActionListener{

	private Timer timer;
	private int delay=8;

	private int x=10;
	private int x1=x;
	private int y=10;
	private int y1=y;
//	private int width=700;
//	private int height=600;

	public Ball()
	{
		//this.addComponentListener(this);
		timer=new Timer(delay, this);
		timer.start();
	}

	public void paint(Graphics g)
	{
		//background
		g.setColor(Color.black);
		g.fillRect(1, 1, 700, 600);

		//the ball
		g.setColor(Color.red);
		g.fillOval(x, y, 20, 20);
		g.dispose();
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		timer.start();

		x += Math.pow(-1, (x1/680));
        y += Math.pow(-1, (y1/580));
        x1++;;
        y1++;

		repaint();
	}

//	@Override
//	public void componentHidden(ComponentEvent arg0) {}
//
//	@Override
//	public void componentMoved(ComponentEvent arg0) {}
//
//	@Override
//	public void componentResized(ComponentEvent e) {
//		int height=this.getHeight();
//		int width=this.getWidth();
//	}
//
//	@Override
//	public void componentShown(ComponentEvent arg0) {}
}
