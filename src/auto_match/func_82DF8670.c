extern unsigned int fn_82CEA280(void *table, unsigned int key, unsigned int hint);

unsigned int fn_82DF8670(char *self, unsigned int key)
{
    return fn_82CEA280(self + 4, key, 0);
}
