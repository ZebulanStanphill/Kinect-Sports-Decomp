void fn_82D035B0(int *self, int param_2, unsigned int param_3)
{
  unsigned int *hdr = (unsigned int *)(param_2 - 0x10);
  switch (*hdr) {
  case 0:
    (*(int (**)())(*(int *)self[0x26] + 0x28))((int *)self[0x26], hdr, param_3 + 0x1f & 0xfffffff0);
    break;
  case 1:
    (*(int (**)())(*self + 8))(self, hdr);
    break;
  }
}
