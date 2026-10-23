extern void fn_82E50D88(void *lock);
extern void fn_82E50FA0(void *lock);
extern int fn_82E644B8(void *map, int key, void **out);

typedef struct Entry {
    char pad[0x6c];
    int value;
} Entry;

int fn_82E64DA0(char *self, int *out)
{
    int hr;
    Entry *e;

    hr = 0;
    fn_82E50D88(self + 0xc);
    if (out == 0) {
        hr = 0x80070057;
    } else {
        *out = 0;
        if (*(int *)(self + 0xb8) == -1) {
            hr = 0x80004005;
        } else {
            *out = (fn_82E644B8(self + 0x4c, *(int *)(self + 0xb8), (void **)&e) ? e : 0)->value;
        }
    }
    fn_82E50FA0(self + 0xc);
    return hr;
}
