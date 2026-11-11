typedef struct Object_82616AF0 { int pad; char *target; int pad2; float a,b,c,d,e,f; } Object_82616AF0;
extern int fn_82591730(Object_82616AF0 *, int, unsigned);
int fn_82616AF0(Object_82616AF0 *o, int kind, unsigned value) {
 if(kind!=5) return fn_82591730(o,kind,value);
 o->f=o->b; o->e=o->b; o->d=o->b; o->c=o->b; o->a=o->b;
 *(int *)(o->target+0x190)=1;
 return 0;
}
