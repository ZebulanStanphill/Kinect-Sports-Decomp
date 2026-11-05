typedef struct Src Src;
typedef struct SrcVt { void *pad[7]; void *(*f1c)(void *, Src *); } SrcVt;
struct Src { SrcVt *vt; };
typedef struct Obj_8269D8E0 { char pad[0x68]; Src *src; } Obj;
typedef struct V4 { float x, y, z, w; } V4;
extern void fn_8268D280(int, V4 *, void *);

V4 *fn_8269D8E0(V4 *out, Obj *o, int p3)
{
  char tmp[24];
  void *r = o->src->vt->f1c(tmp, o->src);
  out->x = 0.0f;
  out->y = 0.0f;
  out->z = 0.0f;
  out->w = 0.0f;
  fn_8268D280(p3, out, r);
  return out;
}
