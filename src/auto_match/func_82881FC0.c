typedef struct Value_82881FC0 {
  int f0, f4;
  int id;
  unsigned char active;
} Value_82881FC0;

typedef struct Node_82881FC0 {
  struct Node_82881FC0 *left, *parent, *right;
  int key;
  Value_82881FC0 *value;
} Node_82881FC0;

typedef struct Map_82881FC0 {
  int alloc;
  Node_82881FC0 *head;
  unsigned int size;
} Map_82881FC0;

extern Map_82881FC0 lbl_83212A00;
extern void fn_8289F160(Node_82881FC0 **out, Map_82881FC0 *map, const int *key);

void fn_82881FC0(int itemKey, int id, unsigned char active)
{
  int key;
  Node_82881FC0 *it;
  Value_82881FC0 *v;

  key = itemKey;
  fn_8289F160(&it, &lbl_83212A00, &key);
  if (it != lbl_83212A00.head) {
    v = it->value;
  } else {
    v = 0;
  }
  v->id = id;
  v->active = active;
}
