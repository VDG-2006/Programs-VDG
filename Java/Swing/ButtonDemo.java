package Java.Swing;

import java.awt.*;
import java.awt.event.*;

import javax.swing.*;

public class ButtonDemo {
    public ButtonDemo(){
        JFrame frame=new JFrame();

        Toolkit tk=Toolkit.getDefaultToolkit();
        Dimension dm=tk.getScreenSize();
        int width=(int)dm.getWidth()/2;
        int height=(int)dm.getHeight()/2;
        frame.setSize(width,height);

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());
        frame.setTitle("ButtonDemo");
        frame.setFont(new Font("Ariel", Font.BOLD, 30));
        
        JLabel label=new JLabel("Press the buttons:");
        frame.add(label);

        JButton b1=new JButton("Button1");
        frame.add(b1);

        JButton b2=new JButton("Button2");
        frame.add(b2);

        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae){
                String name=ae.getActionCommand();
                label.setText(name+" is clicked");
            }
        });

        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae){
                String name=ae.getActionCommand();
                label.setText(name+" is clicked");
            }
        });

        frame.setVisible(true);
    }

    public static void main(String[] args){
        new ButtonDemo();
    }
    
}
