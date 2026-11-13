typedef struct Child_8302B058 Child_8302B058;
typedef struct { char pad[0xdc]; void (*fdc)(Child_8302B058 *); } VT_8302B058;
struct Child_8302B058 { VT_8302B058 *vt; };
typedef struct Obj_8302B058 {
  char pad0[0xc];
  unsigned int id;
  float f10;
  float f14;
  float f18;
  float f1c;
  unsigned int a : 4;
  unsigned int b : 4;
  unsigned int c : 4;
  unsigned int d : 4;
  unsigned int rest : 16;
  Child_8302B058 *child;
  unsigned int flags;
} Obj_8302B058;
extern int lbl_832642E8;
void fn_82FF6258(int list, unsigned int id);

void fn_8302B058(Obj_8302B058 *o, unsigned int v)
{
  o->d = v;
  if (o->child != 0) {
    o->child->vt->fdc(o->child);
    return;
  }
  if ((o->flags & 0x80000000) != 0) {
    fn_82FF6258(lbl_832642E8, o->id);
  }
}
