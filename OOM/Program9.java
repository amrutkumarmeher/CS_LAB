// WAP to input two int & compare them
import java.util.Scanner;
import java.lang.Integer;
public class Program9 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter two numbers");
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = Integer.compare(a, b);
        if(c==0){
            System.out.println(a+" is equal to "+b);
        } else if (c==1) {
            System.out.println(a+" is greater than "+b);
        } else {
            System.out.println(a+" is smaller than "+b);
        }
    }
}
