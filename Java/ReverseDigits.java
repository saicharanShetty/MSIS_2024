import java.util.Scanner;

public class ReverseDigits {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");

        int number = scanner.nextInt();

        int originalNumber = number;

        
        int reversedNumber = 0;

        
        while (number != 0) {
            
            int lastDigit = number % 10;

            
            reversedNumber = reversedNumber * 10 + lastDigit;

            
            number = number / 10;
        }

        
        System.out.println("The reverse of " + originalNumber + " is: " + reversedNumber);

        
        scanner.close();
    }
}
