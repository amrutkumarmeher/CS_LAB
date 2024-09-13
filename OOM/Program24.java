// WAP to perform multi level inheritance
class X1{
    void show1(){
        System.out.println("Hello! from X1");
    }
}
class X2 extends X1{
    void show2(){
        System.out.println("Hello! from X2");
    }
}
class X3 extends X2{
    void show3(){
        System.out.println("Hello! from X3");
    }
}
public class Program24 {
    public static void main(String[] args) {
        X3 obj = new X3();
        obj.show1();
        obj.show2();
        obj.show3();
    }
}
