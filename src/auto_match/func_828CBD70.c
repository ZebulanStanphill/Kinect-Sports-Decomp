extern void *fn_8288F1E8(int, int);
extern int fn_82894298(void *, unsigned char, int, int, int, int);

int fn_828CBD70(int param_1)
{
  void *p;

  p = fn_8288F1E8(*(int *)(param_1 + 0x6c), param_1 + 0x80);
  if (p != 0) {
    fn_82894298(p, *(unsigned char *)(param_1 + 0x8c), *(int *)(param_1 + 0x88),
                *(int *)(param_1 + 0x18), param_1 + 0x90, *(int *)(param_1 + 0xa0));
  }
  return 1;
}
