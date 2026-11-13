typedef struct {
    char pad0[0x4c];
    int unk4C;
    int unk50;
    int unk54;
    char pad58[0x1c];
    int unk74;
    char pad78[0x74];
    void *child;
} Sub_82483C50;
typedef struct {
    char pad0[0x10];
    Sub_82483C50 sub;
} Obj_82483C50;
extern void fn_8247F240(Sub_82483C50 *s, int a);
extern void fn_822746B8(void *p, int a);

void fn_82483C50(Obj_82483C50 *o)
{
    Sub_82483C50 *s = &o->sub;
    s->unk4C = 0;
    s->unk50 = 0;
    s->unk74 = 0;
    s->unk54 = 1;
    fn_8247F240(s, 0);
    if (s->child != 0) {
        fn_822746B8(s->child, 0);
        s->child = 0;
    }
}
