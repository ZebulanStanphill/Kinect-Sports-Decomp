typedef struct { char pad[0xdc]; int def; } Base;
extern int *fn_82D41968(Base *b);

int fn_82D41A18(char *p)
{
    Base *b = (Base *)(p - 0x10);
    int *r = fn_82D41968(b);
    if (r != 0)
        return *r;
    return b->def;
}
