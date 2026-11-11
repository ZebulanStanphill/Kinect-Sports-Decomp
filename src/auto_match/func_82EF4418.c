extern int fn_82EF41B8(void *self, void *a, void *b, void *c, void *e);

int fn_82EF4418(char *self, void *a, void *b, void *c)
{
    return fn_82EF41B8(self, a, b, c, *(void **)(self + 0x48));
}
