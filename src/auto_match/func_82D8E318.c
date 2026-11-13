typedef unsigned char (*Less_82D8E318)(void *a, void *b);

void fn_82D8E318(void **arr, int d, int h, Less_82D8E318 less)
{
    int i;
    int j;
    void *pivot;

begin:
    j = h;
    i = d;
    pivot = arr[(d + h) >> 1];
    do {
        while (less(arr[i], pivot)) {
            i++;
        }
        while (less(pivot, arr[j])) {
            j--;
        }
        if (j >= i) {
            if (j != i) {
                void *t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
            j--;
            i++;
        }
    } while (i <= j);
    if (d < j) {
        fn_82D8E318(arr, d, j, less);
    }
    if (i < h) {
        d = i;
        goto begin;
    }
}
