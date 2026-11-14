extern unsigned int fn_825580C0(unsigned int index, unsigned int mask);
extern int fn_828EB518(unsigned int index);
extern int lbl_83265988;

static __forceinline int Resolve(unsigned int i)
{
    if (i == 0xff)
        return lbl_83265988;
    return fn_828EB518(i);
}

int fn_8260E070(void *context, unsigned int mask)
{
    int i;
    int found;

    for (i = 0; i < 4; i++) {
        found = (int)fn_825580C0(i, mask);
        if (found != 0)
            return Resolve(i);
    }
    return found;
}
