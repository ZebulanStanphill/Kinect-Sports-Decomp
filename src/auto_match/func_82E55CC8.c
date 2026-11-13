extern int fn_82E50CB8();
extern int fn_82E50F10();
extern unsigned int lbl_82153858;
extern unsigned int lbl_82153868;
extern unsigned int lbl_82153878;


unsigned __int64 fn_82E55CC8(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  
  pbVar4 = (unsigned char *)&lbl_82153858;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != &lbl_82153868);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    pbVar4 = &lbl_82153868;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != &lbl_82153878);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      return 0xffffffff80070057;
    }
  }
  fn_82E50CB8(param_1 + 8);
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)param_2;
  *(unsigned int *)(param_1 + 0x48) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_2 + 0xc);
  fn_82E50F10(param_1 + 8);
  return 0;
}

