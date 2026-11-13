typedef struct Buf_825CFBE0 {
    char pad[0x18];
    unsigned int f18;
    unsigned int f1c;
} Buf_825CFBE0;

typedef struct Node_825CFBE0 {
    int mapped;
    Buf_825CFBE0 *buffer;
    void *f8;
    void *fc;
    void *f10;
    int f14;
    struct Node_825CFBE0 *next;
} Node_825CFBE0;

typedef struct Obj_825CFBE0 {
    char pad0[0x20];
    void *f20, *f24, *f28, *f2c;
    void *f30;
    void *f34;
    char pad38[0x50 - 0x38];
    Node_825CFBE0 *nodes;
} Obj_825CFBE0;

extern void fn_82545950(void *);
extern void fn_82545A90(void *);
extern void fn_82545810(void *);
extern void fn_8251FA58(void *);
extern void fn_8262FEC8(void *);
extern void fn_82522ED8(void *);
extern int fn_8262F8D8(void *, int, int, unsigned int, int, unsigned int, unsigned int, int, int);
extern void fn_8262FBD8(void *, unsigned int, int);

void fn_825CFBE0(Obj_825CFBE0 *o)
{
    Node_825CFBE0 *node;
    Node_825CFBE0 *next;
    Buf_825CFBE0 *b;

    if (o->f20 != 0) {
        fn_82545950(&o->f20);
    }
    if (o->f24 != 0) {
        fn_82545A90(&o->f24);
    }
    if (o->f28 != 0) {
        fn_82545950(&o->f28);
    }
    if (o->f2c != 0) {
        fn_82545A90(&o->f2c);
    }
    if (o->f34 != 0) {
        fn_8251FA58(o->f34);
        o->f34 = 0;
    }
    if (o->f30 != 0) {
        fn_82545810(&o->f30);
    }
    node = o->nodes;
    while (node != 0) {
        next = node->next;
        if (node->fc != 0) {
            fn_8251FA58(node->fc);
            node->fc = 0;
        }
        if (node->f10 != 0) {
            fn_8251FA58(node->f10);
            node->f10 = 0;
        }
        b = node->buffer;
        if (b != 0) {
            unsigned int v = b->f18 & 0xfffffffc;
            node->mapped = fn_8262F8D8(b, 10, 0, v, 0, v, b->f1c & 0x3fffffc, 0, 0x3000000);
            fn_8262FBD8(node->buffer, node->buffer->f18 & 0xfffffffc, 0);
            fn_8262FEC8(node->buffer);
            node->buffer = 0;
            node->mapped = 0;
        }
        if (node->f8 != 0) {
            fn_8262FEC8(node->f8);
            node->f8 = 0;
        }
        node->next = 0;
        fn_82522ED8(node);
        node = next;
    }
    o->nodes = 0;
}
