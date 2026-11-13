extern int fn_82E50F00();
extern int fn_82E51028();


int fn_82E52428(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int iVar7;
  
  iVar7 = 0;
  fn_82E50F00(param_1 + 4,1);
  uVar3 = 0;
  if (*(unsigned int *)(param_1 + 0x48) != 0) {
    iVar4 = 0;
    do {
      pbVar5 = (unsigned char *)(iVar4 + *(int *)(param_1 + 0x40));
      pbVar6 = param_2;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != param_2 + 0x10);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        iVar7 = uVar3 * 0x20 + *(int *)(param_1 + 0x40) + 0x10;
        break;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x48));
  }
  fn_82E51028(param_1 + 4,1);
  return iVar7;
}

