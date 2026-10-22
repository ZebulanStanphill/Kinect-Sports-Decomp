typedef unsigned int U; typedef unsigned short H;
extern void fn_82EE5688(void *,U,void *);
typedef struct Obj { char pad[76]; int lookup[26]; U count; } Obj;
int fn_82EE5BE8(Obj *p, unsigned short input,H *x,unsigned short *y) {
 U index=input;
 if (index < p->count && x && y) {
  H *a; char *b;
  void *base=p->lookup;
  fn_82EE5688(base,index,&a); *x=*a;
  fn_82EE5688(base,index,&b);
  *y=*(unsigned short *)(b+2);
  return 0;
 }
 return 0x80070057;
}
