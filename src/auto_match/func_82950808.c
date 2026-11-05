typedef struct Obj_82950808 Obj_82950808;
typedef struct {
  char pad[0x30];
  int (*f30)(Obj_82950808 *, struct Rec_82950808 *);
} Vt_82950808;
typedef struct Rec_82950808 {
  unsigned hdr0;
  int pad4;
  unsigned *data;
  int padc;
  unsigned *ptr;
} Rec_82950808;
struct Obj_82950808 {
  Vt_82950808 *vt;
  char pad4[0x78 - 4];
  int f78;
  char pad7c[0x104 - 0x7c];
  Rec_82950808 *rec;
};

extern int fn_829632A0(void *);
extern int fn_829632F0(Rec_82950808 *, Rec_82950808 *);
extern void *fn_82963998(int);
extern void fn_829639F0(Rec_82950808 *);
extern int fn_82963A30(Rec_82950808 *, int, int, int, int);
extern int fn_82963D50(Rec_82950808 *, Rec_82950808 *);
extern int fn_82964628(Obj_82950808 *, int, int, int, double);
extern void fn_82BA02A8(Rec_82950808 *);
extern double lbl_82005710;

int fn_82950808(Obj_82950808 *o)
{
  Rec_82950808 *r;
  void *m;
  int hr;
  int v;
  int i;

  if (o->rec->hdr0 != 0x50000002)
    return 1;
  m = fn_82963998(0x74);
  if (m != 0)
    r = (Rec_82950808 *)fn_829632A0(m);
  else
    r = 0;
  if (r == 0) {
    hr = 0x8007000E;
  } else {
    hr = fn_82963A30(r, 0x70800002, 6, 1, 0);
    if (hr >= 0) {
      hr = fn_829632F0(r, o->rec);
      if (hr >= 0) {
        *r->ptr = *o->rec->ptr;
        for (i = 0; i < 4; i++)
          *(unsigned *)(i * 4 + (int)r->data) = *(unsigned *)((int)o->rec->data + i * 4);
        v = fn_82964628(o, o->f78, 0, 0, lbl_82005710);
        if (v == -1)
          return 0x8007000E;
        r->data[4] = v;
        r->data[5] = v;
        if (o->vt->f30(o, r) != 0)
          hr = 1;
        else
          hr = fn_82963D50(o->rec, r);
      }
    }
    fn_82BA02A8(r);
    fn_829639F0(r);
  }
  return hr;
}
