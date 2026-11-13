extern void fn_82DA50D8(void *self, void **keys, int n, unsigned d, int flags);
extern void fn_82DB5190(void *self, void *key);
extern void fn_82DB5030(void *self, void **keys, int n);

void fn_82DB5860(void *self, void **keys, int n, unsigned d, int flags)
{
    fn_82DA50D8(self, keys, n, d, flags);
    if (flags & 1) {
        if (n != 1)
            fn_82DB5030(self, keys, n);
        else
            fn_82DB5190(self, keys[0]);
    }
}
