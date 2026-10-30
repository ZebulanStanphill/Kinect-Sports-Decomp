typedef struct Visitor { void *vt; int owner; int ctx; int pad; } Visitor;
typedef struct PtrVec { void **first; void **last; } PtrVec;
extern void *lbl_821B2FA8[];
extern void fn_822ABBF0(void *item, Visitor *v);

void fn_82368850(int p)
{
    Visitor v;
    PtrVec *outer = *(PtrVec **)(p + 8);
    PtrVec **it;
    void **jt;
    v.owner = p;
    v.vt = lbl_821B2FA8;
    v.ctx = *(int *)(p + 0x1c);
    for (it = (PtrVec **)outer->first; it < (PtrVec **)outer->last; it++) {
        PtrVec *inner = *it;
        for (jt = inner->first; jt < inner->last; jt++) {
            fn_822ABBF0(*jt, &v);
        }
    }
}
