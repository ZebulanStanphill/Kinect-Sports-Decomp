typedef struct Child_8302B0B8 Child_8302B0B8;
typedef struct { char pad[0xdc]; void (*fdc)(Child_8302B0B8 *); } VT_8302B0B8;
struct Child_8302B0B8 { VT_8302B0B8 *vt; };
typedef struct Obj_8302B0B8 {
  char pad0[0xc];
  unsigned int id;
  float f10;
  float f14;
  float f18;
  float f1c;
  int f20;
  Child_8302B0B8 *child;
  unsigned int flags;
} Obj_8302B0B8;
extern int lbl_832642E8;
void fn_82FF6258(int list, unsigned int id);

void fn_8302B0B8(Obj_8302B0B8 *o, float v)
{
  o->f14 = v;
  if (o->child != 0) {
    o->child->vt->fdc(o->child);
    return;
  }
  if ((o->flags & 0x80000000) != 0) {
    fn_82FF6258(lbl_832642E8, o->id);
  }
}
