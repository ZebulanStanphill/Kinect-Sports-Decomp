typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C10F40();


unsigned __int64 fn_82C112A8(int param_1,unsigned __int64 *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int aiStack_40;
  
  *param_2 = 0;
  aiStack_40 = 0;
  bVar2 = false;
  bVar3 = false;
  uVar4 = fn_82C10F40(*(unsigned int *)(param_1 + 0x48),*(unsigned char *)(param_1 + 0x10),&aiStack_40);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (*(int *)(aiStack_40 + 0x18) == 0) {
    return 0xffffffff8050000b;
  }
  iVar5 = *(int *)(aiStack_40 + 0x18);
  if (iVar5 == 0) {
LAB_82c113a4:
    *param_2 = *(unsigned __int64 *)(param_1 + 0x38);
LAB_82c113ac:
    uVar4 = (**(int (***)())(*(int *)(param_1 + 4) + 0x14))(*(int *)(param_1 + 4),param_2);
    if (-1 < (int)uVar4) {
      *(unsigned __int64 *)(param_1 + 0x38) = *param_2;
    }
  }
  else {
    do {
      iVar1 = *(int *)(iVar5 + 0x34);
      if (((*(int *)(iVar5 + 0x30) == 0) && (*(int *)(iVar5 + 0xc) == 0)) && (!bVar2)) {
        bVar2 = true;
        *param_2 = *(unsigned __int64 *)(iVar5 + 0x20);
      }
      if (((*(int *)(iVar5 + 0x30) == 0) &&
          (*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0xc) == *(int *)(iVar5 + 0x10))) && (bVar2)) {
        bVar3 = true;
        break;
      }
      iVar5 = *(int *)(iVar5 + 0x3c);
    } while (iVar5 != 0);
    if (bVar2) {
      if (bVar3) goto LAB_82c113ac;
    }
    else if ((bVar3) || (iVar1 == 0)) goto LAB_82c113a4;
    *param_2 = 0;
    uVar4 = 0xffffffff8050000b;
  }
  return uVar4;
}

