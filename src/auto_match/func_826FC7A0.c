typedef struct Ref_826FC7A0 { int pad; long refs; } Ref_826FC7A0;
typedef struct Var_826FC7A0 { unsigned char tag; void *rc; int pad[2]; } Var_826FC7A0;
typedef struct Slot_826FC7A0 { Var_826FC7A0 v; void *ref; int pad[1]; } Slot_826FC7A0;
typedef struct Node_826FC7A0 { int count; } Node_826FC7A0;
typedef struct S_826FC7A0 {
    int p0;
    int p4;
    int p8;
    unsigned int tagged;   /* 0x0c */
    int p10;
    Node_826FC7A0 *node;   /* 0x14 */
    int p18;
    int p1c;
    Var_826FC7A0 v20;      /* 0x20 */
    Var_826FC7A0 v30;      /* 0x30 */
    int p40[2];
    Slot_826FC7A0 s48;     /* 0x48 */
    Slot_826FC7A0 s60;     /* 0x60 */
} S_826FC7A0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_82696330(Var_826FC7A0 *v);
extern void fn_8269A608(Node_826FC7A0 *n);

static __forceinline void Slot_Dtor_826FC7A0(Slot_826FC7A0 *s)
{
    if (s->ref != 0) {
        fn_8267C4F0(s->ref);
    }
    fn_82696330(&s->v);
}

void fn_826FC7A0(S_826FC7A0 *s)
{
    Node_826FC7A0 *n;
    Ref_826FC7A0 *r;

    Slot_Dtor_826FC7A0(&s->s60);
    Slot_Dtor_826FC7A0(&s->s48);
    fn_82696330(&s->v30);
    fn_82696330(&s->v20);
    n = s->node;
    if (n != 0) {
        if (--n->count <= 0) {
            fn_8269A608(n);
            fn_8267BE38(n);
        }
    }
    r = (Ref_826FC7A0 *)(s->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
}
