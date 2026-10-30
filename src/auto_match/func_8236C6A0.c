extern void fn_825114C8(void *p, int n);

typedef struct Id {
    int a;
    unsigned int b;
} Id;

typedef struct Obj {
    char pad[0x14c0];
    Id id;
} Obj;

typedef struct Msg {
    char pad[0x28];
    unsigned int b;
    int a;
    char pad2[0x118 - 0x30];
    char *buf;
} Msg;

void fn_8236C6A0(Obj *o, Msg *m)
{
    if (o->id.a == m->a && o->id.b == m->b) {
        Id t;
        fn_825114C8(m->buf + 0x14, 0x14);
        t.a = -1;
        t.b = (unsigned int)-1;
        o->id = t;
    }
}
