import java.util.*;

public class StringReverse {
    public static void main(String args[]){
        String s = "abcdedf";

        LinkedList<Character> stack = new LinkedList<Character>();

        for(int i = 0; i < s.length(); i++)
            stack.push(s.charAt(i));

        while(stack.isEmpty() == false)
            System.out.print(stack.pop());
        System.out.println();
    }
}
