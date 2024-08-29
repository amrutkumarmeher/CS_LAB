// WAP to create two object with two member each(int) & assign them outside of constructor, display all values
class Aclass{
    int a;
    int b;
    void display(){
        System.out.println("a= "+a+" b= "+b);
    }
}
public class Program11{
    public static void main(String[] args) {
        Aclass obj1 = new Aclass();
        Aclass obj2 = new Aclass();
        obj1.a = 10;
        obj1.b = 20;
        obj2.a = 100;
        obj2.b = 200;
        obj1.display();
        obj2.display();
    }
}