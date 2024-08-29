// WAP to make a class with some static members
class Aclass{
    static int a = 10;
    static int b = 10;
    static void hey(){
        System.out.println("Hello !");
    }
}
public class Program16 {
    public static void main(String [] args){
        System.out.println("a= "+Aclass.a+" b= "+Aclass.b);
        Aclass.hey();
    }
}