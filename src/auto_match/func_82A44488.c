typedef struct Node_82A44488 { int value; int mode; } Node_82A44488;
typedef struct Self_82A44488 { char pad[0xe4]; char list[4]; } Self_82A44488;
extern char lbl_83219D50[];
extern Node_82A44488 *fn_82A3FF60(void *heap, unsigned int size, unsigned int tag, int flags);
extern int fn_82A442F0(void *list, Node_82A44488 *node);

int fn_82A44488(Self_82A44488 *self, unsigned int flags, unsigned int size, int value)
{
  Node_82A44488 *node;
  int mode;

  node = fn_82A3FF60(lbl_83219D50, 8, 0x20970002, 0);
  if (node == 0) {
    return 0x8007000E;
  }
  mode = flags == 0;
  if (mode == 1 && size == 0x20) {
    mode = 2;
  }
  node->value = value;
  node->mode = mode;
  return fn_82A442F0(self->list, node) ? 0 : 0x8007000E;
}
