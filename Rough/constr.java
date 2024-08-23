class A{
    private int i;
    private int j;
    A(){
        i = 100;
        j = 200;
        System.out.println("Constructor with no argument");
    }
    A(int a){
        i = a;
        j = a;
        System.out.println("Constructor has one argument");
    }
    A(int a, int b){
        i = a;
        j = b;
        System.out.println("Contructor has two arguments");
    }
    void display(){
        System.out.println("i="+i+" j="+j);
    }
}

public class constr {
    public static void main(String[] args) {
        A i = new A();
        i.display();
        A j = new A(700);
        j.display();
        A k = new A(12,13);
        k.display();
    }
}
