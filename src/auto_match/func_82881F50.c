typedef struct Value_82881F50 {
  int f0, f4;
  int id;
  unsigned char active;
} Value_82881F50;

typedef struct Node_82881F50 {
  struct Node_82881F50 *left, *parent, *right;
  int key;
  Value_82881F50 *value;
} Node_82881F50;

typedef struct Map_82881F50 {
  int alloc;
  Node_82881F50 *head;
  unsigned int size;
} Map_82881F50;

extern Map_82881F50 lbl_83212A00;
extern void fn_8289F160(Node_82881F50 **out, Map_82881F50 *map, const int *key);

void fn_82881F50(int id)
{
  int key;
  Node_82881F50 *it;
  Value_82881F50 *v;

  key = id;
  fn_8289F160(&it, &lbl_83212A00, &key);
  if (it != lbl_83212A00.head) {
    v = it->value;
  } else {
    v = 0;
  }
  v->id = -1;
  v->active = 0;
}
