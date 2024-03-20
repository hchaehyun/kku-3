import java.util.*;

public class ArrayListEx {
    public static void main(String[] args){
        ArrayList<String> a = new ArrayList<String>();

        a.add("Hello");
        a.add("Hi");
        a.add("Java");
        System.out.println(a);
        System.out.println("Size: " + a.size());

        a.add(2, "Sahni");
        System.out.println(a);

        a.set(2, "James");
        System.out.println(a);

        String str = a.get(1);
        System.out.println(str);

        a.remove(1);
        System.out.println(a);

        a.clear();
        System.out.println(a);
    }
    
}
