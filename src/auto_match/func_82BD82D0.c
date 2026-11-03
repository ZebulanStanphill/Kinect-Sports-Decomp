typedef struct Obj_82BD82D0 {
  char pad0[0x10];
  __int64 f10;
  __int64 f18;
  char pad20[8];
  unsigned __int64 f28;
  char pad30[8];
  unsigned __int64 f38;
  int f40;
  char pad44[8];
  int f4c;
} Obj_82BD82D0;
extern unsigned int fn_82A1F2F8();

int fn_82BD82D0(Obj_82BD82D0 *o)
{
  int r = 0;
  if (o->f4c != 0) {
    unsigned __int64 v = fn_82A1F2F8();
    int k = o->f40 != 0 ? 0x28 : 0;
    if ((((__int64)k - o->f18) - o->f10) + v >= o->f28) {
      r = 1;
      o->f38 = o->f28;
    }
  }
  o->f40 = r;
  return r;
}
