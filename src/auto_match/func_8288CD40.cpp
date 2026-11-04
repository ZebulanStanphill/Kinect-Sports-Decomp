struct Node_8288CD40 {
  Node_8288CD40 *left;
  Node_8288CD40 *parent;
  Node_8288CD40 *right;
  unsigned key;
  char pad[0x4d - 0x10];
  char isnil;
};
struct Iter_8288CD40 {
  Node_8288CD40 *ptr;
  Iter_8288CD40() : ptr(0) {}
  Iter_8288CD40(Node_8288CD40 *p) : ptr(p) {}
  bool operator==(const Iter_8288CD40 &o) const { return ptr == o.ptr; }
};
struct Tree_8288CD40 {
  int pad;
  Node_8288CD40 *head;
  Iter_8288CD40 end() { return Iter_8288CD40(head); }
  Iter_8288CD40 lower_bound(const unsigned &k) {
    Node_8288CD40 *where = head;
    Node_8288CD40 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8288CD40(where);
  }
};

extern "C" Iter_8288CD40 fn_8288CD40(Tree_8288CD40 *t, unsigned *key)
{
  Iter_8288CD40 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
