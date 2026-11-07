typedef struct {
  unsigned int flags;
  int pad4;
  int arg8;
  int padC;
  int *index;
} Desc_8295F3A0;

typedef struct { int pad0; unsigned int id; } Entry_8295F3A0;

typedef struct Obj_8295F3A0 Obj_8295F3A0;
typedef struct {
  char pad[0x154];
  int (*Fill)(Obj_8295F3A0 *, int, int *, unsigned int, int, int);
} Vt_8295F3A0;

struct Obj_8295F3A0 {
  Vt_8295F3A0 *vt;
  int pad4[4];
  Entry_8295F3A0 **entries;
  int pad18[0x1C];
  unsigned int id;
  int pad8C[0x1D];
  int src;
  Desc_8295F3A0 *desc;
};

extern int fn_8295D318(Obj_8295F3A0 *, int, int *, unsigned int, int, int, int, unsigned int, int, int, int, int);

int fn_8295F3A0(Obj_8295F3A0 *o)
{
  int buf[4];
  int hr;
  int *data = o->desc->index;
  unsigned int n = o->desc->flags & 0xfffff;

  if (o->id != o->entries[*o->desc->index]->id) {
    hr = o->vt->Fill(o, o->src, buf, n, 0, 0);
    if (hr < 0)
      return hr;
    data = buf;
  }
  hr = fn_8295D318(o, 0x24, data, n, o->desc->arg8, 0, 0, n, 0, 0, 0, 0);
  if (hr < 0)
    return hr;
  if (data == buf) {
    hr = fn_8295D318(o, 1, (int *)o->desc->index, n, (int)buf, 0, 0, n, 0, 0, 0, 0);
    if (hr < 0)
      return hr;
  }
  return 0;
}
