typedef struct Out_82AA6110 {
    unsigned int flags;
    int count;
    unsigned char done;
} Out_82AA6110;

void fn_82AA6110(unsigned int flags, Out_82AA6110 *out)
{
    flags &= ~0x1c1;
    out->flags = flags;
    out->count = 0;
    out->done = 0;
}
