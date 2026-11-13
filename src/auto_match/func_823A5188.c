typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_823831D8();
extern int fn_8288B760();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_82192510;
extern unsigned int lbl_832975B0;


unsigned int fn_823A5188(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  unsigned char auStack_30 [4];
  int iStack_2c;
  unsigned char auStack_28 [4];
  int iStack_24;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1f8);
  if ((*(int *)(param_1 + 0x50) == 0) && (iVar3 != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x84);
    if (*(int *)(iVar3 + 0x168) == 0) {
      uVar2 = *(unsigned int *)(iVar3 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if (uVar2 == 0) {
      if (iVar1 == 0) goto LAB_823a52d0;
      piVar5 = (int *)fn_822EFBF0(auStack_28,iVar1);
      *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(*piVar5 + 0x40);
    }
    else {
      iVar3 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar3 = fn_82250A18();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x1f8);
      if ((iVar7 == 0) || (*(int *)(iVar7 + 0x24) == 0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((*(float *)(*(int *)(param_1 + 8) + 0x208) < lbl_82192510) || (!bVar6)) ||
         (iVar7 = 1, *(char *)(iVar3 + 4) == '\0')) {
        iVar7 = 0;
      }
      *(int *)(param_1 + 0x50) = iVar7;
      if ((iVar1 == 0) || (iVar7 == 0)) goto LAB_823a52d0;
      puVar4 = (unsigned int *)fn_822EFBF0(auStack_30,iVar1);
      fn_823831D8((unsigned __int64)*(unsigned int *)*puVar4 + 0x278);
      iStack_24 = iStack_2c;
    }
    if (iStack_24 != 0) {
      fn_822315A0(iStack_24);
    }
  }
LAB_823a52d0:
  return *(unsigned int *)(param_1 + 0x50);
}

