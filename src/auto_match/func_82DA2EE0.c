typedef struct {
    char pad[0x14];
    unsigned int key;
} Obj_82DA2EE0;

void fn_82DA2EE0(Obj_82DA2EE0 **arr, int lo, int hi, int ctx)
{
    int j = hi;
    int i = lo;
    Obj_82DA2EE0 *pivot = arr[(lo + hi) >> 1];

    do {
        while (arr[i]->key < pivot->key)
            i++;
        while (pivot->key < arr[j]->key)
            j--;
        if (j < i)
            break;
        if (j != i) {
            Obj_82DA2EE0 *t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
        j--;
        i++;
    } while (i <= j);
    if (lo < j)
        fn_82DA2EE0(arr, lo, j, ctx);
    if (i < hi)
        fn_82DA2EE0(arr, i, hi, ctx);
}
