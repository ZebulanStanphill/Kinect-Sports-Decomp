typedef struct Node_82514720 { struct Node_82514720 *p,*a,*b; } Node_82514720;
typedef struct { Node_82514720 *root,*first,*last; unsigned n; } Tree_82514720;
typedef struct { void *vt; Tree_82514720 tree; } Object_82514720;
extern char lbl_821C250C[];
extern void fn_8265CA20(void *);
static __forceinline void clear(Tree_82514720 *h) {
 Node_82514720 *p=h->root;
 if(p) {
  do {
   Node_82514720 *a=p->a;
   if(a) {p->a=a->b; a->b=p;}
   else {a=p->b;p->p=0;p->a=0;p->b=0;}
   p=a;
  }while(p);
  h->first=(Node_82514720 *)h;h->last=(Node_82514720 *)h;h->root=0;
 }
 h->first=(Node_82514720 *)h;h->last=(Node_82514720 *)h;h->root=0;h->n=0;
}
Object_82514720 *fn_82514720(Object_82514720 *o,unsigned flags) {
 clear(&o->tree);o->vt=lbl_821C250C;
 if(flags&1) fn_8265CA20(o);
 return o;
}