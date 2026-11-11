extern void *fn_8265C940(unsigned int size, unsigned int flags);

void *fn_82F96108(void *self, unsigned int count, void *unused)
{
    return fn_8265C940(count * 24, 0x20ff4000);
}
