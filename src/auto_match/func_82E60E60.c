typedef struct Obj_82E60E60 { void **vt; } Obj_82E60E60;
typedef struct { unsigned int den; unsigned int num; } Ratio_82E60E60;
typedef struct { char pad[0x30]; Ratio_82E60E60 r; } Info_82E60E60;

typedef int (*Fn0_82E60E60)(Obj_82E60E60 *);
typedef int (*FnOut_82E60E60)(Obj_82E60E60 *, Obj_82E60E60 **);
typedef int (*FnQI_82E60E60)(Obj_82E60E60 *, void *, Obj_82E60E60 **);
typedef int (*FnGet_82E60E60)(Obj_82E60E60 *, void *, int, Obj_82E60E60 **);
typedef Info_82E60E60 *(*FnInfo_82E60E60)(Obj_82E60E60 *);

extern char lbl_821531D8[];
extern char lbl_82154A58[];

extern int fn_82E5A1E0(void *p, int v);
extern int fn_82E5A1F0(void *p, unsigned int v);
extern int fn_82E5EF70(Obj_82E60E60 *o, Obj_82E60E60 *s, void *p);
extern int fn_82E5F020(Obj_82E60E60 *o, void *p);
extern int fn_82E5F1F0(Obj_82E60E60 *o, void *p);

int fn_82E60E60(Obj_82E60E60 *p1, Obj_82E60E60 *p2, void *p3)
{
  Obj_82E60E60 *a;
  Obj_82E60E60 *b;
  Obj_82E60E60 *c;
  int hr;

  if (p1 == 0 || p2 == 0 || p3 == 0) {
    return (int)0x80070057;
  }
  a = 0;
  b = 0;
  c = 0;
  hr = fn_82E5F1F0(p2, p3);
  if (hr < 0) goto done;
  hr = fn_82E5A1E0(p3, ((Fn0_82E60E60)p2->vt[0x88 / 4])(p2));
  if (hr < 0) goto done;
  hr = ((FnOut_82E60E60)p2->vt[0x90 / 4])(p2, &a);
  if (hr < 0) goto done;
  if (a == 0) {
    hr = (int)0xC00D36BB;
    goto done2;
  }
  if (((FnQI_82E60E60)a->vt[0])(a, lbl_821531D8, &b) >= 0) {
    Ratio_82E60E60 *r = &((FnInfo_82E60E60)b->vt[0x98 / 4])(b)->r;
    if (r->den != 0) {
      hr = fn_82E5A1F0(p3, (unsigned int)(((unsigned __int64)r->num * 10000000) / r->den));
      if (hr < 0) goto done;
    }
  }
  hr = ((FnGet_82E60E60)p1->vt[0x10 / 4])(p1, lbl_82154A58, 0, &c);
  if (hr < 0) goto done;
  hr = fn_82E5EF70(p2, c, p3);
  if (hr < 0) goto done;
  hr = fn_82E5F020(p2, p3);
done:
  if (a != 0) {
    ((Fn0_82E60E60)a->vt[8 / 4])(a);
    a = 0;
  }
done2:
  if (b != 0) {
    ((Fn0_82E60E60)b->vt[8 / 4])(b);
    b = 0;
  }
  if (c != 0) {
    ((Fn0_82E60E60)c->vt[8 / 4])(c);
  }
  return hr;
}
