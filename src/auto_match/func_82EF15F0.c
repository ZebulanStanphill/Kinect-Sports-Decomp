extern unsigned int lbl_8202F1FC;
extern unsigned int lbl_8202F20C;
extern unsigned int lbl_8216309C;
extern unsigned int lbl_821630AC;


unsigned __int64 fn_82EF15F0(int *param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  if (param_3 == (unsigned int *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar3 = 0;
    pbVar4 = &lbl_8202F1FC;
    *param_3 = 0;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar4 != &lbl_8202F20C);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar5 = &lbl_8216309C;
      do {
        bVar1 = *pbVar5;
        bVar2 = *param_2;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        param_2 = param_2 + 1;
      } while (pbVar5 != &lbl_821630AC);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        return 0xffffffff80004002;
      }
    }
    *param_3 = param_1;
    (**(int (***)())(*param_1 + 4))();
  }
  return uVar3;
}

