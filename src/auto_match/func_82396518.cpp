struct Elem_82396518 { char pad[8]; unsigned count; };
struct Node_82396518 { char pad0[0x24]; int f24; char pad1[0x74 - 0x28]; void *f74; };
extern "C" Node_82396518 *fn_822ABA88(Elem_82396518 *, unsigned);
extern "C" unsigned char fn_828EA5F8(void *);
extern "C" int fn_823A0A88(void *, void *, int, unsigned);

struct Inner_82396518 {
  Elem_82396518 **begin; int p1, p2, p3; int idx;
  __forceinline Elem_82396518 *cur() { return begin[idx]; }
};
struct Vec_82396518 {
  Inner_82396518 **begin, **end;
  __forceinline int size() { return end - begin; }
  __forceinline Inner_82396518 *&at(int i) { return begin[i]; }
};
struct Obj_82396518 { char pad[8]; Vec_82396518 *f8; };

extern "C" void fn_82396518(Obj_82396518 *o)
{
  for (int i = 0; i < o->f8->size(); i++) {
    for (unsigned j = 0; j < o->f8->at(i)->cur()->count; j++) {
      Node_82396518 *n = fn_822ABA88(o->f8->at(i)->cur(), j);
      if (n->f24 != 0) {
        void *x = n->f74;
        if (x != 0 && fn_828EA5F8(x)) {
          fn_823A0A88((char *)o + 0x8d4, x, i, j);
        }
      }
    }
  }
}
