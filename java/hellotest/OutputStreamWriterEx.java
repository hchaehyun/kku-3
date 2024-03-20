import java.io.*;
public class OutputStreamWriterEx {
public static void main(String[] args) {
OutputStreamWriter out = null;
FileOutputStream fout = null;
try {
fout = new FileOutputStream("/Users/demian/kkuproject/java2/hangul.txt");
out = new OutputStreamWriter(fout, "MS949"); 
out.write( "가나다라마바사아자차카타파하");
out.close();
fout.close();
} catch (IOException e) {
System.out.println("입출력 오류");
}
}
}