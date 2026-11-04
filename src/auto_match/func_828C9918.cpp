struct Node_828C9918 {
  Node_828C9918 *left;
  Node_828C9918 *parent;
  Node_828C9918 *right;
  char pad_c[0x4]; unsigned key;
  char pad[0x21 - 0x10];
  char pad_25[0x24]; char isnil;
};
struct Iter_828C9918 {
  Node_828C9918 *ptr;
  Iter_828C9918() : ptr(0) {}
  Iter_828C9918(Node_828C9918 *p) : ptr(p) {}
  bool operator==(const Iter_828C9918 &o) const { return ptr == o.ptr; }
};
struct Tree_828C9918 {
  int pad;
  Node_828C9918 *head;
  Iter_828C9918 end() { return Iter_828C9918(head); }
  Iter_828C9918 lower_bound(const unsigned &k) {
    Node_828C9918 *where = head;
    Node_828C9918 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_828C9918(where);
  }
};

extern "C" Iter_828C9918 fn_828C9918(Tree_828C9918 *t, unsigned *key)
{
  Iter_828C9918 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
