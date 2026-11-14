typedef struct IdList {
  unsigned int *begin;
  unsigned int *end;
} IdList;

typedef struct Filter_82FF3FA8 {
  int pad0;
  unsigned int id;
  int pad8;
  IdList *excluded;
} Filter_82FF3FA8;

typedef struct Node_82FF3FA8 {
  char pad0[0x14];
  struct Node_82FF3FA8 *next;
  char pad18[0x58];
  unsigned int id;
} Node_82FF3FA8;

typedef struct Owner_82FF3FA8 {
  char pad0[0x7c];
  Node_82FF3FA8 *first;
} Owner_82FF3FA8;

extern void fn_82FF0F00(Node_82FF3FA8 *node, Filter_82FF3FA8 *filter);

void fn_82FF3FA8(Owner_82FF3FA8 *self, Filter_82FF3FA8 *filter)
{
  Node_82FF3FA8 *node;
  for (node = self->first; node != 0; node = node->next) {
    IdList *list = filter->excluded;
    unsigned int id = filter->id;
    if (list != 0) {
      if (id == 0) {
        unsigned char found = 0;
        unsigned int *p;
        for (p = list->begin; p != list->end; p++) {
          if (*p == node->id) {
            found = 1;
            break;
          }
        }
        if (found)
          continue;
      } else if (node->id != id)
        continue;
    } else if (id != 0 && node->id != id) {
      continue;
    }
    fn_82FF0F00(node, filter);
  }
}
