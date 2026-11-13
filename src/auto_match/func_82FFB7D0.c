typedef struct { int a, b; } Pair;
extern int fn_82FFE5B8(void *list, int key, Pair value);
int fn_82FFB7D0(char *self, int a, int b, int key)
{
    Pair p;
    p.a = a;
    p.b = b;
    return fn_82FFE5B8(self + 8, key, p) != 0 ? 1 : 0x34;
}
