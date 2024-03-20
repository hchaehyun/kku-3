import java.util.*;

public class ex03_9 {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in); // scanner sc

		System.out.print("섭씨 온도: ");
        double Tc = sc.nextDouble(); // 실수값 입력, double
        double Tf = (9.0 / 5.0) * Tc + 32;

		System.out.println("화씨 온도: " + Tf);


	}

}