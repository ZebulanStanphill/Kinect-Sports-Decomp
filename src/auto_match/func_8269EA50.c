typedef struct Descriptor_8269EA50 {
    unsigned int kind;       /* 0x0 */
    unsigned int value;      /* 0x4 */
    unsigned short flags;    /* 0x8 */
    unsigned char mode;      /* 0xa */
    signed char alpha;       /* 0xb */
    unsigned char x;         /* 0xc */
    unsigned char y;         /* 0xd */
    unsigned short reserved; /* 0xe */
} Descriptor_8269EA50;

extern unsigned int fn_8269D9C0(void *self, Descriptor_8269EA50 *descriptor);

static __forceinline void *Lookup_8269EA50(char *self, Descriptor_8269EA50 *descriptor)
{
    unsigned int result = fn_8269D9C0(self + 0x88, descriptor);
    return result ? (void *)(result + 0x10) : 0;
}

unsigned char fn_8269EA50(char *self, const Descriptor_8269EA50 *source)
{
    Descriptor_8269EA50 descriptor;
    if (source->kind != 0x40 && source->kind != 0x80) {
        descriptor = *source;
    } else {
        descriptor.kind = source->kind;
        descriptor.value = 0;
        descriptor.flags = 0;
        descriptor.mode = 0;
        descriptor.alpha = -1;
        descriptor.x = 0;
        descriptor.y = 0;
    }
    return Lookup_8269EA50(self, &descriptor) != 0;
}
