typedef struct Node_82883058 {
  int pad[4];
  char *value;
} Node_82883058;

typedef struct Map_82883058 {
  int unk0;
  Node_82883058 *head;
} Map_82883058;

extern Map_82883058 lbl_83212A00;
extern void fn_8289F160(Node_82883058 **out, Map_82883058 *map, int *key);

char *fn_828830B8(int key)
{
  int k;
  Node_82883058 *it;
  char *v;

  k = key;
  fn_8289F160(&it, &lbl_83212A00, &k);
  if (it != lbl_83212A00.head) {
    v = it->value;
  } else {
    v = 0;
  }
  return v + 0xbc;
}
