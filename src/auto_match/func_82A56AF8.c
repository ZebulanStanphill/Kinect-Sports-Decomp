extern void fn_82A6C218(void *a, int b, int c, int d, int *arr, int e, int n);

typedef struct {
    char pad0[0x10];
    unsigned char *p10;
} Sub;

typedef struct {
    char pad0[4];
    int f4;
    int *arr;
    char padC[0x34];
    int max;
    char pad44[0x32];
    short f76;
    char pad78[0x130];
    Sub *sub;
    int f1AC;
    int f1B0;
    char pad1B4[8];
    int f1BC;
} B;

typedef struct {
    char pad0[0x130];
    int n;
} A;

int fn_82A56AF8(A *a, B *b)
{
    if (b->f1BC != 0) {
        int max;
        short i;
        fn_82A6C218(a, b->f4, b->f1AC, b->f1B0, b->arr, b->f76, a->n);
        max = b->arr[0];
        for (i = 1; i < a->n; i++) {
            if (b->arr[i] > max) {
                max = b->arr[i];
            }
        }
        b->max = max;
        *b->sub->p10 = 0;
    }
    return 0;
}
