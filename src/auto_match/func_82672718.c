typedef struct Vec_82672718 {
  unsigned int begin;
  unsigned int end;
} Vec_82672718;

typedef struct Obj_82672718 {
  char pad[0x54];
  Vec_82672718 v;
} Obj_82672718;

extern unsigned int fn_82230110(void *out, unsigned int it);
extern unsigned int fn_8258C000(void);
extern void fn_8258D8D8(unsigned int a, unsigned int b);
extern int fn_8266C738(void);
extern void fn_8266EC60(void);
extern void fn_82671770(void *out, Vec_82672718 *v, unsigned int first, unsigned int last);

void fn_82672718(Obj_82672718 *o)
{
  unsigned int it;
  unsigned int a;
  Vec_82672718 *pv;
  unsigned char auStack_60[16];
  unsigned char auStack_50[32];

  fn_8266EC60();
  if (fn_8266C738() != 0) {
    for (it = o->v.begin; it != o->v.end; it += 0x40) {
      a = fn_82230110(auStack_50, it);
      fn_8258D8D8(fn_8258C000(), a);
    }
    pv = &o->v;
    fn_82671770(auStack_60, pv, pv->begin, pv->end);
  }
}
