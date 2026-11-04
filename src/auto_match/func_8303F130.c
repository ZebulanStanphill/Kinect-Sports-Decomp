extern void fn_82FA5190(unsigned int, void *); extern void fn_8302BA30(void *); extern char lbl_8217D914[]; extern unsigned int lbl_831BC768;
typedef struct { void *p,*q,*end; } Buffer; typedef struct { void *v; } Base; typedef struct { Base base; int pad[6]; Buffer b; } Obj;
static void clear(Buffer *b) { if(b->p) { b->q=b->p; fn_82FA5190(lbl_831BC768,b->p); b->p=0; b->q=0; b->end=0; } }
static void dtor(Obj *p) { p->base.v=lbl_8217D914; clear(&p->b); fn_8302BA30(p); }
void fn_8303F130(Obj *p) { dtor(p); }
