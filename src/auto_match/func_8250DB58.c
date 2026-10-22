typedef struct { void *data; unsigned int size,cap; } Vec;
typedef struct { void *vt; char pad[0xe4]; Vec a; int gap; Vec b; } Obj;
extern unsigned int lbl_821C2378;
extern void fn_8265CA20(void *);
extern void fn_827F38B0(void *);
extern void fn_827F38B8(void *);
static void clear(Vec *v) { if(v->data) fn_8265CA20(v->data); v->data=0; v->size=0; v->cap=0; }
void fn_8250DB58(Obj *o) { o->vt=&lbl_821C2378; clear(&o->b); if(o->a.data) fn_8265CA20(o->a.data); o->a.data=0; o->a.size=0; o->a.cap=0; fn_827F38B0((char*)o+0x48); fn_827F38B8(o); }
