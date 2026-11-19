extern unsigned int lbl_8320A898;
extern void fn_8263CBB0(unsigned int hardware, unsigned int index, void *resource, unsigned __int64 mask);

typedef struct Texture_82838650 {
    char pad0[0x1c];
    unsigned int format; /* 0x1c */
    char pad20[0x14];
    void *resource; /* 0x34 */
} Texture_82838650;

void fn_82838650(Texture_82838650 *self, unsigned int index)
{
    switch (self->format) {
    case 0:
        fn_8263CBB0(lbl_8320A898, index, self->resource, 0x8000000000000000ULL >> (index + 32));
        break;
    case 2:
        fn_8263CBB0(lbl_8320A898, index, self->resource, 0x8000000000000000ULL >> (index + 32));
        break;
    case 3:
        fn_8263CBB0(lbl_8320A898, index, self->resource, 0x8000000000000000ULL >> (index + 32));
        break;
    case 4:
        fn_8263CBB0(lbl_8320A898, index, *(void **)self->resource, 0x8000000000000000ULL >> (index + 32));
        break;
    case 5:
        fn_8263CBB0(lbl_8320A898, index, self->resource, 0x8000000000000000ULL >> (index + 32));
        break;
    }
}
