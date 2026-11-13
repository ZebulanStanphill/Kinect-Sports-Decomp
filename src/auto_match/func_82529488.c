extern void fn_825293A8(unsigned int);
void fn_82529488(unsigned int node, int flag, int ctx)
{
  while (node != 0) {
    unsigned int o;
    int left = *(int *)(node + 8);
    if (left != 0) {
      fn_82529488(left, flag, ctx);
    }
    o = node - 0x40;
    node = *(int *)(node + 4);
    if (flag == 0) {
      fn_825293A8(o);
    } else {
      unsigned int m = *(unsigned int *)(o + 0xb20);
      if ((*(unsigned int *)(ctx + 0xb20) & m) != 0) {
        if (*(unsigned int *)(o + 0xb1c) != 0 || m == 0) {
          fn_825293A8(o);
        }
      }
    }
  }
}
