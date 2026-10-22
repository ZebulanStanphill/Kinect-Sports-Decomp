typedef struct { char pad[0x84]; unsigned int limit; } Sub;
typedef struct {
  char pad0[0x18];
  char x18[8];
  unsigned int x20;
  char pad24[0x14];
  char cs[0x28];
  Sub *x60;
  int pad64;
  unsigned int x68;
  unsigned int x6c;
  int pad70;
  unsigned int f74_0 : 4;
  unsigned int f74_4 : 1;
  unsigned int f74_5 : 2;
  unsigned int f74_7 : 1;
  unsigned int f74_8 : 24;
  int pad78[2];
  unsigned __int64 x80;
  unsigned __int64 x88;
  int pad90;
  unsigned int x94;
  int pad98;
  unsigned int x9c;
  unsigned char xa0;
} Obj;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_830556C0(Obj *o, void **out1, unsigned __int64 *out2, unsigned int *out3)
{
  unsigned int n;
  unsigned int lim;

  *out1 = o->x18;
  RtlEnterCriticalSection(o->cs);
  if (!o->f74_4 && (unsigned char)o->f74_7) {
    n = o->x68 - o->x94;
    *out3 = n;
    lim = o->x60->limit;
    if (n > lim) *out3 = lim;
    if (o->x9c & 0x1000000) {
      o->x9c &= ~0x1000000;
      o->x80 = (unsigned int)(o->x6c * o->x20) + o->x88;
    }
    *out2 = o->x80;
    o->xa0 = 1;
    RtlLeaveCriticalSection(o->cs);
    return 1;
  }
  RtlLeaveCriticalSection(o->cs);
  return 0;
}
