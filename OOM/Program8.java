// WAP to input a num & show its multiplication table to 10
import java.util.Scanner;
public class Program8 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = scan.nextInt();
        System.out.println("Its multiplication upto 10:");
        for(int i=1;i<=10;i++){
            System.out.println(num+" * "+i+" = "+i*num);
        }
        scan.close();
    }
}
