typedef struct Node_8249FAD0 { struct Node_8249FAD0 *left,*parent,*right;int val[2];unsigned char color,isnil; } Node_8249FAD0;
typedef struct { int alloc; Node_8249FAD0 *head;unsigned size; } Tree_8249FAD0;
typedef struct { int *vt;char pad[80];void *ref;char pad2[8];Tree_8249FAD0 a;char pad3[28];Tree_8249FAD0 b; } Obj_8249FAD0;
extern int lbl_821BF148;extern void fn_8243DD58(Tree_8249FAD0 *,Node_8249FAD0 *);extern void fn_8265CA20(void *);extern void fn_822315A0(void *);
static __forceinline void clear(Tree_8249FAD0 *t) { Node_8249FAD0 *p=t->head->parent; while(!p->isnil) {Node_8249FAD0 *old=p;fn_8243DD58(t,p->right);p=p->left;fn_8265CA20(old);}t->head->parent=t->head;t->head->left=t->head;t->head->right=t->head;t->size=0; }
static __forceinline void destroy(Tree_8249FAD0 *t){clear(t);fn_8265CA20(t->head);}
void fn_8249FAD0(Obj_8249FAD0 *self) {self->vt=&lbl_821BF148;clear(&self->a);((void (*)(void *,int))self->vt[3])(self,0);destroy(&self->b);destroy(&self->a);if(self->ref)fn_822315A0(self->ref);}
