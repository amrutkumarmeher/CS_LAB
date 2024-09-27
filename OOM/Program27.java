// WAP to implement hybrid type of inheritance & create some objects to run methods
/* hint:
                    A  showA()
                    |
                    B  showB()
                ____|____
                |       |
        showC() C       D  showD()
               obj1    obj2
               
 */
class A{
    void showA(){
        System.out.println("I am in A");
    }
}
class B extends A{
    void showB(){
        System.out.println("I am in B");
    }
}
class C extends B{
    void showC(){
        System.out.println("I am in C");
    }
}
class D extends B{
    void showD(){
        System.out.println("I am in D");
    }
}
public class Program27 {
    public static void main(String[] args) {
    C obj1 = new C();
    D obj2 = new D();
    obj1.showA();
    obj1.showB();
    obj1.showC();
    obj2.showA();
    obj2.showB();
    obj2.showD();
}  
}