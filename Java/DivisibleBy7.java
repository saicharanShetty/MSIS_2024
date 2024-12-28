public class DivisibleBy7 {
    public static void main(String[] args) {
        // Define the range
        int low = 101;
        int upper = 199;

        // Initialize counters and sum
        int count = 0;
        int sum = 0;

        // Iterate through the range
        for (int i = low; i <= upper; i++) {
            if (i % 7 == 0) {
                count++;
                sum += i;
            }
        }

        // Output results
        System.out.println("Number of integers divisible by 7 between " + low + " and " + upper + ": " + count);
        System.out.println("Sum of integers divisible by 7 between " + low + " and " + upper + ": " + sum);
    }
}
