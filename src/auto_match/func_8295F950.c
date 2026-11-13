#define true 1
#define false 0
extern int fn_8295D318();
extern int fn_82963318();


void fn_8295F950(int param_1,unsigned param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int bVar6;
  unsigned int uVar7;
  unsigned *piVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  struct { unsigned a[3]; } local;
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar3 = puVar1[3];
  uVar4 = puVar1[4];
  uVar5 = uVar2 & 0xfffff;
  fn_82963318(puVar1,0,local.a);
  fn_82963318(*(unsigned int *)(param_1 + 0x104),1,local.a+1);
  fn_82963318(*(unsigned int *)(param_1 + 0x104),2,local.a+2);
  bVar6 = false;
  if (param_3 != 0) {
    uVar7 = 0;
    piVar8 = local.a;
    do {
      if (bVar6) break;
      if ((*piVar8 != 0) && (uVar9 = 0, (uVar2 & 0xfffff) != 0)) {
        iVar10 = 0;
        iVar11 = 0;
        do {
          if ((*(unsigned int *)(*(int *)(*(int *)(*piVar8 + iVar11) * 4 + *(int *)(param_1 + 0x14)) +
                        iVar10) & 0x1000000) != 0) {
            bVar6 = true;
            break;
          }
          uVar9 = uVar9 + 1;
          iVar11 = iVar11 + 4;
          iVar10 = iVar10 + 0x80;
        } while (uVar9 < uVar5);
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar7 < 3);
  }
  fn_8295D318(param_1,param_2,uVar4,uVar3,local.a[0],local.a[1],local.a[2],uVar5,0,0,0,bVar6);
  return;
}

