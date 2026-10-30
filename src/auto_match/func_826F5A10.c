typedef struct { char pad[0x48]; unsigned char name[0x78 - 0x48]; unsigned char hit; } Obj;

extern unsigned int fn_82696958(unsigned char *s, int start);

void fn_826F5A10(Obj *p, unsigned int id)
{
    unsigned char empty = (p->name[0] == 0 || p->name[0] == '\n');
    if (!empty && id == fn_82696958(p->name, 0)) {
        p->hit = 1;
    }
}
