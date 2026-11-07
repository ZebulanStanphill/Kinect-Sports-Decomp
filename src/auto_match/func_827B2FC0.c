typedef struct Elem1_827B2FC0 {
    unsigned short a;
    short b;
    int c;
} Elem1_827B2FC0;

typedef struct Elem2_827B2FC0 {
    unsigned short a;
    unsigned short b;
    int c;
} Elem2_827B2FC0;

typedef struct Container_827B2FC0 {
    unsigned int count;
    int pad4;
    int pad8;
    void **blocks;
} Container_827B2FC0;

typedef struct Obj_827B2FC0 {
    int pad0;
    int pad4;
    char writer[0x44];
    Container_827B2FC0 c1;   /* 0x4c */
    Container_827B2FC0 c2;   /* 0x5c */
} Obj_827B2FC0;

extern void fn_827B0288(void);
extern int fn_827B0D18(Container_827B2FC0 *c, int start, unsigned int count, void *cmp);
extern int fn_827B1A38(void *w, unsigned short v);
extern int fn_827B1A90(void *w, int v);
extern int fn_827B1B10(void *w, int v);
extern int fn_827B1BE8(void *w, unsigned int v);

void fn_827B2FC0(Obj_827B2FC0 *p)
{
    unsigned int i;

    for (i = 0; i < p->c1.count; i++) {
        Elem1_827B2FC0 *e = &((Elem1_827B2FC0 *)p->c1.blocks[i >> 6])[i & 63];
        fn_827B1A38(p->writer, e->a);
        fn_827B1B10(p->writer, e->b);
        fn_827B1A90(p->writer, e->c);
    }
    fn_827B0D18(&p->c2, 0, p->c2.count, (void *)fn_827B0288);
    fn_827B1BE8(p->writer, p->c2.count);
    for (i = 0; i < p->c2.count; i++) {
        Elem2_827B2FC0 *e = &((Elem2_827B2FC0 *)p->c2.blocks[i >> 6])[i & 63];
        fn_827B1A38(p->writer, e->a);
        fn_827B1A38(p->writer, e->b);
        fn_827B1B10(p->writer, e->c);
    }
}
