typedef struct Obj_828DDCD0 {
    char pad[0x80];
    unsigned int kind;           /* 0x80 */
    unsigned int value;          /* 0x84 */
    float level;                 /* 0x88 */
    unsigned char data[0x24];    /* 0x8c */
    unsigned char id[8];         /* 0xb0 */
    unsigned char key[0x10];     /* 0xb8 */
} Obj_828DDCD0;

extern int fn_828E9D90(void *stream);
extern int fn_828E9DA8(void *stream);
extern unsigned int fn_828E9FF8(void *stream, int bits);
extern void fn_828EA180(void *stream, void *out, int bytes);

static __forceinline unsigned int ReadBits_828DDCD0(void *stream, int bits)
{
    if (fn_828E9DA8(stream) - fn_828E9D90(stream) >= bits) {
        return fn_828E9FF8(stream, bits);
    }
    return 0;
}

static __forceinline void ReadBytes_828DDCD0(void *stream, void *out, int bytes)
{
    if (fn_828E9DA8(stream) - fn_828E9D90(stream) >= bytes * 8) {
        fn_828EA180(stream, out, bytes);
    }
}

void fn_828DDCD0(Obj_828DDCD0 *self, void *stream)
{
    self->kind = ReadBits_828DDCD0(stream, 1);
    switch (self->kind) {
    case 0:
        self->value = ReadBits_828DDCD0(stream, 0x20);
        ReadBytes_828DDCD0(stream, self->data, 0x24);
        ReadBytes_828DDCD0(stream, self->id, 8);
        ReadBytes_828DDCD0(stream, self->key, 0x10);
        break;
    case 1:
        self->value = ReadBits_828DDCD0(stream, 0x20);
        self->level = (float)ReadBits_828DDCD0(stream, 4) * 0.06666667f;
        break;
    }
}
