struct Node_8288E0C8 {
  Node_8288E0C8 *left;
  Node_8288E0C8 *parent;
  Node_8288E0C8 *right;
  unsigned key;
  char pad[0x29 - 0x10];
  char isnil;
};
struct Iter_8288E0C8 {
  Node_8288E0C8 *ptr;
  Iter_8288E0C8() : ptr(0) {}
  Iter_8288E0C8(Node_8288E0C8 *p) : ptr(p) {}
  bool operator==(const Iter_8288E0C8 &o) const { return ptr == o.ptr; }
};
struct Tree_8288E0C8 {
  int pad;
  Node_8288E0C8 *head;
  Iter_8288E0C8 end() { return Iter_8288E0C8(head); }
  Iter_8288E0C8 lower_bound(const unsigned &k) {
    Node_8288E0C8 *where = head;
    Node_8288E0C8 *p = head->parent;
    while (!p->isnil) {
      if (p->key < k) { p = p->right; } else { where = p; p = p->left; }
    }
    return Iter_8288E0C8(where);
  }
};

extern "C" Iter_8288E0C8 fn_8288E0C8(Tree_8288E0C8 *t, unsigned *key)
{
  Iter_8288E0C8 w = t->lower_bound(*key);
  return (w == t->end() || *key < w.ptr->key) ? t->end() : w;
}
