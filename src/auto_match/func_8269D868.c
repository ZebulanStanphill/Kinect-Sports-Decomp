typedef struct Src Src;
typedef struct SrcVt { void *pad[6]; void *(*f18)(void *, Src *); } SrcVt;
struct Src { SrcVt *vt; };
typedef struct Obj_8269D868 { char pad[0x68]; Src *src; } Obj;
typedef struct V4 { float x, y, z, w; } V4;
extern void fn_8268D280(int, V4 *, void *);

V4 *fn_8269D868(V4 *out, Obj *o, int p3)
{
  char tmp[24];
  void *r = o->src->vt->f18(tmp, o->src);
  out->x = 0.0f;
  out->y = 0.0f;
  out->z = 0.0f;
  out->w = 0.0f;
  fn_8268D280(p3, out, r);
  return out;
}
