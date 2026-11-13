typedef unsigned char bool;
#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();


bool fn_82DC7240(int param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  int iVar10;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    uVar3 = *(unsigned int *)(iVar2 + 0x60);
    uVar8 = (unsigned __int64)uVar3;
    if (uVar3 != 0) {
      piVar9 = (int *)(iVar2 + 0x5c);
      *(unsigned int *)(iVar2 + 0xc) = uVar3 + *(int *)(iVar2 + 0xc);
      *(unsigned int *)(iVar2 + 0x10) = uVar3 + *(int *)(iVar2 + 0x10);
      *(short *)(param_1 + 0x10) = (short)*(unsigned int *)(param_2 + 4);
      *(short *)(param_1 + 0x20) = (short)uVar3;
      iVar7 = *(int *)(*(int *)(param_3 + 0x14) + 0x18);
      if (0 < (int)uVar3) {
        iVar10 = 0;
        do {
          iVar5 = *(int *)(*piVar9 + iVar10);
          *(short *)(iVar5 + 0x20) = (short)*(unsigned int *)(iVar7 + 0x2c);
          iVar6 = fn_82CE5410();
          if (*(unsigned int *)(iVar7 + 0x2c) == (*(unsigned int *)(iVar7 + 0x30) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),(int *)(iVar7 + 0x28),4);
          }
          uVar8 = uVar8 - 1;
          iVar10 = iVar10 + 4;
          *(int *)(*(int *)(iVar7 + 0x2c) * 4 + *(int *)(iVar7 + 0x28)) = iVar5;
          *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + 1;
        } while (uVar8 != 0);
      }
      iVar7 = fn_82CE5410();
      piVar4 = *(int **)(iVar7 + 0x10);
      *(unsigned int *)(iVar2 + 0x60) = 0;
      if ((*(unsigned int *)(iVar2 + 100) & 0x80000000) == 0) {
        (**(int (***)())(*piVar4 + 0x10))(piVar4,*piVar9,*(unsigned int *)(iVar2 + 100) & 0x3fffffff,4);
      }
      *piVar9 = 0;
      *(unsigned int *)(iVar2 + 100) = 0x80000000;
      return true;
    }
  }
  uVar1 = *(unsigned short *)(param_1 + 0x20);
  if (1 < uVar1) {
    *(unsigned short *)(param_1 + 0x20) = uVar1 - 1;
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    *(unsigned short *)(param_3 + 0x20) = 1;
  }
  return 1 < uVar1;
}

