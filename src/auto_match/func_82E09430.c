extern unsigned int fn_82D00450(void *table, unsigned int key, unsigned int hint);

unsigned int fn_82E09430(char *self, unsigned int key)
{
    return fn_82D00450(self + 8, key, 0);
}
