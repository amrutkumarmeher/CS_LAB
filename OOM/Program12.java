
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
        student amrut = new student("F23122007001",3, "Amrut Kumar Meher");
        student homee = new student("F23122007016", 3, "Homee Hiran Bhoi");
        amrut.display();
        homee.display();
    }
    
}
