// WAP to compare two string using 
import java.util.Scanner;

public class Program20 {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        System.out.print("Input first String: ");
        String s1 = scan.nextLine();
        System.out.print("Input second String: ");
        String s2 = scan.nextLine();
        boolean x = s1.equalsIgnoreCase(s2);
        if (x) {
            System.out.println("Both the strings are equal");
        } else {
            System.out.println("Both the strings are not equal");
        }
        scan.close();
    }
}
