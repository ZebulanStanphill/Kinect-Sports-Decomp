struct Wr_82D4DA80;
struct WrVt_82D4DA80 { void *s0[5]; void (*put)(struct Wr_82D4DA80 *, int, const char *, void *, int, int); };
struct Wr_82D4DA80 { struct WrVt_82D4DA80 *vt; };
typedef struct {
  char pad0[0x18]; void *vert; int vcount; int vflags;
  void *tri; int tcount; int tflags;
  void *mat; int mcount; int mflags;
} Obj_82D4DA80;
extern int fn_82CFF8D0(void *, unsigned int);
extern void fn_82D48E18(void *, void *, char *);
extern char lbl_8323C614[];
void fn_82D4DA80(Obj_82D4DA80 *o, struct Wr_82D4DA80 *w)
{
  if ((o->vflags & (int)0x80000000) == 0) {
    int h = fn_82CFF8D0(o->vert, o->vflags << 4);
    w->vt->put(w, 3, "Vertices", o->vert, o->vcount << 4, h);
  }
  if ((o->tflags & (int)0x80000000) == 0) {
    int h = fn_82CFF8D0(o->tri, o->tflags << 4);
    w->vt->put(w, 3, "Triangles", o->tri, o->tcount << 4, h);
  }
  if ((o->mflags & (int)0x80000000) == 0) {
    int h = fn_82CFF8D0(o->mat, o->mflags & 0x3fffffff);
    w->vt->put(w, 3, "MaterialIds", o->mat, o->mcount, h);
  }
  fn_82D48E18(o, w, lbl_8323C614);
}
