typedef struct Obj Obj;
typedef struct Vt { void *pad[18]; int (*f48)(Obj *); } Vt;
struct Obj { Vt *vt; };
extern void fn_826D7728(int, Obj *, int, int);
void fn_826D8590(int a, Obj *b) { fn_826D7728(a, b, b->vt->f48(b), 0); }
