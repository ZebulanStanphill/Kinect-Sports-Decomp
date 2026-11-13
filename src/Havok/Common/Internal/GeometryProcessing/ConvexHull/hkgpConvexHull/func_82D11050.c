typedef struct {
    char pad[0x38];
    int key;
} Obj_82D11050;

void fn_82D11050(Obj_82D11050 **arr, int lo, int hi, int ctx)
{
    int j = hi;
    int i = lo;
    Obj_82D11050 *pivot = arr[(lo + hi) >> 1];

    do {
        while (arr[i]->key < pivot->key)
            i++;
        while (pivot->key < arr[j]->key)
            j--;
        if (j < i)
            break;
        if (j != i) {
            Obj_82D11050 *t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
        j--;
        i++;
    } while (i <= j);
    if (lo < j)
        fn_82D11050(arr, lo, j, ctx);
    if (i < hi)
        fn_82D11050(arr, i, hi, ctx);
}
