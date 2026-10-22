typedef struct Sink Sink;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void *f10;
    void (*Write)(Sink *, int, const char *, void *, int, int);
} SinkVtbl;
struct Sink { SinkVtbl *vt; };

typedef struct { char pad[0xd0]; void *data; int count; int cap; } Obj;

extern int fn_82CFF8D0(void *, unsigned int);
extern void fn_82D9A4A8(Obj *, Sink *, void *);
extern char lbl_8323E170[];

void fn_82D8CDD0(Obj *o, Sink *s)
{
    if ((o->cap & (int)0x80000000) == 0) {
        int r = fn_82CFF8D0(o->data, o->cap << 2);
        s->vt->Write(s, 3, "OvrlpCollPtr", o->data, o->count << 2, r);
    }
    fn_82D9A4A8(o, s, lbl_8323E170);
}
