// WAP to input a number & print the num

import java.util.Scanner;
public class Program3{
    public static void main(String[]args){
    Scanner reader = new Scanner(System.in);
    System.out.println("Enter the number");
    int num = reader.nextInt();
    System.out.println("The number is: "+num);
    }
}