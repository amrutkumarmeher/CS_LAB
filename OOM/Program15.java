class Dclass{
    int i;
    int j;
    Dclass(){
        i = 100;
        j = 200;
        System.out.println("Constructor with no argument");
    }
    Dclass(int a){
        i = a;
        j = a;
        System.out.println("Constructor has one argument");
    }
    Dclass(int a, int b){
        i = a;
        j = b;
        System.out.println("Contructor has two arguments");
    }
    void display(){
        System.out.println("i="+i+" j="+j);
    }
}

public class Program15 {
    public static void main(String[] args) {
        Dclass i = new Dclass();
        i.display();
        Dclass j = new Dclass(700);
        j.display();
        Dclass k = new Dclass(12,13);
        k.display();
    }
}
