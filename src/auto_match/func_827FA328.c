extern int strcmp(const char *, const char *);
extern char lbl_8201DE24[];

typedef struct Part_827FA328 { char pad[0x16]; short id; } Part_827FA328;
typedef struct Obj_827FA328 {
    char pad0[0xa];
    char version[0x1a];
    Part_827FA328 *a;
    Part_827FA328 *b;
    Part_827FA328 *c;
} Obj_827FA328;

extern short fn_828000F0(Part_827FA328 *p);

int fn_827FA328(void *self, Obj_827FA328 *o)
{
    if (strcmp(o->version, lbl_8201DE24) != 0) {
        return 1;
    }
    o->a->id = fn_828000F0(o->a);
    o->b->id = fn_828000F0(o->b);
    o->c->id = fn_828000F0(o->c);
    return 0;
}
