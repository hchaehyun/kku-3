import java.util.*;

public class ArrayListEx2{
    public static void main(String[] args){
        ArrayList<String> a = new ArrayList<String>();

        Scanner scanner = new Scanner(System.in);

        for(int i = 0; i < 4; i++){
            System.out.print("Enter name>> ");
            String s = scanner.next();
            a.add(s);
        }

        for(int i = 0; i < a.size(); i++){
            String name = a.get(i);
            System.out.print(name + " ");
        }

        int longestIndex = 0;
        for(int i = 1; i < a.size(); i++){
            if(a.get(longestIndex).length() < a.get(i).length())
                longestIndex = 1;
        }
        System.out.print("\nThe longest name : " + a.get(longestIndex));
    }
    
}
