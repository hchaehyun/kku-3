import java.util.*;

public class CheckBrace {
    public static void main(String[] args){
        String s = "( 4 + [ 3 + { x - y } / 2 ] ) * 7 ";
        LinkedList<Character> stack = new LinkedList<Character>();
        for(int i=0; i<s.length(); i++){
            char c = s.charAt(i);
            if( c=='(' || c=='[' || c=='{' ){
                stack.push(c);
                System.out.println(stack);
            }
            if(c== ')' || c == ']' || c== '}'){
                if(stack.isEmpty()){
                    System.out.println("Not Match");
                    System.exit(1);
                }

                char d = stack.pop();
                System.out.println(stack);

                if (( c==')' && d!='(' ) || ( c==']' && d!='[' ) || ( c=='}' && d!='{' )){
                    System.out.println("Not match");
                    System.exit(1);
                }

            }
        }
        if(!stack.isEmpty()){
            System.out.println("Not match");
            System.exit(1);
        }
        System.out.println("Match");
    }
    
}
