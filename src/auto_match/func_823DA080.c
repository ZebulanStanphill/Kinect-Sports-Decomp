extern float lbl_821CC160;
typedef struct { int a,b; } Sub;
typedef struct { char pad[8]; Sub s; char pad2[8]; float f; } S;
void fn_823DA080(S *p) { Sub *s=&p->s; p->f = lbl_821CC160; s->b = 0; s->a = 0; }
