// WAP to inherit a class
class X{
    void show(){
        System.out.println("This is X class");
    }
}
class Y extends X{}
public class Program23 {
    public static void main(String[] args) {
        Y obj = new Y();
        obj.show();
    }
}
