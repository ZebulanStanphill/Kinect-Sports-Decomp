typedef struct { int key; int value; int extra; } Entry_82CEABA0;
typedef struct { Entry_82CEABA0 *data; int count; } Table_82CEABA0;
extern int fn_82CFBBF0(int key, int name);
static __forceinline Entry_82CEABA0 *dat(Table_82CEABA0 *t) { return t->data; }

int *fn_82CEABA0(Table_82CEABA0 *t, int name)
{
    int i;
    for (i = 0; i < t->count; i++) {
        if (fn_82CFBBF0(dat(t)[i].key, name) == 0) {
            return &dat(t)[i].value;
        }
    }
    return 0;
}
