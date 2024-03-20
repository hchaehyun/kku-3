// 202023615_함채현_Java프로그래밍2(8765)_3주차과제

import java.util.Scanner;


public class StringRotation {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.println("문자를 입력하세요.");

        String s = scanner.nextLine();
        int len = s.length();

        for(int i = 0; i < len; i++){
            String a = s.substring(0, 1); //제일 앞 문자 분리
            String b = s.substring(1); // 나머지 문자 분리
            s = b + a;

            System.out.println(s);
        }

    }
    
}
