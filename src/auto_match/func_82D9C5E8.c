typedef struct Obj {
    char pad[0x14];
    unsigned int key;
} Obj;

typedef struct Elem {
    int a;
    Obj *obj;
} Elem;

void fn_82D9C5E8(Elem *arr, int lo, int hi, int ctx)
{
    int j = hi;
    int i = lo;
    Elem pivot = arr[(lo + hi) >> 1];

    do {
        while (arr[i].obj->key < pivot.obj->key)
            i++;
        while (pivot.obj->key < arr[j].obj->key)
            j--;
        if (j < i)
            break;
        if (j != i) {
            Elem t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
        j--;
        i++;
    } while (i <= j);
    if (lo < j)
        fn_82D9C5E8(arr, lo, j, ctx);
    if (i < hi)
        fn_82D9C5E8(arr, i, hi, ctx);
}
