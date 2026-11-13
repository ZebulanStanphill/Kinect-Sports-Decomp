extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8248FAB0();
extern int fn_82522588();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_8329618C;
extern unsigned int uRam831d33e4;
extern unsigned int uRam831d33e8;
extern unsigned int uRam831d33ec;


unsigned __int64 fn_82493370(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  piVar5 = (int *)fn_82522588(auStack_40,*(unsigned int *)**(unsigned int **)(param_1 + 0x5c));
  iVar7 = *(int *)(*piVar5 + 0x2b0);
  if (iStack_3c != 0) {
    fn_822315A0(iStack_3c);
  }
  if (*(int *)(param_1 + 0x58) < iVar7) {
    piVar5 = *(int **)(param_1 + 0x5c);
    puVar2 = (unsigned int *)*piVar5;
    uVar8 = (unsigned __int64)*puVar2;
    if (uVar8 != puVar2[1]) {
      do {
        piVar6 = (int *)fn_82522588(auStack_38,uVar8);
        uVar3 = uRam831d33ec;
        uVar1 = uRam831d33e8;
        iVar7 = *(int *)(*(int *)(*piVar6 + 0x240) + 0x94);
        if (iVar7 != 0) {
          iVar7 = *(int *)(iVar7 + 0x1c);
          *(unsigned int *)(iVar7 + 0x24) = uRam831d33e4;
          *(unsigned int *)(iVar7 + 0x28) = uVar1;
          *(unsigned int *)(iVar7 + 0x2c) = uVar3;
        }
        if (iStack_34 != 0) {
          fn_822315A0();
        }
        uVar8 = uVar8 + 8;
      } while ((uVar8 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(*piVar5 + 4));
    }
    fn_8248FAB0(param_1,param_2);
    uVar1 = *(unsigned int *)(param_1 + 0x2c);
    *(unsigned int *)(param_2 + 0x54) = uVar1;
    if (lbl_8329618C == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(lbl_8329618C + 4);
    }
    *(unsigned int *)(iVar7 + 0x820) = uVar1;
    uVar4 = 0;
    *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_1 + 0x34);
    *(unsigned int *)(param_2 + 0x18) = 1;
    *(unsigned int *)(param_1 + 0x60) = 1;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

