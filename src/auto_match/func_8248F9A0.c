extern void fn_8265CA20(void *);
extern unsigned int lbl_821BEAF8;
typedef struct { void *data; void *end; void *limit; } Sub;
typedef struct { void *vt; int a,b; Sub sub; } Obj;
void fn_8248F9A0(Obj *p) {
 Sub *s = &p->sub;
 p->vt = &lbl_821BEAF8;
 if (s->data) fn_8265CA20(s->data);
 s->data = 0; s->end = 0; s->limit = 0;
}
