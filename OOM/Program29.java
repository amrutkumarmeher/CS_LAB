// WAP to call superclass members using super keyword in subclass
class X{
    int i = 9;
}
class Y extends X{
    int i = 90;
    void show(){
        System.out.println(i);
        System.out.println(super.i);
    }
}
public class Program29 {
    public static void main(String[] args) {
        Y aobj = new Y();
        aobj.show();
    }
}
