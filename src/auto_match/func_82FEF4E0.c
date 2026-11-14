extern int fn_82FECEE8(int, void *);

int fn_82FEF4E0(unsigned char *self, int count)
{
    self[0xdb] |= 0x80;
    *(int *)(self + 0xd0) = count * 48;
    return fn_82FECEE8(6, self);
}
