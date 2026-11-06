typedef struct Arr_83095B60 {
    unsigned short *data;
    int count;
    unsigned int flags : 2;
    unsigned int cap : 30;
} Arr_83095B60;
typedef struct Svc_83095B60 {
    char pad[0x10];
    void *heap;
} Svc_83095B60;
extern int lbl_831BCF54[];
extern Svc_83095B60 *fn_82CE5410(void);
extern void fn_82CE6310(void *, Arr_83095B60 *, int, int);

void fn_83095B60(Arr_83095B60 *arr, char *param_2, int **param_3)
{
    unsigned short *src = arr->data;
    unsigned short *dst;
    unsigned short *end;
    int n = 0;
    int k;
    int m;
    Svc_83095B60 *svc;
    int newCap;
    void *heap;

    end = src + arr->count * 2;
    if (src < end) {
        dst = src - 1;
        for (; src < end; src += 2) {
            k = n;
            m = (*param_3)[src[1]];
            if (m >= 0) {
                n++;
                *(int *)(dst + 1) = *(int *)src;
                dst += 2;
                *dst = (unsigned short)m;
                *(short *)(*(int *)(lbl_831BCF54 + 2 + (src[0] & 1)) + m * 0x10 + param_2) = (short)k;
            }
        }
    }
    svc = fn_82CE5410();
    heap = svc->heap;
    if ((int)arr->cap < n) {
        newCap = arr->cap * 2;
        if (n >= newCap)
            newCap = n;
        fn_82CE6310(heap, arr, newCap, 4);
    }
    arr->count = n;
}
