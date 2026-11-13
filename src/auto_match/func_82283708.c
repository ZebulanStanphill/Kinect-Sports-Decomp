typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82250A18();
extern int fn_82279D28();
extern int fn_82279E08();
extern int fn_82284B08();
extern unsigned int lbl_8329618C;
extern unsigned int lbl_832975B0;


void fn_82283708(double param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  *(float *)(param_2 + 0x15c) = (float)(param_1 + (double)*(float *)(param_2 + 0x15c));
  bVar1 = false;
  if (lbl_8329618C == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lbl_8329618C + 4);
  }
  if (iVar3 != 0) {
    if ((*(int *)(*(int *)(iVar3 + 0xd54) + 0x18) == 0) &&
       (iVar3 = *(int *)(*(int *)(iVar3 + 0xd54) + 0x14), iVar3 != 0)) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if (((*(char *)(iVar2 + 4) == '\0') && (iVar3 = *(int *)(iVar3 + 8), 4 < iVar3)) &&
         (bVar1 = true, iVar3 < 0x10)) goto LAB_822837b8;
    }
    bVar1 = false;
  }
LAB_822837b8:
  fn_82279D28(param_2,1,!bVar1);
  if (*(int *)(param_2 + 0x148) != 0) {
    fn_82284B08(param_1);
  }
  fn_82279E08(param_1,param_2);
  return;
}

