import java.util.Scanner;

public class main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("password: ");
        String password = input.nextLine();
        if (password.equals("crackme")) {
            System.out.println("success!");
        } else {
            System.out.println("fail.");
        }
    }
}