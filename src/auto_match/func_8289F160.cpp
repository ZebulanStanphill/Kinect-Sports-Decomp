struct Node_8289F160 {
  Node_8289F160 *left;
  Node_8289F160 *parent;
  Node_8289F160 *right;
  unsigned key;
  char pad[0x15 - 0x10];
  char isnil;
};
struct Iter_8289F160 {
  Node_8289F160 *ptr;
  Iter_8289F160() : ptr(0) {}
  Iter_8289F160(Node_8289F160 *p) : ptr(p) {}
  bool operator==(const Iter_8289F160 &o) const { return ptr == o.ptr; }
};
struct Tree_8289F160 {
  int pad;
  Node_8289F160 *head;
  Iter_8289F160 end() { return Iter_8289F160(head); }
  Iter_8289F160 lower_bound(const unsigned &k) {
    Node_8289F160 *where = head;
    Node_8289F160 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8289F160(where);
  }
};

extern "C" Iter_8289F160 fn_8289F160(Tree_8289F160 *t, unsigned *key)
{
  Iter_8289F160 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
