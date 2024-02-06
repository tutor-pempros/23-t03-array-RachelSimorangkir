// 12S23020 - Rachel C.P Simorangkir

#include <stdio.h>

void min_max_avg_values(int n, int values[], int *min_val, int *max_val, float *avg_val) {
    *min_val = values[0];
    *max_val = values[0];
    int sum = values[0];
    for (int i = 1; i < n; i++) {
        if (values[i] < *min_val) {
            *min_val = values[i];
        }
        if (values[i] > *max_val) {
            *max_val = values[i];
        }
        sum += values[i];
    }
    *avg_val = (float)sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    int values[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    int min_val, max_val;
    float avg_val;
    min_max_avg_values(n, values, &min_val, &max_val, &avg_val);

    printf("%d\n", min_val);
    printf("%d\n", max_val); 
    printf("%.2f\n", avg_val); // Menampilkan nilai rata-rata dengan dua desimal

    return 0;
}
