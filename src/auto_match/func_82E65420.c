typedef struct Stream Stream;
typedef struct {
    void *f0, *f1, *f2;
    int (*Seek)(Stream *, int *, int, int);
} StreamVT;
struct Stream { StreamVT *vt; };

typedef struct {
    char pad[0xc];
    Stream *s;
    int base;
    int a;
    int b;
} Obj;

int fn_82E65420(Obj *o, int *pos, int *pb, int *pa)
{
    int hr;
    int cur = 0;

    if (pos == 0) {
        hr = 0x80070057;
    } else {
        hr = o->s->vt->Seek(o->s, &cur, 0, 0);
        if (hr >= 0) {
            *pos = o->base + cur;
            if (pa != 0) {
                *pa = o->a;
            }
            if (pb != 0) {
                *pb = o->b;
            }
        }
    }
    return hr;
}
