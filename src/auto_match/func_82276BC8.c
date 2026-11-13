extern int fn_8226D6A0();
extern int fn_822848B8();
extern int fn_82292BC0();
extern int fn_82359C18();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_8249DA08();
extern int fn_8251FA58();
extern int fn_8254B438();
extern unsigned int lbl_8329618C;


void fn_82276BC8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_82292BC0(0,0,0);
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_822848B8();
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_8226D6A0();
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
  iVar1 = fn_8249ABC0();
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x34) != -1) {
    uVar2 = 0xffffffff;
    fn_8249D980(*(unsigned int *)(iVar1 + 0x110));
    *(unsigned int *)(param_1 + 0x34) = uVar2;
  }
  if (*(int *)(param_1 + 0x38) != -1) {
    fn_8249DA08();
    *(unsigned int *)(param_1 + 0x38) = uVar2;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    if (lbl_8329618C == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(lbl_8329618C + 4);
    }
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x8c8) != 0)) {
      fn_8254B438();
    }
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    fn_8251FA58();
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  fn_82359C18(param_1);
  return;
}

