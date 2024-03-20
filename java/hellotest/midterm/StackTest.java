import java.util.Stack;

public class StackTest {
    public static void main(String[] args){
        Stack <String> mtStack = new Stack <String>();

        System.out.println("myStack.empty()--> " + myStack.empty());
        System.out.println();

        myStack.push("1st"); System.out.println(myStack);
        myStack.push("2nd"); System.out.println(myStack);
        myStack.push("3rd"); System.out.println(myStack);
        myStack.push("4th"); System.out.println(myStack);
        System.out.println();

        System.out.println("myStack.peek()--> " + myStack.peek());
        System.out.println();

        String element;
        System.out.println(myStack);
        element = myStack.pop();
        System.out.println("myStack.pop() --> " + element);
        System.out.println();

        myStack.push("5th"); System.out.println(myStack);
    }
    
}
