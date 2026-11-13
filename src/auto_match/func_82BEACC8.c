typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5398();
extern int fn_82BEAC00();
extern int fn_82BF4B98();
extern int fn_82F65AC0();


unsigned __int64 fn_82BEACC8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned int *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  unsigned __int64 uVar4;
  
  if ((*(int *)(param_1 + 0x3c) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    uVar4 = fn_82BE5240(param_1,0x133,0xffffffff820ead94);
  }
  else {
    puVar5 = (unsigned int *)fn_82BE5340(param_1 + 0x28);
    while (puVar5 != (unsigned int *)0x0) {
      iVar1 = puVar5[2];
      bVar3 = false;
      if (iVar1 != 0) {
        piVar6 = (int *)fn_82BE5340(*(unsigned int *)(param_1 + 0x3c));
        if (piVar6 == (int *)0x0) {
LAB_82beada8:
          piVar6 = (int *)fn_82BE5340(*(unsigned int *)(param_1 + 0x40));
          if (piVar6 != (int *)0x0) {
            do {
              piVar8 = (int *)piVar6[2];
              if ((piVar8 != (int *)0x0) &&
                 (iVar9 = fn_82F65AC0(piVar8[5],*(unsigned int *)(iVar1 + 4)), iVar9 == 0)) {
                bVar3 = true;
                iVar9 = (**(int (***)())(*piVar8 + 0x18))(piVar8,iVar1);
                if (iVar9 != 0) {
                  uVar4 = 0xffffffff820eadb8;
LAB_82beae5c:
                  *(unsigned int *)(param_1 + 0x10) = 0;
                  uVar4 = fn_82BE5240(param_1,0x133,uVar4,*(unsigned int *)(iVar1 + 4),
                                            *(unsigned int *)(param_1 + 0x38));
                  return uVar4;
                }
              }
              piVar6 = (int *)*piVar6;
            } while (piVar6 != (int *)0x0);
            if (bVar3) goto LAB_82beae10;
          }
          puVar5 = (unsigned int *)*puVar5;
        }
        else {
          do {
            iVar9 = piVar6[2];
            if ((iVar9 != 0) &&
               (iVar7 = fn_82F65AC0(*(unsigned int *)(iVar9 + 0x14),*(unsigned int *)(iVar1 + 4)),
               iVar7 == 0)) {
              bVar3 = true;
              piVar8 = (int *)fn_82BF4B98(iVar9,param_1);
              if (piVar8 == (int *)0x0) {
                uVar4 = 0xffffffff820eadf0;
                goto LAB_82beae5c;
              }
              iVar9 = (**(int (***)())(*piVar8 + 0x18))(piVar8,iVar1);
              if (iVar9 != 0) {
                (**(int (***)())*piVar8)(piVar8,1);
                uVar4 = 0xffffffff820eae30;
                goto LAB_82beae5c;
              }
              iVar9 = fn_82BEAC00(param_1,piVar8);
              if (iVar9 == 0) {
                (**(int (***)())*piVar8)(piVar8,1);
                uVar4 = 0xffffffff820eae6c;
                goto LAB_82beae5c;
              }
            }
            piVar6 = (int *)*piVar6;
          } while (piVar6 != (int *)0x0);
          if (!bVar3) goto LAB_82beada8;
LAB_82beae10:
          puVar2 = (unsigned int *)*puVar5;
          fn_82BE5398(param_1 + 0x28,puVar5,1);
          puVar5 = puVar2;
        }
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

