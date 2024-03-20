import java.util.*;

public class LinkedListEx{
    public static void main(String[] args){
        LinkedList<String> list = new LinkedList<String>();

        Scanner scanner = new Scanner(System.in);

        for(int i = 0; i < 4; i++){
            System.out.print("Enter name>> ");
            String s = scanner.next();
            list.add(s);
        }

        for(int i = 0; i < list.size(); i++){
            String name = list.get(i);
            System.out.print(name + " ");
        }

        int longestIndex = 0;
        for(int i = 1; i < list.size(); i++){
            if(list.get(longestIndex).length() < list.get(i).length())
                longestIndex = 1;
        }
        System.out.print("\nThe longest name : " + list.get(longestIndex));
    }
    
}
