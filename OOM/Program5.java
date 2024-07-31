// WAP to input your name & print it
import java.util.Scanner;
public class Program5{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter your name");
        String name = scan.nextLine();
        System.out.println("Your name is "+name);
    }
}