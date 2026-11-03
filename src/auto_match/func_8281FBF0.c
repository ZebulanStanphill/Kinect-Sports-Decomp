typedef struct Node_8281FBF0 {
  int pad0;
  float value;
  struct Node_8281FBF0 *next;
  unsigned char queued;
} Node_8281FBF0;

extern void fn_8281F820(void);
extern void fn_8281FB48(void);
extern float lbl_82002AE0;
extern Node_8281FBF0 *lbl_8320A63C;

void fn_8281FBF0(Node_8281FBF0 *n, float v)
{
  if (n->value != v) {
    n->value = v;
    if (v == lbl_82002AE0) {
      fn_8281F820();
    } else if (n->queued == 0) {
      n->next = lbl_8320A63C;
      lbl_8320A63C = n;
      n->queued = 1;
    }
    fn_8281FB48();
  }
}
