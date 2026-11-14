typedef struct {
    char pad[0x2c];
    unsigned char **items;
    int count;
} List_82DF4460;

void fn_82DF4460(List_82DF4460 *o)
{
    int i;
    int n = o->count;
    for (i = 0; i < n; i++) {
        o->items[i][12] &= 0xfd;
    }
}
