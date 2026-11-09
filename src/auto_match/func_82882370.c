typedef struct Node_82882370 {
  int pad[4];
  struct Value_82882370 *value;
} Node_82882370;

typedef struct Map_82882370 {
  int unk0;
  Node_82882370 *head;
} Map_82882370;

typedef struct Value_82882370 { char pad[0x28]; void *object; } Value_82882370;
extern int fn_82CE06F8(void *);

extern Map_82882370 lbl_83212A00;
extern void fn_8289F160(Node_82882370 **out, Map_82882370 *map, int *key);

int fn_82882370(int key)
{
  int k;
  Node_82882370 *it;
  Value_82882370 *v;

  k = key;
  fn_8289F160(&it, &lbl_83212A00, &k);
  if (it != lbl_83212A00.head) {
    v = it->value;
  } else {
    v = 0;
  }
  return fn_82CE06F8(v->object) == 2;
}
