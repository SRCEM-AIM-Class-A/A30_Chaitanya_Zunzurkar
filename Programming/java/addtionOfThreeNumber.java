import java.util.Scanner;

class addtionOfThreeNumber{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Number : ");
        float num1 = sc.nextFloat();

        System.out.print("Enter Number : ");
        float num2 = sc.nextFloat();

        System.out.print("Enter Number : ");
        float num3 = sc.nextFloat();

        float sum = num1 + num2 + num3;
        System.out.println("Sum of three Number is " + sum);
    }
}