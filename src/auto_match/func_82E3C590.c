extern int fn_82E3BBD0(void *p, int idx, int arg);

typedef struct {
    char pad[0x40];
    int count;
} Obj;

int fn_82E3C590(Obj *p, int arg, int *outIdx)
{
    int hr;
    if (outIdx != 0) {
        *outIdx = p->count;
    }
    hr = fn_82E3BBD0(p, p->count, arg);
    if (hr >= 0) {
        p->count++;
    }
    return hr >= 0;
}
