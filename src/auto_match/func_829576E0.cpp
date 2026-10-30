// Member function (the explicit index comes before the member base in the original: lwzx with the index as rA).
// Checks whether any node of kind 6 in the entry's [first, last] range refers to the entry's own index.
struct Node_829576E0 {
  unsigned int tag;
  unsigned int count;
  unsigned int *items;
};
struct Entry_829576E0 {
  char pad[0x54];
  unsigned int first;
  unsigned int last;
};
struct Owner_829576E0 {
  char pad0[0x14];
  Entry_829576E0 **entries;
  Node_829576E0 **nodes;
  char pad1[0x50];
  unsigned int flags;
  int Contains(unsigned int idx);
};
int Owner_829576E0::Contains(unsigned int param_2)
{
  Entry_829576E0 *entry = entries[param_2];
  unsigned int i, k;

  if (entry->first != 0xffffffff && (flags & 2) == 0) {
    for (i = entry->first; i <= entry->last; i++) {
      Node_829576E0 *n = nodes[i];
      if ((n->tag & 0xf0000000) == 0x60000000) {
        for (k = 0; k < n->count; k++) {
          if (n->items[k] == param_2)
            return 1;
        }
      }
    }
  }
  return 0;
}
