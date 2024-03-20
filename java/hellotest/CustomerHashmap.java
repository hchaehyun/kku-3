// 202023615_함채현_Java프로그래밍2(8765)_6주차과제

import java.util.*;

public class CustomerHashmap{

   public static void main(String[] args){
      Scanner sc = new Scanner(System.in);

      HashMap<String, Integer> customer = new HashMap<String, Integer>();

      while(true){

         System.out.print("이름과 포인터 입력 >> ");
         String name = sc.next();
         int point = sc.nextInt();
         
         if(customer.containsKey(name)){ // 기존 고객
            customer.put(name, customer.get(name) + point);
         }

         else{ // 새로운 고객
            customer.put(name, point);
         }


         Set<String> keys = customer.keySet();
         Iterator<String> it = keys.iterator();

         while(it.hasNext()){
            String key = it.next();
            int value = customer.get(key);
            System.out.print("{" + key + "=" + value + "} ");
         
        }

         System.out.println();
      }

   }

}
    
