struct Node_828CD0D8 {
  Node_828CD0D8 *left;
  Node_828CD0D8 *parent;
  Node_828CD0D8 *right;
  unsigned key;
  char pad[0x19 - 0x10];
  char isnil;
};
struct Iter_828CD0D8 {
  Node_828CD0D8 *ptr;
  Iter_828CD0D8() : ptr(0) {}
  Iter_828CD0D8(Node_828CD0D8 *p) : ptr(p) {}
  bool operator==(const Iter_828CD0D8 &o) const { return ptr == o.ptr; }
};
struct Tree_828CD0D8 {
  int pad;
  Node_828CD0D8 *head;
  Iter_828CD0D8 end() { return Iter_828CD0D8(head); }
  Iter_828CD0D8 lower_bound(const unsigned &k) {
    Node_828CD0D8 *where = head;
    Node_828CD0D8 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_828CD0D8(where);
  }
};

extern "C" Iter_828CD0D8 fn_828CD0D8(Tree_828CD0D8 *t, unsigned *key)
{
  Iter_828CD0D8 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
