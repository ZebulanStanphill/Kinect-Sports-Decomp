struct Node_82888A50 {
  Node_82888A50 *left;
  Node_82888A50 *parent;
  Node_82888A50 *right;
  char pad_c[0x4]; unsigned short key;
  char pad[0x61 - 0x12];
  char isnil;
};
struct Iter_82888A50 {
  Node_82888A50 *ptr;
  Iter_82888A50() : ptr(0) {}
  Iter_82888A50(Node_82888A50 *p) : ptr(p) {}
  bool operator==(const Iter_82888A50 &o) const { return ptr == o.ptr; }
};
struct Tree_82888A50 {
  int pad;
  Node_82888A50 *head;
  Iter_82888A50 end() { return Iter_82888A50(head); }
  Iter_82888A50 lower_bound(const unsigned short &k) {
    Node_82888A50 *where = head;
    Node_82888A50 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_82888A50(where);
  }
};

extern "C" Iter_82888A50 fn_82888A50(Tree_82888A50 *t, unsigned short *key)
{
  Iter_82888A50 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
