// WAP to implement hirarchy inheritance
/* hint:
                      A   showA()
                ______|______
                |           |
                B showC()   C  showB()       
 */
class A{
    void showA(){
        System.out.println("I am in A!");
    }
}
class B extends A{
    void showB(){
        System.out.println("I am in B!");
    }
};
class C extends A{
    void showC(){
        System.out.println("I am in C!");
    }
};
public class Program26 {
    public static void main(String[] args) { 
        B obj1 = new B();
        C obj2 = new C();
        obj1.showA();
        obj1.showB();
        obj2.showA();
        obj2.showC();
    }
}