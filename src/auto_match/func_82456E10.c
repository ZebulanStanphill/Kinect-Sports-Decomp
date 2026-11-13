extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int ltcg_pool_0_0f;


void fn_82456E10(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  double dVar8;
  unsigned char auStack_40 [4];
  int iStack_3c;
  
  uVar7 = (unsigned __int64)*(unsigned int *)*param_1;
  if (uVar7 != ((unsigned int *)*param_1)[1]) {
    dVar8 = (double)ltcg_pool_0_0f;
    do {
      piVar4 = (int *)fn_82522588(auStack_40,uVar7);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x2d4) == 1) {
        iVar6 = *(int *)(iVar2 + 0x2ac);
        uVar5 = 0x831d3350;
        if (iVar6 == 1) {
          uVar5 = 0x831d3378;
        }
LAB_82456eb4:
        *(unsigned int *)(iVar2 + 0x2a8) = uVar5;
LAB_82456eb8:
        *(unsigned int *)(iVar2 + 0x2b0) = 1;
        *(int *)(iVar2 + 0x2ac) = 1 - iVar6;
      }
      else {
        if (*(int *)(iVar2 + 0x2d4) != 2) {
          iVar6 = *(int *)(iVar2 + 0x2ac);
          if (iVar6 == 1) {
            uVar5 = 0x831d3328;
            goto LAB_82456eb4;
          }
          *(unsigned int *)(iVar2 + 0x2a8) = 0x831d3300;
          goto LAB_82456eb8;
        }
        *(unsigned int *)(iVar2 + 0x2b0) = 2;
        *(unsigned int *)(iVar2 + 0x2a8) = 0x831d33a0;
      }
      iVar6 = *(int *)(iVar2 + 0x2a8);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x240) + 0x94);
      uVar5 = *(unsigned int *)(iVar6 + 0x24);
      uVar1 = *(unsigned int *)(iVar6 + 0x20);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 0x1c);
        *(unsigned int *)(iVar3 + 0x24) = *(unsigned int *)(iVar6 + 0x1c);
        *(unsigned int *)(iVar3 + 0x28) = uVar1;
        *(unsigned int *)(iVar3 + 0x2c) = uVar5;
      }
      *(float *)(iVar2 + 0x2d0) = (float)dVar8;
      *(unsigned int *)(iVar2 + 0x294) = 1;
      *(unsigned int *)(iVar2 + 0x2b4) = 0;
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      uVar7 = uVar7 + 8;
    } while ((uVar7 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(*param_1 + 4));
  }
  return;
}

