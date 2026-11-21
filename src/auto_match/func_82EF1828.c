extern unsigned int lbl_8202F1FC;
extern unsigned int lbl_8215443C;
extern unsigned int lbl_8216309C;

unsigned __int64 fn_82EF1828(int param_1,unsigned char *param_2,int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int *piVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  piVar3 = (int *)(param_1 + -4);
  pbVar4 = &lbl_8216309C;
  pbVar5 = param_2;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != param_2 + 0x10);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    pbVar4 = &lbl_8202F1FC;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != param_2 + 0x10);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar4 = &lbl_8215443C;
      pbVar5 = param_2 + 0x10;
      do {
        bVar1 = *param_2;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        param_2 = param_2 + 1;
        pbVar4 = pbVar4 + 1;
      } while (param_2 != pbVar5);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        *param_3 = 0;
        return 0xffffffff80004002;
      }
      if (piVar3 == (int *)0x0) {
        param_1 = 0;
      }
      *param_3 = param_1;
      goto LAB_82ef0f64;
    }
  }
  *param_3 = (int)piVar3;
LAB_82ef0f64:
  (**(int (***)())(*piVar3 + 4))();
  return 0;
}
