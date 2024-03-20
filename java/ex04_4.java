import java.util.*;
 
public class ex04_4 {
 
	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		System.out.print("Amount: ");
		int n = sc.nextInt();

		int x50000 = n / 50000;
		n -= x50000 * 50000;
		System.out.println("50,000-won banknote: " + x50000);

		int x10000 = n / 10000;
		n -= x10000 * 10000;
		System.out.println("10,000-won banknote: " + x10000);

		int x5000 = n / 5000;
		n -= x5000 * 5000;
		System.out.println("5,000-won banknote: " + x5000);

		int x1000 = n / 1000;
		n -= x1000 * 1000;
		System.out.println("1,000-won banknote: " + x1000);

		int x500 = n / 500;
		n -= x500 * 500;
		System.out.println("500-won banknote: " + x500);

		int x100 = n / 100;
		n -= x100 * 100;
		System.out.println("100-won banknote: " + x100);

		int x50 = n / 50;
		n -= x50 * 50;
		System.out.println("50-won banknote: " + x50);

		int x10 = n / 10;
		n -= x10 * 10;
		System.out.println("10-won banknote: " + x10);
 
		
 
	}
 
}