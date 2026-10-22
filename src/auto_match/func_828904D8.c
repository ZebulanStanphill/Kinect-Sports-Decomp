typedef unsigned char bool;

typedef struct Node {
  struct Node *next;
  struct Node *prev;
  int f8;
  int fc;
  int value;
} Node;

typedef struct Inner {
  char pad[0x26];
  bool flag;
} Inner;

typedef struct Outer {
  char pad[0x38];
  Inner *inner;
} Outer;

extern void fn_82381BC0(Node **it);
extern void fn_8288EC98(int self, int v);
extern int fn_82A4AAA8(int v);

void fn_828904D8(int param_1)
{
  Outer *o;
  bool flag;
  Node *it;

  o = *(Outer **)(param_1 + 0x34);
  if (o == 0 || o->inner == 0) {
    flag = 0;
  } else {
    flag = o->inner->flag;
  }
  if (flag) {
    Node *head = *(Node **)(*(int *)(param_1 + 0x10) + 0x230);
    it = head->next;
    if (it != head) {
      do {
        int v = it->value;
        if (fn_82A4AAA8(v) == 1) {
          fn_8288EC98(param_1, v);
        }
        fn_82381BC0(&it);
      } while (it != *(Node **)(*(int *)(param_1 + 0x10) + 0x230));
    }
  }
  *(bool *)(param_1 + 0x5d) = 1;
  *(bool *)(param_1 + 0x5e) = 1;
}
