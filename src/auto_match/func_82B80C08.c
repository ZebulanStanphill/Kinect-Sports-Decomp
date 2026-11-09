extern void *memset(void *, int, unsigned int);
typedef struct Obj_82B80C08 { unsigned int pad[2], flags, rest[8]; } Obj_82B80C08;
Obj_82B80C08 *fn_82B80C08(Obj_82B80C08 *self, unsigned int type)
{
    memset(self,0,0x2c);
    self->flags = (self->flags & ~0x3f80U) | ((type << 7) & 0x3f80U) | 0x400000U;
    return self;
}
