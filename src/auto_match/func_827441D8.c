typedef struct Value_827441D8 { unsigned char tag; double value; } Value_827441D8;
typedef struct Point_827441D8 { double x,y; } Point_827441D8;
extern double sqrt(double);
extern void fn_82743CD8(void *,void *,Point_827441D8 *);
extern void fn_82695FA0(void *,Value_827441D8 *);
extern void fn_82696330(Value_827441D8 *);
extern int fn_82713EE8(void *,void *,unsigned *,void *);
int fn_827441D8(char *p, char *q, unsigned *k, void *out) {
 if(*k==*(unsigned *)(*(char **)(q+0x78)+0x250)) {
  Point_827441D8 point;
  Value_827441D8 val;
  fn_82743CD8(p-16,q,&point);
  val.tag=3;
  val.value=sqrt(point.y*point.y+point.x*point.x);
  fn_82695FA0(out,&val);
  fn_82696330(&val);
  return 1;
 }
 return fn_82713EE8(p,q,k,out);
}
