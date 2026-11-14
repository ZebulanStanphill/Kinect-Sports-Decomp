extern int fn_82D00450(void *map, int key, int def);

int fn_82E1AB28(char *self, int key)
{
    return fn_82D00450(self + 0x2c, key, key);
}
