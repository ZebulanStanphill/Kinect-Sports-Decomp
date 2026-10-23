typedef struct {
    void *ptr;
    void *rep;
} SharedPtr;

typedef struct {
    char pad0[0x44];
    int state;
    char pad48[0x6c - 0x48];
    int busy;
    char pad70[0x8c - 0x70];
    void *pending;
} Sub;

typedef struct {
    char pad0[0x600];
    unsigned int mode;
    int deferred;
    char pad608[0x69c - 0x608];
    Sub *sub;
    char pad6a0[0x7bc - 0x6a0];
    int flag7bc;
    int flag7c0;
} Obj;

extern void fn_822888F0(SharedPtr *out, Obj *o);
extern void fn_8266F628(void *p, int v);
extern void fn_82289670(Obj *o, int i);
extern void fn_822315A0(void *rep);

void fn_8228BA00(void **self)
{
    Obj *o;
    Sub *s;
    SharedPtr sp;
    int i;

    o = (Obj *)self[1];
    if (o->mode >= 2) {
        o->deferred = 1;
        return;
    }
    s = o->sub;
    if (s->state != 0 && s->state != 2 && s->pending == 0 && s->busy == 0) {
        o->flag7bc = 1;
        fn_822888F0(&sp, o);
        if (sp.ptr != 0)
            fn_8266F628(sp.ptr, 1);
        o->flag7c0 = 1;
        for (i = 1; i < 4; i++)
            fn_82289670(o, i);
        {
            void *rep = sp.rep;
            if (rep != 0) {
                o->flag7c0 = 0;
                fn_822315A0(rep);
            } else {
                o->flag7c0 = 0;
            }
        }
    }
}
