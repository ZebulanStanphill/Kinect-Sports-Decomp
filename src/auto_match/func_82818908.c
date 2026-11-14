typedef void (*code)();
typedef struct { char pad[0x20]; code cb; } Ops_82818908;
typedef struct { char pad[0x10]; Ops_82818908 *ops; char pad2[0x61]; unsigned char shift; } S_82818908;

int fn_82818908(S_82818908 *self, unsigned int size)
{
    unsigned short n = (unsigned short)size;
    code cb = self->ops->cb;
    if (cb != 0) {
        cb();
    } else {
        for (self->shift = 0; n > 1; n >>= 1)
            self->shift++;
    }
    return 1 << self->shift;
}
