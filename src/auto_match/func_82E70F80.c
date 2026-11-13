extern int fn_82E6FE08();
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C040;


unsigned __int64 fn_82E70F80(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  pbVar5 = &lbl_8214C030;
  pbVar4 = (unsigned char *)(param_1 + 0xc);
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != &lbl_8214C040);
  if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) || (param_2 != 0)) {
    if (*(__int64 *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        uVar3 = 0xffffffffc00d36bb;
      }
      else {
        uVar3 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x54))();
        if (-1 < (int)uVar3) {
          uVar3 = fn_82E6FE08(param_1);
        }
      }
    }
    else {
      uVar3 = 0xffffffffc00d4650;
    }
  }
  else {
    uVar3 = 0xffffffff80070057;
  }
  return uVar3;
}

