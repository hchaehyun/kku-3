import java.io.*;

public class ReadStudent {
    public static void main(String[] args){
        try{
            ObjectInputStream input = new ObjectInputStream(new FileInputStream("student.out"));

            student s1 = (student)input.readObject();
            student s2 = (student)input.readObject();
            student s3 = (student)input.readObject();
            input.close();

            System.out.println(s1);
            System.out.println(s2);
            System.out.println(s3);
        }
        catch(Exception e){
            System.err.println("Error");
        }
    }
    
}
