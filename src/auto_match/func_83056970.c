typedef struct Codec_83056970 Codec_83056970;

typedef struct CodecVt_83056970 {
    void *f0;
    void *f4;
    void (*Notify)(Codec_83056970 *self); /* 0x08 */
} CodecVt_83056970;

typedef struct Slot_83056970 {
    char data[0x14];
} Slot_83056970;

struct Codec_83056970 {
    CodecVt_83056970 *vt; /* 0x00 */
    int context;          /* 0x04 */
    void *decoder4;       /* 0x08 */
    void *decoder3;       /* 0x0c */
    void *decoder3f;      /* 0x10 */
    Slot_83056970 slot4;  /* 0x14 */
    Slot_83056970 slot3;  /* 0x28 */
    Slot_83056970 slot3f; /* 0x3c */
};

extern void *fn_830572B0(unsigned int size);
extern void *fn_830582A8(void *mem);
extern void *fn_830582B8(void *decoder);
extern int fn_830582C0(void *decoder, Slot_83056970 *slot, int context);
extern void *fn_830594D8(void *mem);
extern void *fn_830594E8(void *decoder);
extern int fn_830594F0(void *decoder, Slot_83056970 *slot, int context);
extern void *fn_8305ABC8(void *mem);
extern void *fn_8305ABD8(void *decoder);
extern int fn_8305ABE0(void *decoder, Slot_83056970 *slot, int context);
extern int fn_8305B208(Slot_83056970 *slot, void *desc);

int fn_83056970(Codec_83056970 *self, unsigned int type)
{
    void *mem;
    int result;

    switch (type) {
    case 4:
        if (self->decoder4 != 0) {
            return 1;
        }
        mem = fn_830572B0(4);
        self->decoder4 = mem != 0 ? fn_830594D8(mem) : 0;
        if (self->decoder4 == 0) {
            return 0x34;
        }
        result = fn_8305B208(&self->slot4, fn_830594E8(self->decoder4));
        if (result != 1) {
            return result;
        }
        result = fn_830594F0(self->decoder4, &self->slot4, self->context);
        break;
    case 3:
        if (self->decoder3 != 0) {
            return 1;
        }
        mem = fn_830572B0(4);
        self->decoder3 = mem != 0 ? fn_830582A8(mem) : 0;
        if (self->decoder3 == 0) {
            return 0x34;
        }
        result = fn_8305B208(&self->slot3, fn_830582B8(self->decoder3));
        if (result != 1) {
            return result;
        }
        result = fn_830582C0(self->decoder3, &self->slot3, self->context);
        break;
    case 0x3f:
        if (self->decoder3f != 0) {
            return 1;
        }
        mem = fn_830572B0(4);
        self->decoder3f = mem != 0 ? fn_8305ABC8(mem) : 0;
        if (self->decoder3f == 0) {
            return 0x34;
        }
        result = fn_8305B208(&self->slot3f, fn_8305ABD8(self->decoder3f));
        if (result != 1) {
            return result;
        }
        result = fn_8305ABE0(self->decoder3f, &self->slot3f, self->context);
        break;
    default:
        return 0x4e;
    }
    if (result == 1) {
        self->vt->Notify(self);
        return 1;
    }
    return result;
}
