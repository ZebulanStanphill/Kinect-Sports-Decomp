extern int fn_82EEFA30(void *p, int idx, int arg);

typedef struct {
    char pad[0xbc];
    int count;
} Obj;

int fn_82EEFB98(Obj *p, int arg, int *outIdx)
{
    int hr;
    if (outIdx != 0) {
        *outIdx = p->count;
    }
    hr = fn_82EEFA30(p, p->count, arg);
    if (hr >= 0) {
        p->count++;
    }
    return hr >= 0;
}
