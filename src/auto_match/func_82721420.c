extern int fn_826BE530();
extern int fn_826C31F0();


void fn_82721420(int param_1)

{
  int p;
  unsigned int uVar2;
  
  fn_826C31F0(param_1 + 0x48);
  p = *(int *)(param_1 + 0x38);
  if (p != 0) {
    uVar2 = ((unsigned int *)p)[2] - 1;
    ((unsigned int *)p)[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0x10000000) {
      ((unsigned int *)p)[2] = uVar2 & 0x8fffffff | 0x10000000;
      (*(int (**)())*(int *)p)(p,1);
    }
  }
  fn_826BE530(param_1);
  return;
}
