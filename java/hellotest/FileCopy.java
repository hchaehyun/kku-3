import java.io.*;

public class FileCopy {
	public static void main(String[] args) {
        InputStreamReader in = null;
        FileInputStream fin = null;
        OutputStreamWriter out = null;
        FileOutputStream fout = null;

		File origin = new File("/Users/demian/kkuproject/java2/hangul.txt"); //복사할 파일 위치
		File copy = new File("/Users/demian/kkuproject/java2/h.txt"); //복사된 파일 위치
		int c;
		try {
			fin = new FileInputStream(origin);
            in = new InputStreamReader(fin, "MS949");
			fout = new FileOutputStream(copy);
            out = new OutputStreamWriter(fout, "MS949");
            
			
			while((c=fin.read())!=-1) {
				fout.write((byte)c);
			}

			in.close();
			fin.close();
            out.close();
			fout.close();
		}catch(IOException e) {
			System.out.println("파일 복사 오류");
		}
	}
}