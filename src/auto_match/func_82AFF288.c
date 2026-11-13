#define true 1
extern int fn_82AF87E0();
extern int fn_82B894C8();


void fn_82AFF288(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int *piVar8;
  
  uVar1 = *(unsigned int *)(param_2 + 0x1c);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3780) {
      piVar8 = (int *)(uVar1 + 0x2c);
      *(unsigned int *)(uVar1 + 8) = *(unsigned int *)(uVar1 + 8) & 0xffffc07f | 0x3700;
      for (uVar7 = 0; uVar7 < (*(unsigned int *)(uVar1 + 8) >> 0x13 & 7); uVar7 = uVar7 + 1) {
        iVar6 = *piVar8;
        fn_82B894C8(param_1,param_2,uVar1 & 0xfffffffc,iVar6);
        puVar2 = *(unsigned int **)(param_1 + 0x290);
        uVar3 = *(unsigned int *)(iVar6 + 0xc);
        if ((puVar2[1] & 1) == 0) {
          uVar5 = *puVar2 & 0xfffffffe;
          iVar6 = uVar5 - 4;
          if ((iVar6 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82aff340;
        }
        else {
LAB_82aff340:
          iVar6 = fn_82AF87E0(puVar2,1);
        }
        iVar4 = *(int *)(iVar6 + 8);
        piVar8 = piVar8 + 1;
        *(int *)(iVar6 + 8) = iVar4 + 1;
        *(unsigned __int64 *)((iVar4 + 2) * 8 + iVar6) = (unsigned __int64)uVar3 << 0x20;
      }
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

