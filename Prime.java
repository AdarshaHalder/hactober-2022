public class Prime {
    public static void main(String args[]) {
        System.out.print(
                "Sieve of Eratosthenes:-\n==============================\nP- Prime & C- Composite.\n------------------------------\n");
        for (int i = 1; i <= 100; i++)// List
        {
            int c = 0;// counter refereshing
            for (int j = 1; j <= i; j++)// factor count
            {
                if (i % j == 0)
                    c++;
            }
            if (c == 1)
                System.out.print(i + " -->not P, not C.\n");
            else if (c == 2)
                System.out.print(i + " --> P.\n");
            else
                System.out.print(i + " --> C.\n");
        }
    }
}
