struct Node_8289F1E8 {
  Node_8289F1E8 *left;
  Node_8289F1E8 *parent;
  Node_8289F1E8 *right;
  unsigned key;
  char pad[0x11 - 0x10];
  char isnil;
};
struct Iter_8289F1E8 {
  Node_8289F1E8 *ptr;
  Iter_8289F1E8() : ptr(0) {}
  Iter_8289F1E8(Node_8289F1E8 *p) : ptr(p) {}
  bool operator==(const Iter_8289F1E8 &o) const { return ptr == o.ptr; }
};
struct Tree_8289F1E8 {
  int pad;
  Node_8289F1E8 *head;
  Iter_8289F1E8 end() { return Iter_8289F1E8(head); }
  Iter_8289F1E8 lower_bound(const unsigned &k) {
    Node_8289F1E8 *where = head;
    Node_8289F1E8 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8289F1E8(where);
  }
};

extern "C" Iter_8289F1E8 fn_8289F1E8(Tree_8289F1E8 *t, unsigned *key)
{
  Iter_8289F1E8 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
