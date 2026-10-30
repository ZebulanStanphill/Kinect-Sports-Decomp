typedef struct Src_8270C9C0 Src_8270C9C0;
typedef struct SrcVt_8270C9C0 {
  void *s[5];
  __int64 (*f14)(Src_8270C9C0 *);
  void *s2;
  __int64 (*f1c)(Src_8270C9C0 *);
} SrcVt_8270C9C0;
struct Src_8270C9C0 { SrcVt_8270C9C0 *vt; };
typedef struct Obj_8270C9C0 { char pad[8]; Src_8270C9C0 *src; char pad2[4]; int mode; unsigned extra; } Obj_8270C9C0;

__int64 fn_8270C9C0(Obj_8270C9C0 *o)
{
  __int64 a;
  __int64 b;

  a = o->src->vt->f1c(o->src);
  if (a != -1 && o->mode == 2) {
    b = o->src->vt->f14(o->src) + o->extra;
    if (b > a) {
      a = b;
    }
  }
  return a;
}
