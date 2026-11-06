typedef struct Stream_828DA728 Stream_828DA728;

typedef struct Obj_828DA728 {
    int pad00[0x1b];
    char *owner;
    int pad70[4];
    unsigned char flag;
    int pad84;
    __int64 value88;
    __int64 value90;
    __int64 value98;
    __int64 valueA0;
    __int64 valueA8;
} Obj_828DA728;

extern __int64 fn_828AFF88(char *p);
extern int fn_828E9D90(Stream_828DA728 *s);
extern int fn_828E9DA8(Stream_828DA728 *s);
extern int fn_828E9FF8(Stream_828DA728 *s, int bits);
extern __int64 fn_828EA0D0(Stream_828DA728 *s, int bits);

static __forceinline int ReadBit(Stream_828DA728 *s)
{
    if (fn_828E9DA8(s) - fn_828E9D90(s) >= 1) {
        return fn_828E9FF8(s, 1);
    }
    return 0;
}

static __forceinline __int64 Read64(Stream_828DA728 *s)
{
    if (fn_828E9DA8(s) - fn_828E9D90(s) >= 0x1e) {
        return fn_828EA0D0(s, 0x1e);
    }
    return 0;
}

void fn_828DA728(Obj_828DA728 *self, Stream_828DA728 *s)
{
    __int64 now = fn_828AFF88(self->owner + 0x278);

    self->flag = ReadBit(s) != 0;
    if (self->flag) {
        self->value88 = Read64(s);
        self->value98 = now;
        self->valueA8 = -1;
        self->value90 = -1;
    } else {
        self->value88 = Read64(s) - 100000;
        self->value90 = now;
        self->valueA8 = Read64(s);
        self->value98 = -1;
    }
}
