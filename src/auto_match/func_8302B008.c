typedef struct Child_8302B008 Child_8302B008;
typedef struct { char pad[0xdc]; void (*fdc)(Child_8302B008 *); } VT_8302B008;
struct Child_8302B008 { VT_8302B008 *vt; };
typedef struct Obj_8302B008 {
  char pad0[0xc];
  unsigned int id;
  float f10;
  float f14;
  float f18;
  float f1c;
  int f20;
  Child_8302B008 *child;
  unsigned int flags;
} Obj_8302B008;
extern int lbl_832642E8;
void fn_82FF6258(int list, unsigned int id);

void fn_8302B008(Obj_8302B008 *o, float v)
{
  o->f1c = v;
  if (o->child != 0) {
    o->child->vt->fdc(o->child);
    return;
  }
  if ((o->flags & 0x80000000) != 0) {
    fn_82FF6258(lbl_832642E8, o->id);
  }
}
