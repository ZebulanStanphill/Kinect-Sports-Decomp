typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82963540();
extern int fn_82963860();
extern int fn_82965618();
extern int fn_829695C0();


void fn_82969740(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 0x48) != -1) && (iVar3 = *(int *)(param_3 + 0x14), iVar3 != -1)) {
    bVar2 = true;
    do {
      iVar5 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x14));
      iVar3 = *(int *)(iVar5 + 0x48);
      if (iVar3 == -1) break;
      iVar3 = fn_82963540(*(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x18)));
      if (iVar3 == 0) {
        bVar2 = false;
        break;
      }
      iVar3 = *(int *)(iVar5 + 0x14);
    } while (iVar3 != -1);
    uVar1 = *(unsigned int *)(*(int *)(param_2 + 0x48) * 4 + *(int *)(param_1 + 0x18));
    iVar3 = fn_82963860(uVar1);
    if (((iVar3 != 0) && (iVar3 = fn_829695C0(param_1,uVar1), iVar3 == 0)) && (!bVar2)) {
      iVar3 = *(int *)(*(int *)(param_3 + 0x14) * 4 + *(int *)(param_1 + 0x14));
      iVar4 = fn_82963540(*(unsigned int *)(*(int *)(iVar3 + 0x48) * 4 + *(int *)(param_1 + 0x18)));
      iVar5 = param_2;
LAB_82969820:
      if (iVar4 != 0) goto LAB_82969888;
      do {
        do {
          *(unsigned int *)(iVar5 + 0x14) = *(unsigned int *)(iVar3 + 0x14);
          *(unsigned int *)(iVar5 + 0x18) = *(unsigned int *)(iVar3 + 0x18);
          if (*(int *)(iVar3 + 0x14) == -1) break;
          iVar3 = *(int *)(*(int *)(iVar3 + 0x14) * 4 + *(int *)(param_1 + 0x14));
          if (*(int *)(iVar3 + 0x48) == -1) {
            iVar4 = 0;
            break;
          }
          iVar4 = fn_82963540(*(unsigned int *)
                                 (*(int *)(iVar3 + 0x48) * 4 + *(int *)(param_1 + 0x18)));
        } while (iVar4 == 0);
        if (iVar4 == 0) break;
LAB_82969888:
        while (iVar5 = iVar3, iVar3 = iVar5, *(int *)(iVar5 + 0x14) != -1) {
          iVar3 = *(int *)(*(int *)(iVar5 + 0x14) * 4 + *(int *)(param_1 + 0x14));
          if (*(int *)(iVar3 + 0x48) == -1) {
            iVar4 = 0;
            break;
          }
          iVar4 = fn_82963540(*(unsigned int *)
                                 (*(int *)(iVar3 + 0x48) * 4 + *(int *)(param_1 + 0x18)));
          if (iVar4 == 0) goto LAB_82969820;
        }
      } while (iVar4 == 0);
    }
  }
  fn_82965618(param_1,param_2 + 0x14,param_2 + 0x18,*(unsigned int *)(param_3 + 0x14),
                *(unsigned int *)(param_3 + 0x18));
  return;
}

