extern unsigned int lbl_8202F1FC;
extern unsigned int lbl_8214C740;
extern unsigned int lbl_82154C48;


unsigned __int64 fn_82F3D130(int *param_1,unsigned char *param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  int *piVar5;
  
  pbVar3 = &lbl_82154C48;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar2 = *pbVar3;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
  } while (pbVar4 != param_2 + 0x10);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    pbVar3 = &lbl_8214C740;
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != param_2 + 0x10);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      piVar5 = param_1 + 1;
      if (param_1 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      *param_3 = piVar5;
      goto LAB_82f3d200;
    }
    pbVar3 = &lbl_8202F1FC;
    pbVar4 = param_2 + 0x10;
    do {
      bVar1 = *param_2;
      bVar2 = *pbVar3;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      param_2 = param_2 + 1;
      pbVar3 = pbVar3 + 1;
    } while (param_2 != pbVar4);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      *param_3 = 0;
      return 0xffffffff80004002;
    }
  }
  *param_3 = param_1;
LAB_82f3d200:
  (**(int (***)())(*param_1 + 4))();
  return 0;
}

