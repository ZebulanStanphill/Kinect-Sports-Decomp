extern unsigned int lbl_8202F1FC;


unsigned __int64 fn_82A40170(int *param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  pbVar5 = &lbl_8202F1FC;
  pbVar4 = param_2 + 0x10;
  do {
    bVar1 = *param_2;
    bVar2 = *pbVar5;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  } while (param_2 != pbVar4);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    *param_3 = param_1;
    (**(int (***)())(*param_1 + 4))();
    uVar3 = 0;
  }
  else {
    *param_3 = 0;
    uVar3 = 0xffffffff80004002;
  }
  return uVar3;
}

