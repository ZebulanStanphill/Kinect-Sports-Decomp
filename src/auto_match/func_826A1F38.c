extern unsigned char *fn_8267BED0(int, int, int *);
extern void fn_82695FA0(int, int);
void fn_826A1F38(int param_1, int param_2, int param_3)
{
  int tag;
  unsigned char *p;
  unsigned char *q;
  if (param_2 >= 0 && param_2 < *(int *)(param_1 + 0x38)) {
    param_2 = param_2 * 4;
    if (*(unsigned *)(*(int *)(param_1 + 0x34) + param_2) == 0) {
      tag = 0x143;
      p = fn_8267BED0(param_1, 0x10, &tag);
      if (p != 0) {
        *p = 0;
        q = p;
      } else {
        q = 0;
      }
      *(unsigned char **)(*(int *)(param_1 + 0x34) + param_2) = q;
    }
    fn_82695FA0(*(int *)(*(int *)(param_1 + 0x34) + param_2), param_3);
  }
}
