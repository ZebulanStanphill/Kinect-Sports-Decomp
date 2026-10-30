typedef struct {
    int unk0;
    int unk4;
    int unk8;
    int unkC;
    void *cur;
} Self_82FAD460;

extern void *fn_82FAD1F0(Self_82FAD460 *self, int a, int b);

int fn_82FAD460(Self_82FAD460 *self, void **out)
{
    void *p;

    self->unk4 = 0;
    self->unk8 = 0;
    self->unkC = 0;
    p = fn_82FAD1F0(self, -1, 0);
    *out = p;
    if (p != 0) {
        self->cur = p;
        return 1;
    }
    return 2;
}
