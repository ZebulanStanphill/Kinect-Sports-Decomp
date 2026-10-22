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

typedef struct { char pad[0x10]; void *data; int count; int cap; } Obj;

extern int fn_82CFF8D0(void *, unsigned int);
extern void fn_82CE3DC8(Obj *, Sink *, void *);
extern char lbl_8323C5E4[];

void fn_82D4C1A8(Obj *o, Sink *s)
{
    if ((o->cap & (int)0x80000000) == 0) {
        int r = fn_82CFF8D0(o->data, o->cap << 5);
        s->vt->Write(s, 3, "Rays", o->data, o->count << 5, r);
    }
    fn_82CE3DC8(o, s, lbl_8323C5E4);
}
