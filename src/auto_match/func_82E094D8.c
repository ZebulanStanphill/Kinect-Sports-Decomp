extern unsigned int fn_82D00450(void *table, unsigned int key, unsigned int hint);

unsigned int fn_82E094D8(char *self, unsigned int key)
{
    return fn_82D00450(self + 0xc, key, 0);
}
