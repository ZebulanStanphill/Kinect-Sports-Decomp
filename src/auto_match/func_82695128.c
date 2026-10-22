typedef struct Obj { int a; int b; int refcount; } Obj;
typedef struct Node { int a; Obj *obj; } Node;
typedef struct Page { struct { int pad[6]; Obj *def; } *hdr; } Page;
extern void fn_82694D70(Node *n);

Obj **fn_82695128(Obj **out, Node **pn)
{
    Obj *o;

    if ((*pn)->obj == 0) {
        fn_82694D70(*pn);
    }
    o = (*pn)->obj;
    if (o == 0) {
        o = ((Page *)((unsigned int)*pn & 0xfffffc00))->hdr->def;
    }
    { int r = o->refcount; *out = o; o->refcount = r + 1; }
    return out;
}
