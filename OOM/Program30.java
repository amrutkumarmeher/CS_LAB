// WAP to call superclass constructor using super keyword
class superclassA{
    superclassA(){
        System.out.println("I am superclass constructor");
    }
}
class subclassB extends superclassA{
    subclassB(){
        System.out.println("I am subclassB constructor");
    }
}
public class Program30 {
    public static void main(String[] args) {
        subclassB obj = new subclassB();
    }
}
