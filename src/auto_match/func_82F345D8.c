extern int fn_82E2D118();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537C8;
extern unsigned int lbl_821537D8;


__int64 fn_82F345D8(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int *apiStack_30 [12];
  
  apiStack_30[0] = (int *)0x0;
  if (param_2 == (unsigned char *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      lVar4 = -0x3ff2c94a;
      goto LAB_82f34740;
    }
    lVar4 = (**(int (***)())(*(int *)**(unsigned int **)(param_1 + 0xc) + 0x84))
                      ((int *)**(unsigned int **)(param_1 + 0xc),param_2);
    pbVar6 = &lbl_821537C8;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != &lbl_821537D8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82f34740;
    uVar3 = **(unsigned int **)(param_1 + 0xc);
  }
  else {
    *(unsigned int *)param_2 = lbl_8202E618;
    *(unsigned int *)(param_2 + 4) = lbl_8202E61C;
    *(unsigned int *)(param_2 + 8) = lbl_8202E620;
    *(unsigned int *)(param_2 + 0xc) = lbl_8202E624;
    lVar4 = (**(int (***)())(**(int **)(param_1 + 4) + 0x84))(*(int **)(param_1 + 4),param_2);
    pbVar6 = &lbl_821537C8;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != &lbl_821537D8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_82f34740;
    uVar3 = *(unsigned int *)(param_1 + 4);
  }
  lVar4 = fn_82E2D118(uVar3,apiStack_30);
  if (-1 < lVar4) {
    lVar4 = (**(int (***)())(*apiStack_30[0] + 0x84))(apiStack_30[0],param_2);
  }
LAB_82f34740:
  if (apiStack_30[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_30[0] + 8))(apiStack_30[0]);
  }
  return lVar4;
}

