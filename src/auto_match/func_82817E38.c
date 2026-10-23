typedef struct { int a; int b; unsigned int id; } Entry;
typedef struct { unsigned int count; Entry *items; } List;

int fn_82817E38(List *l, unsigned int id, int index, Entry **out)
{
    unsigned int i;
    int n;
    if (l != 0 && id != 0 && out != 0) {
        n = 0;
        for (i = 0; i < l->count; i++) {
            if (l->items[i].id == id) {
                if (n == index) {
                    *out = &l->items[i];
                    return 1;
                }
                n++;
            }
        }
    }
    *out = 0;
    return 0;
}
