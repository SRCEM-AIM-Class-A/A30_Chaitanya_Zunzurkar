import java.util.Scanner;
class Percentage{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Marks of Student : ");
        float English = sc.nextFloat();
        System.out.print("Enter Marks of Student : ");
        float Maths = sc.nextFloat();
        System.out.print("Enter Marks of Student : ");
        float Science = sc.nextFloat();
        System.out.print("Enter Marks of Student : ");
        float History = sc.nextFloat();
        System.out.print("Enter Marks of Student : ");
        float Geography = sc.nextFloat();

        float average = (English + Maths + Science + History + Geography)/5; 
        System.out.println("Average marks of Student is " + average);

    }
}