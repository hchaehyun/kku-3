import java.io.*;

public class BufferedReaderExample {
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("input: ");
        String input = reader.readLine();
        
        System.out.printf("output: %s\n", input);
        reader.close();
    }
}
