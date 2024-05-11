import java.util.Scanner;

public class MainPrb {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        StringBuilder resultBuilder = new StringBuilder();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int k = scanner.nextInt();

            int[] a = new int[n];
            int[] b = new int[n];


            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextInt();
            }


            for (int i = 0; i < n; i++) {
                b[i] = scanner.nextInt();
            }

            long totalExperience = 0;


            for (int i = 0; i < n && k > 0; i++) {

                if (i == 0 || k >= i + 1) {
                    totalExperience += a[i]; 


                    if (k > 1) {
                        totalExperience += (long) b[i] * (k - 1);
                    }


                    k--;
                }
            }

            resultBuilder.append(totalExperience).append('\n');
        }

        System.out.print(resultBuilder);

        scanner.close();
    }
}
