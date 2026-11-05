typedef struct { unsigned char a, b; unsigned short id; int x; } E;
void fn_82D757A0(char *p, unsigned short id)
{
    int n = *(unsigned char *)(p + 0x32);
    int i;
    for (i = 0; i < n; i++) {
        E *e = (E *)(p + 0x34) + i;
        if (e->id == id) { e->a = 0; e->b = 0; return; }
    }
}
