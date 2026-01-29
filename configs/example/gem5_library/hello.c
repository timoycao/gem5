#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("========================================\n");
    printf("  Hello from gem5 Multi-CPU Simulation!\n");
    printf("========================================\n");
    printf("This is a real C program workload.\n");
    printf("Running on a multi-core X86 System-on-Chip.\n");
    printf("Compiler: GCC\n");
    printf("Language: C\n");
    printf("\n");
    printf("Simulating a real-world workload...\n");

    // Do some actual computation to make it interesting
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        sum += i;
    }

    printf("Computation result (sum 0-999): %d\n", sum);
    printf("Workload completed successfully!\n");
    printf("========================================\n");

    return 0;
}
