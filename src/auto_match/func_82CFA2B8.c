typedef struct { int a; int count; } Sub;

void fn_82CFA2B8(char *p)
{
    Sub *s = (Sub *)(p + 0x14);
    s->count--;
}
