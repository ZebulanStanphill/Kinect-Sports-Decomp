typedef struct Params_826CC448 {
    int a;
    int b;
    short c;
    char d;
    char e;
    char f;
    char g;
} Params_826CC448;

typedef struct Entry_826CC448 {
    int unk0;
    int state;
    void *owner;
    void *other;
    Params_826CC448 params;
} Entry_826CC448;

typedef struct Obj_826CC448 {
    int unk0;
    int refs;
} Obj_826CC448;

extern void fn_8267C498(void *p);
extern void fn_826C90C8(void *obj, int arg);
extern Entry_826CC448 *fn_82700248(void *base, int kind);

static __forceinline void SetRef_826CC448(void **slot, void *v)
{
    if (*slot != 0) {
        fn_8267C498(*slot);
    }
    *slot = v;
}

void fn_826CC448(unsigned char *param_1)
{
    Params_826CC448 s;
    Entry_826CC448 *e;
    unsigned char flags;

    flags = param_1[0x1cc];
    if ((flags & 8) == 0) {
        param_1[0x1cc] = flags | 8;
        fn_826C90C8(param_1, 0);
        s.a = 1;
        s.b = 0;
        s.c = 0;
        s.d = 0;
        s.e = -1;
        s.f = 0;
        s.g = 0;
        e = fn_82700248((char *)*(int *)(param_1 + 0xa0) + 0xa2c, 5);
        e->state = 2;
        ((Obj_826CC448 *)param_1)->refs = ((Obj_826CC448 *)param_1)->refs + 1;
        SetRef_826CC448(&e->owner, param_1);
        SetRef_826CC448(&e->other, 0);
        e->params = s;
    }
}
