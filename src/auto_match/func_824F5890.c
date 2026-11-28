typedef struct Surface_824F5890 {
    char reserved[0x20];
    unsigned int base;
    char padding[0x0c];
    unsigned int mipBase;
} Surface_824F5890;

typedef struct Surfaces_824F5890 {
    char reserved[8];
    Surface_824F5890 *sourceA;
    Surface_824F5890 *sourceB;
    Surface_824F5890 *targetA;
    Surface_824F5890 *targetB;
} Surfaces_824F5890;

extern void *lbl_8320A898;
extern void fn_8263CBB0(void *handle, int group, unsigned int value, unsigned __int64 mask);
extern void fn_8263BDD8(Surface_824F5890 *s, int level, int face, int flags, int *data, int *pitch,
                        int *width, int *height);
extern void fn_8262FBD8(Surface_824F5890 *s, unsigned int base, unsigned int mipBase);
extern void fn_82A1DBD8(void *dst, const void *src, int size);

void fn_824F5890(Surfaces_824F5890 *self)
{
    fn_8263CBB0(lbl_8320A898, 0, 0, 0x80000000ULL);
    fn_8263CBB0(lbl_8320A898, 1, 0, 0x40000000ULL);
    fn_8263CBB0(lbl_8320A898, 2, 0, 0x20000000ULL);

    {
        int layout[5];
        fn_8263BDD8(self->sourceA, 0, 0, 0x1000, &layout[0], &layout[3], &layout[1], &layout[2]);
        fn_8263BDD8(self->targetA, 0, 0, 0, &layout[1], &layout[2], &layout[4], &layout[3]);
        fn_82A1DBD8((void *)layout[1], (void *)layout[0], layout[2] * 0x300);
        fn_8262FBD8(self->targetA, self->targetA->base & ~0xfffu, self->targetA->mipBase & ~0xfffu);
        fn_8262FBD8(self->sourceA, self->sourceA->base & ~0xfffu, self->sourceA->mipBase & ~0xfffu);

        fn_8263BDD8(self->sourceB, 0, 0, 0x1000, &layout[2], &layout[1], &layout[3], &layout[4]);
        fn_8263BDD8(self->targetB, 0, 0, 0, &layout[1], &layout[0], &layout[3], &layout[4]);
        fn_82A1DBD8((void *)layout[1], (void *)layout[2], layout[0] * 0x300);
        fn_8262FBD8(self->targetB, self->targetB->base & ~0xfffu, self->targetB->mipBase & ~0xfffu);
        fn_8262FBD8(self->sourceB, self->sourceB->base & ~0xfffu, self->sourceB->mipBase & ~0xfffu);
    }
}
