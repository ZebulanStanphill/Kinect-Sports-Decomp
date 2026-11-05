typedef struct Vt_82BD6AD0 { int f0, f4; int (*f8)(struct Obj_82BD6AD0 *); } Vt_82BD6AD0;
typedef struct Obj_82BD6AD0 { Vt_82BD6AD0 *vt; } Obj_82BD6AD0;
typedef struct Hdr_82BD6AD0 { int pad[9]; int slot[1]; } Hdr_82BD6AD0;
extern Obj_82BD6AD0 *fn_82BD6300(void *, int);

int fn_82BD6AD0(Hdr_82BD6AD0 *base, int *src, unsigned n)
{
  unsigned i = 0;
  int hr = 0x80070057;
  if (n != 0) {
    do {
      Obj_82BD6AD0 *o = fn_82BD6300(base, src[i]);
      if (o == 0)
        break;
      hr = o->vt->f8(o);
      base->slot[i] = 1;
      if (hr < 0) {
        base->pad[i + 9] = 0;
        break;
      }
      i++;
    } while (i < n);
  }
  return hr;
}
