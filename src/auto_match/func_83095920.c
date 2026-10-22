typedef struct Key {
    unsigned short a;
    unsigned short b;
} Key;

static char Less(const Key *x, const Key *y)
{
    if (x->a < y->a || (x->a == y->a && x->b < y->b)) {
        return 1;
    }
    return 0;
}

void fn_83095920(Key *arr, int lo, int hi, int ctx)
{
    int j = hi;
    int i = lo;
    Key pivot = arr[(lo + hi) >> 1];
    Key t;

    do {
        while (Less(&arr[i], &pivot)) {
            i++;
        }
        while (Less(&pivot, &arr[j])) {
            j--;
        }
        if (j < i) {
            break;
        }
        if (j != i) {
            t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
        j--;
        i++;
    } while (i <= j);
    if (lo < j) {
        fn_83095920(arr, lo, j, ctx);
    }
    if (i < hi) {
        fn_83095920(arr, i, hi, ctx);
    }
}
