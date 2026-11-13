extern void fn_82693E90(unsigned, unsigned);
extern void fn_826941E8(unsigned, unsigned *);
extern void fn_826944C8(unsigned);

void fn_826944C8(unsigned param_1)
{
  unsigned uVar1;
  unsigned uVar2;
  unsigned a[2];

  uVar1 = *(unsigned *)(param_1 + 4);
  if (uVar1 != param_1 && uVar1 != 0) {
    int c = *(int *)(uVar1 + 8) - 1;
    *(int *)(uVar1 + 8) = c;
    if (c == 0) {
      fn_826944C8(uVar1);
    }
  }
  uVar2 = *(unsigned *)(param_1 & 0xfffffc00);
  a[0] = param_1;
  fn_826941E8(uVar2, a);
  fn_82693E90(uVar2, param_1);
}
