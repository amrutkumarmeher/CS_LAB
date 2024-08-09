import java.util.Scanner;
public class Program6 {
    public static void main(String[] args) {
        int temp;
        Scanner scan = new Scanner(System.in);
        System.out.println("Input value of a & b");
        int a = scan.nextInt();
        int b = scan.nextInt();
        System.out.println("Before Swapping a="+a+" and b="+b);
        temp = a;
        a = b;
        b = temp;
        System.out.println("After Swapper a="+a+" and b="+b);
    }
}
