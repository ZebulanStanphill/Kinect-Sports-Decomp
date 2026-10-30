typedef struct Entry_82F35F80 { unsigned short a; unsigned short b; } Entry_82F35F80;
extern void fn_82F35618(void *tbl, unsigned int idx, Entry_82F35F80 **out);

int fn_82F35F80(int param_1, unsigned short idx, unsigned short *outA, unsigned int *outB)
{
  Entry_82F35F80 *e1;
  Entry_82F35F80 *e2;

  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xc00d36b6;
  }
  if (outA == 0 || outB == 0 || idx >= *(unsigned int *)(param_1 + 0x130)) {
    return 0x80070057;
  }
  fn_82F35618((void *)(param_1 + 200), idx, &e1);
  *outA = e1->a;
  fn_82F35618((void *)(param_1 + 200), idx, &e2);
  *outB = e2->b;
  return 0;
}
