extern void fn_82A1F238(void *p);

typedef struct Entry_82525078 {
    char pad[0x4c];
    void *a;
    void *b;
} Entry_82525078;

void fn_82525078(int param_1)
{
    Entry_82525078 **arr = (Entry_82525078 **)(param_1 + 0x80);
    int i;

    if (arr[0] != 0) {
        for (i = 0; i < 4; i++) {
            Entry_82525078 *e = arr[i];
            if (e->a != 0) {
                fn_82A1F238(e->a);
                e->a = 0;
            }
            if (e->b != 0) {
                fn_82A1F238(e->b);
                e->b = 0;
            }
            arr[i] = 0;
        }
    }
}
