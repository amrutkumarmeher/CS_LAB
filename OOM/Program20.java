// WAP to compare two string
public class Program20 {
    public static void main(String[] args) {
    String s1 = "Hello";
    String s2 = "hello";
    boolean x = s1.equalsIgnoreCase(s2);
        if (x) {
            System.out.println("Both the strings are equal");
        } else {
            System.out.println("Both the strings are not equal");
        }
    }
}
