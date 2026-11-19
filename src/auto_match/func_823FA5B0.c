typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Reader_823FA5B0;

typedef struct ReaderVtbl_823FA5B0 {
    unsigned char pad0[0x14];
    void (*read)(struct Reader_823FA5B0 *self, int key, void *out); /* 0x14 */
} ReaderVtbl_823FA5B0;

typedef struct Reader_823FA5B0 {
    ReaderVtbl_823FA5B0 *vt;
} Reader_823FA5B0;

typedef struct Slots_823FA5B0 {
    int v[8];
} Slots_823FA5B0;

typedef struct Store_823FA5B0 {
    int pad0[2];
    char *ids;       /* 0x08 */
    char *positions; /* 0x0c */
    char *flags;     /* 0x10 */
    char *values14;  /* 0x14 */
    char *scales;    /* 0x18 */
    char *values1c;  /* 0x1c */
    char *weights;   /* 0x20 */
    char *rotations; /* 0x24 */
    char *slotsA;    /* 0x28 */
    char *slotsB;    /* 0x2c */
    Reader_823FA5B0 *r30;
    int pad34;
    Reader_823FA5B0 *r38;
    int pad3c;
    Reader_823FA5B0 *r40;
    int pad44;
    Reader_823FA5B0 *r48;
    int pad4c;
    Reader_823FA5B0 *r50;
    int pad54;
    Reader_823FA5B0 *r58;
    int pad5c;
    Reader_823FA5B0 *r60;
    int pad64;
    Reader_823FA5B0 *r68;
    int pad6c;
    Reader_823FA5B0 *r70;
    int pad74;
    Reader_823FA5B0 *r78;
} Store_823FA5B0;

void fn_823FA5B0(Store_823FA5B0 *self, int key, unsigned int offset)
{
    unsigned char flag;
    int id;
    int value14;
    float scale;
    int value1c;
    float weight;
    __vector4 position;
    __vector4 rotation;
    Slots_823FA5B0 slotsA;
    Slots_823FA5B0 slotsB;
    int i;

    slotsA.v[0] = 0;
    for (i = 1; i < 8; i++)
        slotsA.v[i] = -1;
    slotsB.v[0] = 0;
    for (i = 1; i < 8; i++)
        slotsB.v[i] = -1;
    self->r30->vt->read(self->r30, key, &id);
    self->r38->vt->read(self->r38, key, &position);
    self->r40->vt->read(self->r40, key, &flag);
    self->r48->vt->read(self->r48, key, &value14);
    self->r50->vt->read(self->r50, key, &scale);
    self->r58->vt->read(self->r58, key, &value1c);
    self->r60->vt->read(self->r60, key, &weight);
    self->r68->vt->read(self->r68, key, &rotation);
    self->r70->vt->read(self->r70, key, &slotsA);
    self->r78->vt->read(self->r78, key, &slotsB);
    if (offset != 0) {
        *(int *)(self->ids + offset) = id;
        *(__vector4 *)(self->positions + offset) = position;
        *(unsigned char *)(self->flags + offset) = flag;
        *(int *)(self->values14 + offset) = value14;
        *(float *)(self->scales + offset) = scale;
        *(int *)(self->values1c + offset) = value1c;
        *(float *)(self->weights + offset) = weight;
        *(__vector4 *)(self->rotations + offset) = rotation;
        *(Slots_823FA5B0 *)(self->slotsA + offset) = slotsA;
        *(Slots_823FA5B0 *)(self->slotsB + offset) = slotsB;
    }
}
