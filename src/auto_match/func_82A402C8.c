extern int fn_82A40170();
extern unsigned int lbl_82089698;


unsigned __int64 fn_82A402C8(int *param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  if (param_3 == (unsigned int *)0x0) {
    uVar5 = 0xffffffff88960001;
  }
  else {
    *param_3 = 0;
    pbVar4 = &lbl_82089698;
    pbVar3 = param_2 + 0x10;
    do {
      bVar1 = *param_2;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      param_2 = param_2 + 1;
      pbVar4 = pbVar4 + 1;
    } while (param_2 != pbVar3);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      *param_3 = param_1;
      (**(int (***)())(*param_1 + 4))();
    }
    else {
      uVar5 = fn_82A40170(param_1 + 2);
    }
  }
  return uVar5;
}

