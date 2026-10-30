typedef struct {
    void *vt;
    int pad[0x13];
    int a50;
    int a54;
    int a58;
    unsigned short s5c;
    int a60;
    unsigned short s64;
    int a68;
} T;

extern char lbl_820EBAA4[];
extern void fn_82BE5908(void *p, int id, const char *name);

T *fn_82BF5710(T *p)
{
    fn_82BE5908(p, 0x1033, "RequestEnterZone");
    p->a50 = 1;
    p->a54 = 0;
    p->vt = lbl_820EBAA4;
    p->a58 = 0;
    p->s5c = 0;
    p->a60 = 0;
    p->s64 = 0;
    p->a68 = 0;
    return p;
}
