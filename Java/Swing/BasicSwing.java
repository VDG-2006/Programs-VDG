package Java.Swing;

import javax.swing.*;
import java.awt.*;

public class BasicSwing {
    
    public BasicSwing(){
        JFrame frame=new JFrame();

        Toolkit tk=Toolkit.getDefaultToolkit();
        Dimension dm=tk.getScreenSize();
        int height=(int)dm.getHeight();
        int width=(int)dm.getWidth();
        frame.setSize(width,height);

        frame.setTitle("First GUI");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        JLabel label=new JLabel("this is label");
        label.setFont(new Font("Ariel", Font.BOLD,30));
        frame.add(label);

        frame.setVisible(true);
    }

    public static void main(String[] args) {
        new BasicSwing();
    }
}
