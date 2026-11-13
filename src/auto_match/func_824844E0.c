extern int fn_82230300();
extern int fn_8225C590();
extern int fn_8225D168();
extern int fn_8251FA58();
extern int fn_82529320();


void fn_824844E0(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  if (*(int *)(param_1 + 0x18dc) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x18dc) = 0;
  }
  uVar1 = fn_8225C590();
  fn_8225D168(uVar1,*(unsigned int *)(param_1 + 0x18e0));
  if (*(int *)(param_1 + 0x18e4) != 0) {
    fn_82529320(*(int *)(param_1 + 0x18e4),0);
    *(unsigned int *)(param_1 + 0x18e4) = 0;
  }
  if (*(int *)(param_1 + 0x18f0) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x18f0) = 0;
  }
  if (*(int *)(param_1 + 0x18f4) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x18f4) = 0;
  }
  if (*(int *)(param_1 + 0x18f8) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x18f8) = 0;
  }
  if (*(int *)(param_1 + 0x18fc) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x18fc) = 0;
  }
  if (*(int *)(param_1 + 0x1900) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x1900) = 0;
  }
  if (*(int *)(param_1 + 0x1904) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x1904) = 0;
  }
  if (*(int *)(param_1 + 0x1908) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x1908) = 0;
  }
  if (*(int *)(param_1 + 0x190c) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x190c) = 0;
  }
  lVar2 = 3;
  param_1 = param_1 + 0x1cb8;
  do {
    param_1 = param_1 + -0x420;
    fn_82230300(param_1,1,0);
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  return;
}

