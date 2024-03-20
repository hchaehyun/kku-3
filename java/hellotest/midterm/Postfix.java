import java.util.*;

public class Postfix {
    public static void main(String[] args){
        Stack<Double> stack = new Stack<Double>();
        double a = 0.0;
        double b = 0.0;

        Scanner input = new Scanner(System.in);
        System.out.print("postfix: ");
        String s = input.nextLine();

        String[] arr = s.spilt(" ");
        for(String op : arr){
            switch (op) {
                case "+":
                    b = stack.pop();
                    a = stack.pop();
                    stack.push(a + b);
                    break;
                
                case "-":
                    b = stack.pop();
                    a = stack.pop();
                    stack.push(a - b);
                    break;

                case "*":
                    b = stack.pop();
                    a = stack.pop();
                    stack.push(a * b);
                    break;

                case "/":
                    b = stack.pop();
                    a = stack.pop();
                    stack.push(a / b);
                    break;

                default:
                    stack.push(Double.valueOf(op));
                    break;
            }
        }

        System.out.println("result : " + stack.pop());
    }
    
    
}
