extern unsigned int lbl_8318A700;


unsigned __int64 fn_82EEABD0(unsigned int param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  uVar3 = 0;
  if (param_3 == (unsigned int *)0x0) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    pbVar4 = param_2 + 0x10;
    pbVar5 = &lbl_8318A700;
    do {
      bVar1 = *param_2;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      param_2 = param_2 + 1;
      pbVar5 = pbVar5 + 1;
    } while (param_2 != pbVar4);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      *param_3 = param_1;
    }
    else {
      uVar3 = 0xffffffff80004002;
      *param_3 = 0;
    }
  }
  return uVar3;
}

