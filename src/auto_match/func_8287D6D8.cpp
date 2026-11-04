struct Node_8287D6D8 {
  Node_8287D6D8 *left;
  Node_8287D6D8 *parent;
  Node_8287D6D8 *right;
  char pad_c[0x4]; unsigned key;
  char pad[0x4d - 0x10];
  char pad_51[0xb0]; char isnil;
};
struct Iter_8287D6D8 {
  Node_8287D6D8 *ptr;
  Iter_8287D6D8() : ptr(0) {}
  Iter_8287D6D8(Node_8287D6D8 *p) : ptr(p) {}
  bool operator==(const Iter_8287D6D8 &o) const { return ptr == o.ptr; }
};
struct Tree_8287D6D8 {
  int pad;
  Node_8287D6D8 *head;
  Iter_8287D6D8 end() { return Iter_8287D6D8(head); }
  Iter_8287D6D8 lower_bound(const unsigned &k) {
    Node_8287D6D8 *where = head;
    Node_8287D6D8 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8287D6D8(where);
  }
};

extern "C" Iter_8287D6D8 fn_8287D6D8(Tree_8287D6D8 *t, unsigned *key)
{
  Iter_8287D6D8 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
