typedef struct Unk Unk;
typedef struct UnkVt {
    void *qi;
    void *addref;
    int (*release)(Unk *u);
} UnkVt;
struct Unk { UnkVt *vt; };

typedef struct S {
    char pad0[8];
    Unk *obj;
    char pad1[0x44 - 0xc];
    void *mem;
} S;

extern void fn_82EF2910(void *p);
extern void fn_82E4FE40(void *p);
extern int fn_82F3E1E0(S *s);

int fn_82EF29A8(S *s)
{
    if (s->obj == 0) {
        return 0xc00d36b6;
    }
    fn_82EF2910((char *)s - 4);
    if (s->mem != 0) {
        fn_82E4FE40(s->mem);
    }
    s->mem = 0;
    if (s->obj != 0) {
        s->obj->vt->release(s->obj);
        s->obj = 0;
    }
    return fn_82F3E1E0(s);
}
