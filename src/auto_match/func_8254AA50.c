extern void fn_8254A9B0(void *p);
extern void fn_8265CA20(void *p);

typedef struct Self {
    char pad[0x10];
    void *child[4];
} Self;

Self *fn_8254AA50(Self *self)
{
    void *p;

    p = self->child[0];
    if (p != 0) {
        fn_8254A9B0(p);
        fn_8265CA20(p);
    }
    p = self->child[1];
    if (p != 0) {
        fn_8254A9B0(p);
        fn_8265CA20(p);
    }
    p = self->child[2];
    if (p != 0) {
        fn_8254A9B0(p);
        fn_8265CA20(p);
    }
    p = self->child[3];
    if (p != 0) {
        fn_8254A9B0(p);
        fn_8265CA20(p);
    }
    fn_8265CA20(self);
    return self;
}
