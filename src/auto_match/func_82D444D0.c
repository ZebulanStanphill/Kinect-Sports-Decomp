typedef struct Entry_82D444D0 {
    const char *name;
    unsigned int time;
    unsigned int pad;
} Entry_82D444D0;

typedef struct Buf_82D444D0 {
    int unk0;
    Entry_82D444D0 *cur;
    int unk8;
    Entry_82D444D0 *end;
} Buf_82D444D0;

typedef struct Src_82D444D0 {
    int unk0;
    int unk4;
    int value;
} Src_82D444D0;

struct Obj_82D444D0;

typedef struct Args_82D444D0 {
    struct Obj_82D444D0 *obj;
    int zero;
    int value;
    Src_82D444D0 *src;
} Args_82D444D0;

typedef struct Vt_82D444D0 {
    void *slots[9];
    void (*f24)(struct Obj_82D444D0 *, int, Args_82D444D0 *, int);
} Vt_82D444D0;

typedef struct Obj_82D444D0 {
    Vt_82D444D0 *vt;
} Obj_82D444D0;

typedef struct Self_82D444D0 {
    int pad[6];
    Obj_82D444D0 *obj;
} Self_82D444D0;

extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);

static __forceinline void Trace_82D444D0(const char *name)
{
    Buf_82D444D0 *buf;
    Entry_82D444D0 *e;

    buf = (Buf_82D444D0 *)KeTlsGetValue(lbl_8323B4A0);
    e = buf->cur;
    if (e < buf->end) {
        e->name = name;
        e->time = (unsigned int)__mftb();
        buf->cur = e + 1;
    }
}

static __forceinline void Call_82D444D0(Obj_82D444D0 *o, int a, Args_82D444D0 *args, int b)
{
    o->vt->f24(o, a, args, b);
}

void fn_82D444D0(Self_82D444D0 *self, int a, Src_82D444D0 *src, int b)
{
    Args_82D444D0 args;

    Trace_82D444D0("TtrcBvShape");

    args.src = src;
    args.zero = 0;
    args.obj = self->obj;
    args.value = src->value;
    Call_82D444D0(args.obj, a, &args, b);

    Trace_82D444D0("Et");
}
