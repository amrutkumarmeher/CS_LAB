// WAP to implement an interface
interface A{
    void show();
}
class B implements A{
    public void show(){
        System.out.println("Here its the class body");
    }
}
public class Program28 {
    public static void main(String[] args) {
        B newobj = new B();
        newobj.show();
    }
}
