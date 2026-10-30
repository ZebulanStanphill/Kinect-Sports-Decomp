extern int fn_82F39960(void *p, int idx, int arg);

typedef struct {
    char pad[0xbc];
    int count;
} Obj;

int fn_82F39CB8(Obj *p, int arg, int *outIdx)
{
    int hr;
    if (outIdx != 0) {
        *outIdx = p->count;
    }
    hr = fn_82F39960(p, p->count, arg);
    if (hr >= 0) {
        p->count++;
    }
    return hr >= 0;
}
