typedef struct IdList_82FF41B8 {
  unsigned int *begin;
  unsigned int *end;
} IdList_82FF41B8;

typedef struct Node_82FF41B8 {
  char pad0[0x14];
  struct Node_82FF41B8 *next;
  char pad18[0x58];
  unsigned int id;
} Node_82FF41B8;

typedef struct Owner_82FF41B8 {
  char pad0[0x7c];
  Node_82FF41B8 *first;
} Owner_82FF41B8;

extern void fn_82FF1BB0(Node_82FF41B8 *node, float value, int kind);

void fn_82FF41B8(Owner_82FF41B8 *self, float value, int kind, unsigned int id, IdList_82FF41B8 *excluded)
{
  Node_82FF41B8 *node;
  for (node = self->first; node != 0; node = node->next) {
    if (excluded != 0) {
      if (id == 0) {
        unsigned char found = 0;
        unsigned int *p;
        for (p = excluded->begin; p != excluded->end; p++) {
          if (*p == node->id) {
            found = 1;
            break;
          }
        }
        if (!found)
          fn_82FF1BB0(node, value, kind);
      } else if (node->id == id)
        fn_82FF1BB0(node, value, kind);
    } else if (id == 0 || node->id == id) {
      fn_82FF1BB0(node, value, kind);
    }
  }
}
