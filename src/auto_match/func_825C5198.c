typedef struct Item_825C5198 Item_825C5198;
typedef struct VT_825C5198 {
  int pad[3];
  void (*f0c)(Item_825C5198 *, int);
} VT_825C5198;
typedef struct Key_825C5198 {
  unsigned int v;
} Key_825C5198;
struct Item_825C5198 {
  VT_825C5198 *vt;
  Key_825C5198 *key;
};
typedef struct Node_825C5198 {
  Item_825C5198 *item;
  struct Node_825C5198 *next;
} Node_825C5198;
typedef struct Owner_825C5198 {
  char pad[8];
  Node_825C5198 *head;
} Owner_825C5198;

extern int fn_82522ED8(Node_825C5198 *);

int fn_825C5198(Owner_825C5198 *self, unsigned int *keyp)
{
  Node_825C5198 *cur;
  Node_825C5198 *prev;
  Item_825C5198 *item;

  cur = self->head;
  prev = 0;
  if (cur != 0) {
    do {
      if (cur->item->key->v == *keyp) {
        if (prev != 0) {
          prev->next = cur->next;
        } else {
          self->head = cur->next;
        }
        item = cur->item;
        if (item != 0) {
          item->vt->f0c(item, 1);
        }
        fn_82522ED8(cur);
        return 1;
      }
      prev = cur;
      cur = cur->next;
    } while (cur != 0);
  }
  return 0;
}
