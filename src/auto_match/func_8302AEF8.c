typedef struct Child_8302AEF8 Child_8302AEF8;
typedef struct { char pad[0xdc]; void (*fdc)(Child_8302AEF8 *); } VT_8302AEF8;
struct Child_8302AEF8 { VT_8302AEF8 *vt; };
typedef struct Obj_8302AEF8 {
  char pad0[0xc];
  unsigned int id;
  float f10;
  float f14;
  float f18;
  float f1c;
  unsigned int f20;
  Child_8302AEF8 *child;
  unsigned int flags;
} Obj_8302AEF8;
extern int lbl_832642E8;
void fn_82FF6258(int list, unsigned int id);

void fn_8302AEF8(Obj_8302AEF8 *o, unsigned int v)
{
  o->f20 = (o->f20 & 0x0fffffff) | (v << 28);
  if (o->child != 0) {
    o->child->vt->fdc(o->child);
    return;
  }
  if ((o->flags & 0x80000000) != 0) {
    fn_82FF6258(lbl_832642E8, o->id);
  }
}
