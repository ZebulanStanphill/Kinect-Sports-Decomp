typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_38;
extern int fn_822315A0();
extern int fn_82522588();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int iStack_34;
extern unsigned int lbl_82191FC8;


void fn_8236B3E8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  double dVar7;
  int aiStack_40;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  if (uVar5 != *(unsigned int *)(param_1 + 0x34)) {
    dVar7 = (double)lbl_82191FC8;
    do {
      piVar3 = (int *)fn_82522588(auStack_38,uVar5);
      iVar2 = *piVar3;
      if ((*(int *)(iVar2 + 0x2b4) != 0) && (iVar4 = *(int *)(iVar2 + 0x360), iVar4 != 0)) {
        uVar1 = *(unsigned int *)(*(int *)(iVar2 + 0x2b4) + 0xc);
        *(unsigned char *)(iVar4 + 0x18) = 1;
        *(unsigned int *)(iVar4 + 0x1c) = uVar1;
        *(float *)(iVar4 + 0x20) = (float)dVar7;
      }
      iVar4 = *(int *)(iVar2 + 0x260);
      if (iVar4 < 1) {
        iVar4 = 1;
      }
      *(int *)(iVar2 + 0x260) = iVar4;
      if (iStack_34 != 0) {
        fn_822315A0();
      }
      uVar5 = uVar5 + 8;
    } while ((uVar5 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x34));
  }
  piVar3 = (int *)(param_1 + 0x1008);
  if (piVar3 == (int *)0x0) {
    bVar6 = false;
  }
  else {
    bVar6 = *piVar3 != 0;
  }
  if (bVar6) {
    aiStack_40 = *piVar3;
    aiStack_40 =
         fn_82535298(&aiStack_40,**(unsigned int **)(param_1 + 0xfe0),0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(&aiStack_40);
  }
  *(unsigned int *)(param_1 + 0xfa4) = 1;
  return;
}

