typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82F68CC0();
extern int fn_82F691F0();


void fn_82B843F0(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  int iVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  lVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  lVar7 = lVar4;
  if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3800) {
    lVar7 = lVar4 + 4;
  }
  puVar5 = (unsigned int *)fn_82AC6560(param_1,lVar7,0x23);
  if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x3800) {
    puVar5 = puVar5 + 1;
  }
  fn_82F68CC0(puVar5,param_2,lVar4);
  puVar5[1] = 0;
  puVar5[2] = puVar5[2] & 0xffbfffff;
  *puVar5 = 0;
  *(unsigned short *)((int)puVar5 + 0xe) = 0;
  puVar5[8] = 0;
  if (((~(unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) != 0) {
    bVar3 = false;
    for (piVar2 = *(int **)(param_2 + 0x10); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        bVar3 = true;
      }
    }
    if (bVar3) {
      puVar5[4] = 0;
      for (piVar2 = *(int **)(param_2 + 0x10); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if (*piVar2 == 0) {
          uVar8 = 0xc;
        }
        else {
          if (*piVar2 != 1) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          uVar8 = 0x48;
        }
        iVar6 = fn_82AC6560(param_1,uVar8,0);
        fn_82F68CC0(iVar6,piVar2,uVar8);
        *(unsigned int *)(iVar6 + 4) = puVar5[4];
        puVar5[4] = iVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar5 + 0xb,0,*(unsigned int *)(param_2 + 8) >> 0x11 & 0x1c);
}

