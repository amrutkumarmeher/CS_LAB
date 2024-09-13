//WAP to declare two member in a class, use constructor to assign value & show.
class Bclass{
    int a;
    int b;
    Bclass(){
        a = 10;
        b = 20;
    }
    void display(){
        System.out.println("a= "+a+" b= "+b);
    }
}
public class Program13{
    public static void main(String[] args) {
        Bclass obj = new Bclass();
        obj.display();
    }
}