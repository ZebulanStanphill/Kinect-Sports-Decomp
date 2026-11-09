typedef struct Node_82882300 {
  int pad[4];
  struct Value_82882300 *value;
} Node_82882300;

typedef struct Map_82882300 {
  int unk0;
  Node_82882300 *head;
} Map_82882300;

typedef struct Value_82882300 { char pad[0x28]; void *object; } Value_82882300;
extern int fn_82CE06F8(void *);

extern Map_82882300 lbl_83212A00;
extern void fn_8289F160(Node_82882300 **out, Map_82882300 *map, int *key);

int fn_82882300(int key)
{
  int k;
  Node_82882300 *it;
  Value_82882300 *v;

  k = key;
  fn_8289F160(&it, &lbl_83212A00, &k);
  if (it != lbl_83212A00.head) {
    v = it->value;
  } else {
    v = 0;
  }
  return fn_82CE06F8(v->object) == 1;
}
