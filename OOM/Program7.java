// WAP to input a num & check its even or not
import java.util.Scanner;
public class Program7 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = scan.nextInt();
        if (num%2==0){
            System.out.println("The number "+num+" is even");
        } else {
            System.out.println("The number "+num+" is odd");
        }
        scan.close();
    }
}
