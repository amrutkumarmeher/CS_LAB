// WAP to use TRY-CATCH block with throw & throws keyword exceptions.
public class Program34 {
    public static void divide(int a, int b) throws ArithmeticException {
        if (b == 0)
            throw new ArithmeticException("Division by zero is not allowed.");
        System.out.println(a / b);
    }

    public static void main(String[] args) {
        try {
            int a = 10, b = 0;
            divide(a, b);
        } catch (ArithmeticException e) {
            System.out.println("exception caught! " + e);
        }
    }
}