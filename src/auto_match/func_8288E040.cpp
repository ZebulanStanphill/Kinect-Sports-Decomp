// std::set<T>::find for an unsigned key: lower_bound, then end() unless the
// found key equals the one searched. The node keeps its value at + 0x10
// (8-byte aligned) and _Isnil at + 0x21. Many unrelated trees call this
// address (identical code folding), so it keeps its fn_ name and C linkage.
struct Node_8288E040 {
  Node_8288E040 *left;
  Node_8288E040 *parent;
  Node_8288E040 *right;
  char pad_c[0x4]; unsigned key;
  char pad_14[0x21 - 0x14];
  char isnil;
};
struct Iter_8288E040 {
  Node_8288E040 *ptr;
  Iter_8288E040() : ptr(0) {}
  Iter_8288E040(Node_8288E040 *p) : ptr(p) {}
  bool operator==(const Iter_8288E040 &o) const { return ptr == o.ptr; }
};
struct Tree_8288E040 {
  int pad;
  Node_8288E040 *head;
  Iter_8288E040 end() { return Iter_8288E040(head); }
  Iter_8288E040 lower_bound(const unsigned &k) {
    Node_8288E040 *where = head;
    Node_8288E040 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8288E040(where);
  }
};

extern "C" Iter_8288E040 fn_8288E040(Tree_8288E040 *t, unsigned *key)
{
  Iter_8288E040 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
