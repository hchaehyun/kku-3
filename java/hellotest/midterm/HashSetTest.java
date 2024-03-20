import java.util.*;
public class HashSetTest{
public static void main( String[] args ) {
    HashSet<String> hset = new HashSet<String>();
    String[] arr = {"aa", "bb", "cc", "dd"};

    for( String s : arr )
        hset.add(s); 
    System.out.println(hset);

    hset.remove("cc"); 
    hset.add("bb");

    for(String s : hset) 
        System.out.print(s + " ");
    System.out.println(); 
    }
}
