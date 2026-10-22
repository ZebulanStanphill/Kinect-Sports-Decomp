typedef struct Thing Thing;
typedef struct Self {
    void *vtbl;
    char pad004[0x22c];
    void *bufA;
    void *bufB;
    char pad238[0x80];
    Thing **listA;
    Thing **listB;
    unsigned int countB;
    unsigned int countA;
    Thing *slots[16];
} Self;
extern char lbl_82050BD0[];
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82954CC0(Self *self);
extern void fn_829639F0(Thing *t);
extern void fn_82964180(Thing *t);
extern void fn_82BA02A8(Thing *t);

void fn_829A1E00(Self *self)
{
    unsigned int i;
    int j;
    Thing *t;

    self->vtbl = lbl_82050BD0;
    fn_8265C990(self->bufA, 0x24810000);
    fn_8265C990(self->bufB, 0x24810000);
    if (self->listA != 0) {
        for (i = 0; i < self->countA; i++) {
            t = self->listA[i];
            if (t != 0) {
                fn_82BA02A8(t);
                fn_829639F0(t);
            }
        }
    }
    if (self->listB != 0) {
        for (i = 0; i < self->countB; i++) {
            t = self->listB[i];
            if (t != 0) {
                fn_82BA02A8(t);
                fn_82964180(t);
            }
        }
    }
    for (j = 0; j < 16; j++) {
        t = self->slots[j];
        if (t != 0) {
            fn_82BA02A8(t);
            fn_829639F0(t);
        }
        self->slots[j] = 0;
    }
    fn_8265C990(self->listA, 0x24810000);
    fn_8265C990(self->listB, 0x24810000);
    fn_82954CC0(self);
}
