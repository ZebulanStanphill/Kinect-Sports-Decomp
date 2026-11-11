extern char lbl_8217DF74[],lbl_8217DF44[];
typedef struct Sub_83053938 { int a,b,c,d; } Sub_83053938;
typedef struct Obj_83053938 { void *vt; char pad[0x74]; void *vt2; char pad2[36]; Sub_83053938 sub; } Obj_83053938;
extern void fn_83050C48(Obj_83053938 *);
void fn_83053938(Obj_83053938 *p) { Sub_83053938 *q=&p->sub;
 p->vt=lbl_8217DF74; p->vt2=lbl_8217DF44;
 q->a=0; q->b=0; q->c=0; q->d=0; fn_83050C48(p); }
