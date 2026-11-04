struct Node_8288DFB8 {
  Node_8288DFB8 *left;
  Node_8288DFB8 *parent;
  Node_8288DFB8 *right;
  unsigned key;
  char pad[0x21 - 0x10];
  char isnil;
};
struct Iter_8288DFB8 {
  Node_8288DFB8 *ptr;
  Iter_8288DFB8() : ptr(0) {}
  Iter_8288DFB8(Node_8288DFB8 *p) : ptr(p) {}
  bool operator==(const Iter_8288DFB8 &o) const { return ptr == o.ptr; }
};
struct Tree_8288DFB8 {
  int pad;
  Node_8288DFB8 *head;
  Iter_8288DFB8 end() { return Iter_8288DFB8(head); }
  Iter_8288DFB8 lower_bound(const unsigned &k) {
    Node_8288DFB8 *where = head;
    Node_8288DFB8 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8288DFB8(where);
  }
};

extern "C" Iter_8288DFB8 fn_8288DFB8(Tree_8288DFB8 *t, unsigned *key)
{
  Iter_8288DFB8 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
