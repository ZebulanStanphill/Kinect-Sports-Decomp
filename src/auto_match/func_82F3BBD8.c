typedef struct Unk Unk;
typedef struct UnkVt {
    void *qi;
    int (*addref)(Unk *u);
    int (*release)(Unk *u);
} UnkVt;
struct Unk { UnkVt *vt; };

typedef struct S {
    char pad0[8];
    Unk *obj;
    char pad1[0x1c - 0xc];
    char val[8];
} S;

int fn_82F3BBD8(S *s, Unk *u)
{
    if (u == 0) {
        return 0x80070057;
    }
    if (s->obj != 0) {
        s->obj->vt->release(s->obj);
        s->obj = 0;
    }
    s->obj = u;
    u->vt->addref(u);
    *(__int64 *)s->val = 0x18;
    return 0;
}
