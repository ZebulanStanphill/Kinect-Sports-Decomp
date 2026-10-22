typedef unsigned int U; typedef unsigned short H;
extern void fn_82EE6350(void *,U,void *);
typedef struct Obj { char pad[72]; int lookup[47]; U count; } Obj;
int fn_82EE6838(Obj *p, U input,H *x,unsigned int *y) {
 U index;
 if (x && y && (index=(H)input,index < p->count)) {
  H *a; char *b;
  void *base=p->lookup;
  fn_82EE6350(base,index,&a); *x=*a;
  fn_82EE6350(base,index,&b);
  *y=*(unsigned int *)(b+4);
  return 0;
 }
 return 0x80070057;
}
