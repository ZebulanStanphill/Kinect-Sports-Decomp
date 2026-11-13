extern unsigned char fn_82F96B78(void *self, void *other);
extern unsigned char fn_82F91258(void *other, void *key);

unsigned char fn_82F93B30(char *self, void *other)
{
    if (!fn_82F96B78(self, other))
        return 0;
    if (!fn_82F91258(other, self + 0x234))
        return 0;
    return 1;
}
