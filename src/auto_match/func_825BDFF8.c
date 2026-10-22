typedef struct {
    unsigned int key;
    int value;
} Entry;

typedef struct {
    char pad[0x10];
    Entry *entries;
    unsigned int count;
} Table;

typedef struct {
    char data[32];
} Buf;

extern void fn_825200F0(Buf *out, Entry *e);
extern void fn_827DDFB8(int a, Buf *b);
extern void fn_82A1E650(int a, int b);

int fn_825BDFF8(char *param_1, int *param_2, int param_3)
{
    unsigned int i;
    Entry *e;
    int type;
    Buf buf;

    fn_82A1E650(*(int *)(param_1 + 0x1d8), -1);
    for (i = 0; i < (*(Table **)(param_1 + 0x8c))->count; i++) {
        e = &(*(Table **)(param_1 + 0x8c))->entries[i];
        if (e != 0) {
            type = e->key ? e->key >> 24 : 0x7a;
            if (type == *param_2) {
                fn_825200F0(&buf, e);
                fn_827DDFB8(param_3, &buf);
            }
        }
    }
    return 0;
}
