import java.util.*;

public class MemoryFit {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // INPUT BLOCKS
        System.out.print("Enter number of memory blocks: ");
        int nb = sc.nextInt();
        int[] block = new int[nb];

        System.out.println("Enter block sizes:");
        for (int i = 0; i < nb; i++) {
            block[i] = sc.nextInt();
        }

        // INPUT PROCESSES
        System.out.print("Enter number of processes: ");
        int np = sc.nextInt();
        int[] process = new int[np];

        System.out.println("Enter process sizes:");
        for (int i = 0; i < np; i++) {
            process[i] = sc.nextInt();
        }

        // CALL ALL ALGORITHMS
        firstFit(block.clone(), process);
        bestFit(block.clone(), process);
        worstFit(block.clone(), process);
        nextFit(block.clone(), process);

        sc.close();
    }

    // ---------- FIRST FIT ----------
    static void firstFit(int[] block, int[] process) {
        System.out.println("\nFirst Fit:");
        for (int i = 0; i < process.length; i++) {
            for (int j = 0; j < block.length; j++) {
                if (block[j] >= process[i]) {
                    System.out.println("Process " + process[i] +
                                       " allocated to Block " + block[j]);
                    block[j] -= process[i];
                    break;
                }
            }
        }
    }

    // ---------- BEST FIT ----------
    static void bestFit(int[] block, int[] process) {
        System.out.println("\nBest Fit:");
        for (int i = 0; i < process.length; i++) {
            int best = -1;

            for (int j = 0; j < block.length; j++) {
                if (block[j] >= process[i]) {
                    if (best == -1 || block[j] < block[best]) {
                        best = j;
                    }
                }
            }

            if (best != -1) {
                System.out.println("Process " + process[i] +
                                   " allocated to Block " + block[best]);
                block[best] -= process[i];
            }
        }
    }

    // ---------- WORST FIT ----------
    static void worstFit(int[] block, int[] process) {
        System.out.println("\nWorst Fit:");
        for (int i = 0; i < process.length; i++) {
            int worst = -1;

            for (int j = 0; j < block.length; j++) {
                if (block[j] >= process[i]) {
                    if (worst == -1 || block[j] > block[worst]) {
                        worst = j;
                    }
                }
            }

            if (worst != -1) {
                System.out.println("Process " + process[i] +
                                   " allocated to Block " + block[worst]);
                block[worst] -= process[i];
            }
        }
    }

    // ---------- NEXT FIT ----------
    static void nextFit(int[] block, int[] process) {
        System.out.println("\nNext Fit:");
        int last = 0;

        for (int i = 0; i < process.length; i++) {
            int j = last;
            boolean done = false;

            do {
                if (block[j] >= process[i]) {
                    System.out.println("Process " + process[i] +
                                       " allocated to Block " + block[j]);
                    block[j] -= process[i];
                    last = j;
                    done = true;
                    break;
                }
                j = (j + 1) % block.length;
            } while (j != last);

            if (!done)
                System.out.println("Process " + process[i] + " not allocated");
        }
    }
}



     