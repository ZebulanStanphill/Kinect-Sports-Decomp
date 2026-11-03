typedef struct Iface_830500F0 Iface_830500F0;
struct Iface_830500F0 {
  struct { int p0, p4; int (*f8)(Iface_830500F0 *, void *); } *vt;
};
typedef struct { char pad[0x80]; Iface_830500F0 *dev; } Src_830500F0;
typedef struct {
  char pad0[0x18];
  __int64 q18;
  unsigned h20, l20;
  __int64 q28;
  __int64 q30;
  char pad38[0x28];
  Src_830500F0 *src; /* 0x60 */
  char pad64[8];
  int r6c;
  char pad70[0x2c];
  struct { unsigned mode : 3; unsigned pad : 4; unsigned flag : 1; unsigned rest : 24; } bits; /* 0x9c */
} Obj_830500F0;

char fn_830500F0(Obj_830500F0 *o, Src_830500F0 *s, __int64 *v, int mode)
{
  int r;
  o->src = s;
  o->q18 = v[0];
  *(__int64 *)&o->h20 = v[1];
  o->q28 = v[2];
  o->q30 = v[3];
  if (o->q18 < 0) {
    return 0x1f;
  }
  if (o->h20 > 0) {
    o->bits.flag = 1;
  } else {
    o->bits.flag = 0;
  }
  o->bits.mode = mode;
  r = s->dev->vt->f8(s->dev, &o->q18);
  o->r6c = r;
  return (r == 0) + 1;
}
