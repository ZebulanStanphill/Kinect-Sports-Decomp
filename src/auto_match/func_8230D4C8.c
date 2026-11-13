typedef struct Elem_8230D4C8 { int data[8]; } Elem_8230D4C8;

typedef struct Vec_8230D4C8 {
    Elem_8230D4C8 *first;
    Elem_8230D4C8 *last;
    Elem_8230D4C8 *end;
} Vec_8230D4C8;

typedef struct Member_8230D4C8 { char data[0xb0]; } Member_8230D4C8;

typedef struct Members_8230D4C8 {
    char pad0[0x60];
    Member_8230D4C8 a;            /* 0x060 */
    Member_8230D4C8 b;            /* 0x110 */
    Member_8230D4C8 c;            /* 0x1c0 */
} Members_8230D4C8;

typedef struct Obj_8230D4C8 {
    void *vtable;                 /* 0x000 */
    char pad4[0x15c];
    Members_8230D4C8 m;           /* 0x160 */
    char pad3d0[0x500 - 0x3d0];
    Vec_8230D4C8 vec;             /* 0x500 */
} Obj_8230D4C8;

extern void fn_8265CA20(void *p);
extern void fn_8230D470(Member_8230D4C8 *m);
extern char lbl_821AF424[];
extern char lbl_821AF1C8[];

void fn_8230D4C8(Obj_8230D4C8 *self)
{
    Vec_8230D4C8 *v;
    Members_8230D4C8 *m;
    Elem_8230D4C8 *it;

    self->vtable = lbl_821AF424;
    v = &self->vec;
    if (v->first != 0) {
        for (it = v->first; it != v->last; it++) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
    m = &self->m;
    fn_8230D470(&m->c);
    fn_8230D470(&m->b);
    fn_8230D470(&m->a);
    self->vtable = lbl_821AF1C8;
}
