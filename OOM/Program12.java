// WAP to create a class student & assign some data members & create 2 instances & display them.
class student{
    String regd;
    int sem;
    String name;
    student(String roll, int semester, String Name){
        regd = roll;
        sem = semester;
        name = Name;
    }
    void display(){
        System.out.println("Name: "+name+" sem: "+sem+" redge: "+regd);
    }
}
public class Program12{
    public static void main(String[] args) {
        student anuska = new student("F23122005021",3, "Anuska Pradhan");
        student priya = new student("F23122003200", 3, "Priya Singh");
        anuska.display();
        priya.display();
    }
    
}
