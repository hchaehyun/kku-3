import java.io.*;

public class WriteStudent {
    public static void main(String[] args){
        student s1 = new student("홍길동", "2020001", "010-1111-1111");
        student s2 = new student("임꺽정", "2020002", "010-2222-2222");
        student s3 = new student("이순신", "2020003", "010-3333-3333");

        try{
            ObjectOutputStream output = new ObjectOutputStream(new FileOutputStream("student.out"));

            output.writeObject(s1);
            output.writeObject(s2);
            output.writeObject(s3);
            output.close();
        }
        catch(IOException e){
            System.err.println("IO error");
        }

    }
    
}
