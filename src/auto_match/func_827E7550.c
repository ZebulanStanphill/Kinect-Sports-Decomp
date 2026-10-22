typedef struct Obj Obj;
typedef struct Msg Msg;

struct Msg {
    int handle;
    char data[0x20];
    Obj *owner;
};

typedef struct Sink Sink;
typedef struct {
    void *f[6];
    int (*Post)(Sink *, Msg *);
} SinkVt;
struct Sink {
    SinkVt *vt;
};

typedef struct {
    char pad[0x74];
    Sink *sink;
} Slot;

typedef struct {
    void *f[8];
    int (*GetCtx)(Obj *);
} ObjVt;

struct Obj {
    ObjVt *vt;
    int index;
    int handle;
    int pad[2];
    int state;
    int pad2[2];
    char *slots;
};

extern int fn_827D50F8(int state);
extern unsigned int fn_827D9DC0(int handle);
extern int fn_827D9DE8(int handle);
extern void fn_827D50C0(int state, int code);
extern void fn_827E4218(int ctx, Msg **out);
extern void fn_82517A50(void *dst, int *src);

int fn_827E7550(Obj *o, Msg **out)
{
    int *state = &o->state;
    Sink *sink;
    int r;

    if (fn_827D50F8(*state) != 0)
        return 0x4c7;
    if ((fn_827D9DC0(o->handle) & 1) || fn_827D9DE8(o->handle) > 0)
        return 0x3e4;
    if ((fn_827D9DC0(o->handle) & 2) == 0) {
        fn_827D50C0(*state, 6);
        return 6;
    }
    fn_827E4218(o->vt->GetCtx(o), out);
    (*out)->owner = o;
    fn_827D50C0(*state, 0x3e5);
    (*out)->handle = o->handle;
    fn_82517A50((*out)->data, state);
    sink = ((Slot *)(o->slots + o->index * 0x28))->sink;
    r = sink->vt->Post(sink, *out);
    if (r == 0x3e5 || r == 0x3e4)
        return 0;
    return r;
}
