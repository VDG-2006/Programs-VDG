package Java.Files;

import java.io.FileInputStream;
import java.io.IOException;

public class FileCopy {
    public static void main(String[] args){
        FileInputStream f1=null;
        try{
            f1=new FileInputStream("D:\\Programs(VDG)\\Java\\Files\\sample.txt");
            int ch,c=0,w=1,l=1;
            while((ch=f1.read())!=-1){
                if(ch!='\n') c++;
                if(ch==' ') w++;
                if(ch=='\n'){ w++; l++;}
            }
            System.out.println(c+" "+w+" "+l);
        } catch(IOException ie){
            ie.printStackTrace();
        }
        finally{
            if(f1!=null){
                try{
                    f1.close();
                } catch(IOException ie){ie.printStackTrace();}
            }
        }
    }
}
