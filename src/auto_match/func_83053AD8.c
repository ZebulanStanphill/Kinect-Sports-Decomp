extern char lbl_8217DFD4[],lbl_8217DFA0[];
typedef struct Sub_83053AD8 { int a,b,c,d; } Sub_83053AD8;
typedef struct Obj_83053AD8 { void *vt; char pad[0x74]; void *vt2; char pad2[52]; Sub_83053AD8 sub; } Obj_83053AD8;
extern void fn_83051070(Obj_83053AD8 *);
void fn_83053AD8(Obj_83053AD8 *p) { Sub_83053AD8 *q=&p->sub;
 p->vt=lbl_8217DFD4; p->vt2=lbl_8217DFA0;
 q->a=0; q->b=0; q->c=0; q->d=0; fn_83051070(p); }
