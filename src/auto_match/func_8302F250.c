extern unsigned char lbl_8326430C[];
extern int fn_82FB0438();
extern int fn_8300C838();
extern int fn_8300C920();
extern int fn_8302EE80();

typedef struct Node_8302F250 { struct Node_8302F250 *next; unsigned int key; } Node_8302F250;
typedef struct { unsigned int *begin; unsigned int *end; } Vec_8302F250;

static unsigned int *find_8302F250(unsigned int *f, unsigned int *l, unsigned int v)
{
  for (; f != l; f++) {
    if (*f == v) break;
  }
  return f;
}

void fn_8302F250(char *param_1)

{
  Node_8302F250 *n;
  Vec_8302F250 *vec;
  unsigned int *cnt;

  if (lbl_8326430C[0x1c] == 0) {
    fn_82FB0438();
  }
  else {
    cnt = (unsigned int *)(param_1 + 0xb4);
    if (*cnt != 0 && (--*cnt == 0)) {
      vec = (Vec_8302F250 *)fn_8300C838(param_1 + 0xac, *(int *)(param_1 + 0xbc), *(int *)(param_1 + 0xb8));
      if (vec != 0) {
        for (n = *(Node_8302F250 **)(param_1 + 0xc4); n != 0; n = n->next) {
          unsigned int *f = vec->begin;
          unsigned int k = n->key;
          f = find_8302F250(f, vec->end, k);
          if (f != vec->end) {
            fn_8302EE80(param_1, n + 1);
          }
        }
      }
      fn_8300C920(param_1 + 0xac, *(int *)(param_1 + 0xbc), *(int *)(param_1 + 0xb8));
    }
  }
}
