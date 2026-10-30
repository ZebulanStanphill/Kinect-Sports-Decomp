typedef struct { int pad; int x4; unsigned __int64 key; int x10; } Entry;
typedef struct { unsigned __int64 key; int x8; int xc; int x10; int x14; int x18; } Out;
extern Entry *fn_82876910(void *tbl, int a, int b);

int fn_82869768(char *self, char *src, int a, int b, Out *out)
{
    Entry *e = fn_82876910(src + 8, a, b);
    if (e != 0) {
        out->x18 = *(int *)(self + 0x41c);
        out->x14 = *(int *)(src + 0x1c);
        out->key = e->key;
        out->x8 = e->x10;
        out->x10 = 0;
        out->xc = e->x4;
        return 1;
    }
    return 0x42;
}
