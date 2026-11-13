extern void *fn_829B4FF8(int);
extern void *memset(void *, int, unsigned int);

void *fn_829AB378(void *p)
{
    void *r;
    if (p == 0)
        return p;
    r = fn_829B4FF8(2);
    if (r != 0)
        memset(r, 0, 0x40);
    return r;
}
