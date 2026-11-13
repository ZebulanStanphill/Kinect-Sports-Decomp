#define true 1
extern int fn_82AA66A8();
extern int fn_82B42C70();


void fn_82B206A0(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  
  if (*(int *)(param_2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  piVar2 = *(int **)(*(int *)(param_2 + 0xc) + 0xc);
  uVar1 = (param_2 - *(int *)(param_1 + 0x268)) / 0x44;
  do {
    if (piVar2 == (int *)0x0) {
LAB_82b20718:
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    iVar3 = *piVar2;
    uVar6 = uVar1 & 0x1f;
    iVar5 = ((uVar1 >> 5) + 0x15) * 4;
    if ((*(unsigned int *)(iVar5 + iVar3) >> uVar6 & 1) == 0) {
      if (iVar3 != 0) {
        iVar4 = *(int *)(param_2 + 4);
        if ((*(unsigned int *)(param_2 + 0x3c) & 0x400) != 0) {
          iVar4 = *(int *)(iVar4 + 0x34);
        }
        uVar1 = *(unsigned int *)(param_1 + 0x5c);
        iVar7 = fn_82B42C70(param_1,iVar4,iVar3,1,*(unsigned int *)(param_2 + 8),0);
        *(int *)(param_2 + 0x14) = iVar7;
        if (iVar7 == *(int *)(param_2 + 0xc)) {
          uVar8 = fn_82B42C70(param_1,iVar4,iVar3,1,*(unsigned int *)(param_2 + 8),1);
          *(unsigned int *)(param_2 + 0x14) = uVar8;
        }
        if (uVar1 <= (*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x30) & 0x7ffff)) {
          *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x54) =
               *(unsigned int *)(*(int *)(param_2 + 4) + 0x54);
          *(unsigned int *)(*(int *)(param_2 + 0x14) + iVar5) =
               *(unsigned int *)(*(int *)(param_2 + 0x14) + iVar5) & ~(1 << uVar6);
        }
        return;
      }
      goto LAB_82b20718;
    }
    piVar2 = (int *)piVar2[2];
  } while( true );
}

