package Java.Swing.Calculator;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

public class FrontEnd {
    JButton b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14;

    public FrontEnd(){
        JFrame frame=new JFrame("Calculator");
        Toolkit tk=Toolkit.getDefaultToolkit();
        Dimension dm=tk.getScreenSize();
        int width=(int)dm.getWidth()/2;
        int height=(int)dm.getHeight()/2;
        frame.setSize(width,height);

        frame.setLayout(new BorderLayout());
        JLabel l1=new JLabel("");
        frame.add(l1);
        
        
    }
}
