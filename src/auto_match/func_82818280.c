typedef int (*Compare_82818280)(void *, const void *);
extern int fn_82817CA8(void *self, const void *key, int index, int kind, void **out, Compare_82818280 compare);
int fn_82818280(void *self, const void *key, int index, void **out, Compare_82818280 compare) {
    return fn_82817CA8(self, key, index, 0, out, compare);
}
