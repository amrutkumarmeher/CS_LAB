// WAP to convert decimal to binary
import java.util.Scanner;
public class Program10 {
    public static String decToBin(int dec){
        String Bin = "";
        // System.out.println(dec);
        while (dec > 1) {
            Bin = Bin+ dec%2;
            dec =(int) dec / 2;
        }
        Bin = Bin + dec%2;
        String temp="";
        for(int i = Bin.length();i>0;i--){
            temp = temp+Bin.charAt(i-1);
        }
        Bin = temp;
        return Bin;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = scan.nextInt();
        System.out.println("Its binary is\n"+decToBin(num));
    }
    
}