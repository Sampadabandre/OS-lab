#include<stdio.h>
int main() {
int pages[50], frames[10];
int n, f, i, j, k;
int pageFaults = 0;
int index = 0;
int found;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter the reference string:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    printf("Enter number of frames: ");
    scanf("%d", &f);


    for(i = 0; i < f; i++) {
        frames[i] = -1;
    }

    printf("\nPage\tFrames\n");

    for(i = 0; i < n; i++) {
        found = 0;


        for(j = 0; j < f; j++) {
            if(frames[j] == pages[i]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            frames[index] = pages[i];
            index = (index + 1) % f;
            pageFaults++;
        }

        printf("%d\t", pages[i]);
        for(k = 0; k < f; k++) {
            printf("%d ", frames[k]);
        }
        printf("\n");
    }

    printf("\nTotal Page Faults = %d\n", pageFaults);

    return 0;
}
