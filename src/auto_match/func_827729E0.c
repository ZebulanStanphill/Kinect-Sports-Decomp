typedef struct { unsigned int a,b,c; float d,e; unsigned int v[3]; unsigned char flag; } Obj;
extern void fn_82772470(unsigned int *,unsigned int,unsigned int);
Obj *fn_827729E0(Obj *o,Obj *s) { o->a=s->a; o->b=s->b; o->c=s->c; o->d=s->d; o->e=s->e; { unsigned int *v=o->v; v[0]=0; v[1]=0; v[2]=0; } fn_82772470(o->v,s->v[0],s->v[1]); o->flag=s->flag; return o; }
