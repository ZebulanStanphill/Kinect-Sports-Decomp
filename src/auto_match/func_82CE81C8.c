typedef struct Obj_82CE81C8 {
  int pad0[6];
  int v18;
  short pad1c[3];
  unsigned short cnt[16];
} Obj_82CE81C8;
typedef struct Self_82CE81C8 {
  int pad0[7];
  Obj_82CE81C8 *obj;
  int pad20[0x78 / 4 - 8];
  void *slots[9];
  char pad9c[0xd0 - 0x9c];
  signed char cur;
} Self_82CE81C8;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_82CFBB08(void *p, int a);

void fn_82CE81C8(Self_82CE81C8 *s, int v)
{
  Obj_82CE81C8 *o;
  RtlEnterCriticalSection(s);
  o = s->obj;
  o->v18 = v;
  if (o->cnt[s->cur] != 0) {
    o->cnt[s->cur] = o->cnt[s->cur] - 1;
    fn_82CFBB08(s->slots[s->cur], 1);
  }
  RtlLeaveCriticalSection(s);
}
