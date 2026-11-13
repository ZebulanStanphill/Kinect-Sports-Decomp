#define true 1
extern int fn_82BBFFC8();
extern int fn_82BC0088();


void fn_82BC6018(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar4 = 0;
  iVar6 = 0;
  for (uVar5 = 1; uVar5 <= *(unsigned int *)(iVar1 + 4); uVar5 = uVar5 + 1) {
    if (*(int *)(*(int *)(iVar1 + 8) + iVar6) == param_2) {
      if (uVar4 < *(unsigned int *)(iVar1 + 4)) {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + uVar4 * 4);
      }
      else {
        piVar2 = (int *)fn_82BC0088();
      }
      *piVar2 = param_3;
      break;
    }
    uVar4 = uVar4 + 1;
    iVar6 = iVar6 + 4;
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  lVar3 = 0;
  iVar6 = 0;
  uVar4 = 1;
  do {
    if (*(unsigned int *)(iVar1 + 4) < uVar4) {
LAB_82bc6100:
      piVar2 = (int *)fn_82BC0088(*(int *)(param_3 + 0x3c),
                                        *(unsigned int *)(*(int *)(param_3 + 0x3c) + 4));
      *piVar2 = param_1;
      return;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + iVar6) == param_1) {
      fn_82BBFFC8(iVar1,lVar3);
      goto LAB_82bc6100;
    }
    lVar3 = lVar3 + 1;
    uVar4 = uVar4 + 1;
    iVar6 = iVar6 + 4;
  } while( true );
}

