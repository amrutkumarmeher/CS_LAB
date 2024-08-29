class Aclass{
    int i;
    int j;
    Aclass(){
        i = 100;
        j = 200;
        System.out.println("Constructor with no argument");
    }
    Aclass(int a){
        i = a;
        j = a;
        System.out.println("Constructor has one argument");
    }
    Aclass(int a, int b){
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
        Aclass i = new Aclass();
        i.display();
        Aclass j = new Aclass(700);
        j.display();
        Aclass k = new Aclass(12,13);
        k.display();
    }
}
