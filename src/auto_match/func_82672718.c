typedef unsigned int uint;

typedef struct Vec_82672718 {
  uint begin;
  uint end;
} Vec_82672718;

typedef struct Obj_82672718 {
  char pad[0x54];
  Vec_82672718 v;
} Obj_82672718;

extern uint fn_82230110(void *out, uint it);
extern uint fn_8258C000(void);
extern void fn_8258D8D8(uint a, uint b);
extern int fn_8266C738(void);
extern void fn_8266EC60(void);
extern void fn_82671770(void *out, Vec_82672718 *v, uint first, uint last);

void fn_82672718(Obj_82672718 *o)
{
  uint it;
  uint a;
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
