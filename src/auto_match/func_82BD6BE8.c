typedef struct Vt_82BD6BE8 { int f0, f4, f8; int (*fc)(struct Obj_82BD6BE8 *); } Vt_82BD6BE8;
typedef struct Obj_82BD6BE8 { Vt_82BD6BE8 *vt; } Obj_82BD6BE8;
typedef struct Hdr_82BD6BE8 { int pad[9]; int slot[1]; } Hdr_82BD6BE8;
extern Obj_82BD6BE8 *fn_82BD6300(void *, int);

int fn_82BD6BE8(Hdr_82BD6BE8 *base, int *src, unsigned n)
{
  unsigned i = 0;
  int hr = 0x80070057;
  if (n != 0) {
    do {
      Obj_82BD6BE8 *o = fn_82BD6300(base, src[i]);
      if (o == 0)
        break;
      hr = o->vt->fc(o);
      base->slot[i] = 0;
      if (hr < 0) {
        base->pad[i + 9] = 1;
        break;
      }
      i++;
    } while (i < n);
  }
  return hr;
}
