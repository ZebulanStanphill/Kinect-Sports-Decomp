extern int fn_82E568B8(void *p, int idx, int arg);

typedef struct {
    char pad[0x68];
    int count;
} Obj;

int fn_82E56A88(Obj *p, int arg, int *outIdx)
{
    int hr;
    if (outIdx != 0) {
        *outIdx = p->count;
    }
    hr = fn_82E568B8(p, p->count, arg);
    if (hr >= 0) {
        p->count++;
    }
    return hr >= 0;
}
