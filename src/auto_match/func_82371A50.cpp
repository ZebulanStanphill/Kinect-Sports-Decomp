struct Elem_82371A50 { char pad[8]; unsigned count; };
struct Node_82371A50 { char pad0[0x24]; int f24; char pad1[0x74 - 0x28]; void *f74; };
extern "C" Node_82371A50 *fn_822ABA88(Elem_82371A50 *, unsigned);
extern "C" unsigned char fn_828EA5F8(void *);
extern "C" int fn_823873E0(void *, void *, int, unsigned);

struct Inner_82371A50 {
  Elem_82371A50 **begin; int p1, p2, p3; int idx;
  __forceinline Elem_82371A50 *cur() { return begin[idx]; }
};
struct Vec_82371A50 {
  Inner_82371A50 **begin, **end;
  __forceinline int size() { return end - begin; }
  __forceinline Inner_82371A50 *&at(int i) { return begin[i]; }
};
struct Obj_82371A50 { char pad[8]; Vec_82371A50 *f8; };

extern "C" void fn_82371A50(Obj_82371A50 *o)
{
  for (int i = 0; i < o->f8->size(); i++) {
    for (unsigned j = 0; j < o->f8->at(i)->cur()->count; j++) {
      Node_82371A50 *n = fn_822ABA88(o->f8->at(i)->cur(), j);
      if (n->f24 != 0) {
        void *x = n->f74;
        if (x != 0 && fn_828EA5F8(x)) {
          fn_823873E0((char *)o + 0xa14, x, i, j);
        }
      }
    }
  }
}
