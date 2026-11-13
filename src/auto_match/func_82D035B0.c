typedef int (*code)();

void fn_82D035B0(int *param_1, int param_2, unsigned int param_3)
{
  unsigned int *hdr = (unsigned int *)(param_2 - 0x10);
  switch (*hdr) {
  case 0:
    (*(code *)(*(int *)param_1[0x26] + 0x28))((int *)param_1[0x26], hdr, param_3 + 0x1f & 0xfffffff0);
    break;
  case 1:
    (*(code *)(*param_1 + 8))(param_1, hdr);
    break;
  }
}
