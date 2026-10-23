extern int fn_822C72E0();
extern int fn_822F0780();
extern int fn_825113E0();

typedef struct R { char pad[0x1d0]; int refs; } R;
typedef struct Q { char pad[0xa8]; R *r; } Q;
typedef struct S10 { char pad[0x1e4]; Q *q; } S10;
typedef struct T114 { char pad[0x20]; int v; } T114;
typedef struct T118 { char pad[0x14]; char data[1]; } T118;
typedef struct SC { char pad[0x24]; int flag; char pad2[0x114 - 0x28]; T114 *a; T118 *b; } SC;
typedef struct Obj {
    char pad[0xc];
    SC *c;          /* 0x0c */
    S10 *s;         /* 0x10 */
    char pad14[0x10];
    Q *q;           /* 0x24 */
    int z;          /* 0x28 */
    int pad2c;
    char buf[0x14]; /* 0x30 */
} Obj;
static void Dec(int *p) { (*p)--; }
void fn_822EFE40(Obj *o)
{
    R *r;
    { Q *q = o->s->q; o->z = 0; o->q = q; }
    if (o->c->flag == 0) {
        fn_822C72E0(o->c->a->v, fn_822F0780());
        fn_825113E0(o->c->b->data, 0x14, o->buf);
    }
    r = o->q->r;
    if (r != 0 && r->refs != 0) Dec(&r->refs);
}
