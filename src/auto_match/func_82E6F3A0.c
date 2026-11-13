extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


__int64 fn_82E6F3A0(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char abStack_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_2c = param_1[4];
  iStack_28 = param_1[5];
  iStack_24 = param_1[6];
  pbVar6 = (unsigned char *)&lbl_8202E618;
  pbVar5 = abStack_30;
  do {
    bVar1 = *pbVar6;
    bVar2 = *pbVar5;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar6 != &lbl_8202E628);
  if (((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) ||
       (lVar3 = (**(int (***)())(*param_1 + 0x2c))(param_1,*(unsigned __int64 *)(param_1 + 0x12)),
       -1 < (int)lVar3)) && (lVar3 = (**(int (***)())(*param_1 + 0x14))(param_1), -1 < lVar3)) &&
     (iVar4 = (**(int (***)())(*param_1 + 0x20))(param_1), iVar4 != 0)) {
    lVar3 = ((int (*)())fn_82E6F3A0)();
  }
  return lVar3;
}

