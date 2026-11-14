typedef struct Desc_82EE1490 {
    unsigned short count;
    unsigned short used;
    unsigned int flags;
} Desc_82EE1490;

extern int fn_82EE13B8(void *self, Desc_82EE1490 *desc);

int fn_82EE1490(void *self, Desc_82EE1490 *desc)
{
    desc->used = 0;
    desc->count = 0;
    if (desc->flags & 0x8000) {
        return 0x80004005;
    }
    return fn_82EE13B8(self, desc);
}
