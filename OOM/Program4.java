// WAP to calculate area of a circle by input radius
// hint: area = (22*radius*radius)/7

import java.util.Scanner;
public class Program4{
    public static void main(String []args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Input radius of the circle(in meters)");
        float radius = scan.nextFloat();
        float area = (22*radius*radius)/7;
        System.out.println("The accurate area is: "+area+" m^2");
    }
}