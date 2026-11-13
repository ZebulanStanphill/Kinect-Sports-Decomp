extern unsigned int lbl_8322B22C;


void fn_82BE93D0(unsigned char *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  iVar3 = lbl_8322B22C;
  if (lbl_8322B22C == 0) {
    return;
  }
  if (param_1 == (unsigned char *)0x0) {
    *(unsigned int *)(lbl_8322B22C + 0xa4) = 0;
    *(unsigned int *)(iVar3 + 0xa8) = 0;
    *(unsigned int *)(iVar3 + 0xac) = 0;
    return;
  }
  pbVar5 = param_1;
  pbVar4 = (unsigned char *)(lbl_8322B22C + 0xa4);
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != param_1 + 0xc);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    return;
  }
  *(unsigned int *)(lbl_8322B22C + 0xa4) = *(unsigned int *)param_1;
  *(unsigned int *)(iVar3 + 0xa8) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(iVar3 + 0xac) = *(unsigned int *)(param_1 + 8);
  *(unsigned int *)(lbl_8322B22C + 0x134) = 1;
  return;
}

