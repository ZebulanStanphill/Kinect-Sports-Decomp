typedef struct Obj_82E161D8 { struct { char pad[0x10]; unsigned int (*f10)(); } *vt; } Obj_82E161D8;
extern char *fn_82CEAC60(void *, unsigned int, unsigned int);

unsigned char fn_82E161D8(int a, int b, Obj_82E161D8 *o)
{
    unsigned int u1;
    unsigned int u2;
    char *c;
    char buf[16];
    u1 = o->vt->f10(o);
    u2 = o->vt->f10(o, a);
    c = fn_82CEAC60(buf, u2, u1);
    return *c != 0;
}
