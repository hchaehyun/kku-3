import java.io.*;
public class assignment10 {
public static void main(String[] args) {
FileReader fin = null;
try {
fin = new FileReader("//Users//demian//Downloads//konkuk.txt"); 
int c;
while ((c = fin.read()) != -1) { // 한 문자씩 파일 끝까지 읽기

    if(c >= 'a' && c <= 'z' ){
        if( c+3 > 'z'){
            c = (char)(c + 3 - 26);
        }
        else{
            c += 3;

        }
    }

    else if( c >= 'A' && c <= 'Z' ){
        if( c+3 > 'Z'){
            c = (char)(c + 3 - 26);
        }
        else{
            c += 3;
        }
    }

System.out.print((char)c);
}
fin.close();
}
catch ( IOException e ) {
System.out.println("입출력 오류");
}
}
}