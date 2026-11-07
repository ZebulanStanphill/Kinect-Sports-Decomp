typedef struct VTable_823BD5B8 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void (*Serialize)(void *self, void *ar, void *value);
} VTable_823BD5B8;

typedef struct Serializer_823BD5B8 {
    VTable_823BD5B8 *vt;
} Serializer_823BD5B8;

typedef struct Owner_823BD5B8 {
    int f0;
    int f4;
    Serializer_823BD5B8 *s8;
    Serializer_823BD5B8 *sC;
    Serializer_823BD5B8 *s10;
} Owner_823BD5B8;

extern int fn_8223C478(void *ar, int a, int b);
extern int fn_823BDE88(void *ar, void *value);
extern int fn_828E5660(void *ar, float f, int a, int b);
extern int fn_828E9DB8(void *ar, int value, int a);
extern __declspec(noreturn) void fn_82F622E0(const char *msg);

void fn_823BD5B8(Owner_823BD5B8 *self, void *ar, char *d)
{
    int b;
    unsigned int i;
    unsigned char t;

    fn_823BDE88(ar, d + 0x10);
    fn_828E5660(ar, *(float *)(d + 0x1c), 11, 4);
    fn_823BDE88(ar, d + 0x20);
    self->s8->vt->Serialize(self->s8, ar, d + 0x30);
    self->s8->vt->Serialize(self->s8, ar, d + 0x40);
    self->s8->vt->Serialize(self->s8, ar, d + 0x50);
    self->s8->vt->Serialize(self->s8, ar, d + 0x60);
    self->s8->vt->Serialize(self->s8, ar, d + 0x70);
    self->s8->vt->Serialize(self->s8, ar, d + 0x80);
    self->s8->vt->Serialize(self->s8, ar, d + 0x90);
    self->s8->vt->Serialize(self->s8, ar, d + 0xa0);
    self->s8->vt->Serialize(self->s8, ar, d + 0xb0);
    self->s8->vt->Serialize(self->s8, ar, d + 0xc0);
    self->s8->vt->Serialize(self->s8, ar, d + 0xd0);
    self->s8->vt->Serialize(self->s8, ar, d + 0xe0);
    self->s8->vt->Serialize(self->s8, ar, d + 0xf0);
    self->s8->vt->Serialize(self->s8, ar, d + 0x100);
    self->s8->vt->Serialize(self->s8, ar, d + 0x110);
    self->s8->vt->Serialize(self->s8, ar, d + 0x120);
    self->s8->vt->Serialize(self->s8, ar, d + 0x130);
    self->s8->vt->Serialize(self->s8, ar, d + 0x140);
    self->s8->vt->Serialize(self->s8, ar, d + 0x150);
    self->s8->vt->Serialize(self->s8, ar, d + 0x160);
    b = *(unsigned char *)(d + 0x170) != 0;
    fn_8223C478(ar, 1, 0);
    fn_828E9DB8(ar, b, 1);
    self->sC->vt->Serialize(self->sC, ar, d + 0x180);
    self->s10->vt->Serialize(self->s10, ar, d + 0x190);
    for (i = 0; i < 20; i++) {
        if (i >= 20) {
            fn_82F622E0("invalid bitset<N> position");
        }
        t = (((unsigned int *)d)[(i >> 5) + 0x65] & (1 << (i & 31))) != 0;
        fn_8223C478(ar, 1, 0);
        fn_828E9DB8(ar, t != 0, 1);
    }
}
