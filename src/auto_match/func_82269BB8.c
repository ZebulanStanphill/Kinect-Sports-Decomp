typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225C590();
extern int fn_822750C8();
extern int fn_823AB470();
extern int fn_82A1C0C8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832659D4;


void fn_82269BB8(int param_1)

{
  bool bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  
  fn_8225C590();
  bVar1 = false;
  if ((((*(int *)(param_1 + 0x364) == 0) && (lbl_832659CD != '\0')) && (lbl_83265988 != 0)) &&
     (iVar3 = fn_823AB470(), iVar3 != 0)) {
    bVar1 = true;
  }
  if ((*(int *)(param_1 + 0x364) == 0) && (bVar1)) {
    lbl_832659D4 = 1;
    uVar2 = fn_822750C8();
    uVar4 = 0x80000;
  }
  else {
    lbl_832659D4 = 1;
    uVar2 = fn_822750C8();
    uVar4 = 0x1000000;
  }
  fn_82A1C0C8(uVar2,uVar4);
  return;
}

