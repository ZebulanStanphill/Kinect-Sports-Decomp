extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_830540C0(void *, void *, unsigned __int64, unsigned int, int, int *, int *);
extern void fn_830514A8(void *);

struct Obj_830536D0;
typedef struct VT_830536D0 {
  void *slots[11];
  unsigned __int64 (*f2c)(struct Obj_830536D0 *);
} VT_830536D0;

typedef struct Src_830536D0 {
  char pad[0x50];
  __int64 f50;
  char pad2[0x2c];
  unsigned int f84;
} Src_830536D0;

typedef struct Obj_830536D0 {
  VT_830536D0 *vt;
  char pad4[0x1c];
  unsigned int f20;
  char pad24[0x14];
  char cs[0x1c];
  char pad54[4];
  __int64 f58;
  Src_830536D0 *src;
  char pad64[4];
  unsigned int f68;
  unsigned int f6c;
  char pad70[4];
  struct { unsigned int pre : 4; unsigned int b4 : 1; unsigned int mid : 2; unsigned int b7 : 1; unsigned int rest : 24; } flags;
  char pad78[0x14];
  unsigned int f8c;
  unsigned int f90;
  char pad94[4];
  int f98;
} Obj_830536D0;

unsigned int fn_830536D0(Obj_830536D0 *o, void *a, char **out)
{
  unsigned int lim, ret;
  unsigned __int64 pos;
  unsigned int prod;
  struct { int tmp; int cnt; } L;
  *out = (char *)o + 0x18;
  RtlEnterCriticalSection(o->cs);
  if (o->flags.b4 == 0 && (unsigned char)o->flags.b7 != 0) {
    lim = o->f68 > o->src->f84 ? o->src->f84 : o->f68;
    pos = o->vt->f2c(o);
    if (o->f90 != 0) {
      prod = o->f6c * o->f20;
      if (pos >= o->f90 + (unsigned __int64)prod) {
        pos = o->f8c + (unsigned __int64)prod;
      }
    }
    ret = fn_830540C0(o, a, pos, lim, 0, &L.cnt, &L.tmp);
    if (ret != 0) {
      o->f98 = o->f98 + L.cnt;
      fn_830514A8(o);
      o->f58 = o->src->f50;
    }
    RtlLeaveCriticalSection(o->cs);
  } else {
    RtlLeaveCriticalSection(o->cs);
    ret = 0;
  }
  return ret;
}
