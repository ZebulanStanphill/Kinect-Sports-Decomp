typedef struct Obj_82ABDCF8 {
    char pad0[0x28];
    unsigned int flags;
    int pad2c;
    unsigned int format;
    char pad34[0x320 - 0x34];
    unsigned int cached;
    void *source;
} Obj_82ABDCF8;

unsigned int fn_82ABDCF8(Obj_82ABDCF8 *self)
{
    if (self->source != 0) {
        return self->cached;
    }
    if ((self->flags & 0x10000) != 0) {
        return 0;
    }
    return 0xffff0000 != (self->format & 0xffff0000) ? 0x10 : 0;
}
