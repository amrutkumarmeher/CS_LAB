// WAP to use final keyword.
final class a{ // final class
    final double pi = 22.0/7.0; // constant
    final void show(){ // final function
        System.out.println("I am final method");
    }
}

public class Program31 {
    public static void main(String[] args) {
        a A = new a();
        System.out.println(A.pi);
        A.show();
    }
}
