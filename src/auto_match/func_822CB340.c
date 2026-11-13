extern int fn_8223C680();
extern int fn_82243988();
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_828996C8();
extern int fn_8289AC08();
extern int fn_8289D8D0();
extern int fn_828A1318();
extern int fn_82BA02A8();


void fn_822CB340(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  int iVar8;
  int iVar9;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
  }
  if (iVar3 == 0) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))();
    }
    if (iVar3 == 0) {
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))();
      }
      if (iVar3 == 0) {
        return;
      }
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))();
      }
      fn_8289D8D0(*(unsigned int *)(param_1 + 0x28));
      iVar4 = fn_8240D928();
      iVar9 = iVar3 + 8;
      iVar8 = (iVar4 + 2) * 4;
      pbVar6 = (unsigned char *)(iVar8 + iVar9);
      if (4 < *(unsigned int *)(iVar3 + 0x20)) {
        pbVar6 = *(unsigned char **)(iVar8 + iVar9);
      }
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != param_2 + 8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        return;
      }
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_82243988(iVar9,iVar4,param_2);
    }
    else {
      pbVar6 = (unsigned char *)(param_1 + 0xc);
      if (4 < *(unsigned int *)(param_1 + 0x10)) {
        pbVar6 = *(unsigned char **)(param_1 + 0xc);
      }
      pbVar7 = param_2;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar6;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (pbVar7 != param_2 + 8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        return;
      }
      fn_8289AC08(param_1,1,0,1,0);
      fn_82BA02A8(param_1);
      fn_8223C680(param_1 + 4,0,param_2);
    }
    fn_8289AC08(param_1,1,1,1,0);
    cVar5 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
    if (cVar5 != '\0') {
      return;
    }
  }
  else {
    pbVar6 = (unsigned char *)(param_1 + 0xc);
    if (4 < *(unsigned int *)(param_1 + 0x10)) {
      pbVar6 = *(unsigned char **)(param_1 + 0xc);
    }
    pbVar7 = param_2;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != param_2 + 8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      return;
    }
    fn_8289AC08(param_1,1,0,1,0);
    fn_82BA02A8(param_1);
    fn_8223C680(param_1 + 4,0,param_2);
    fn_8289AC08(param_1,1,1,1,0);
    cVar5 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
    if (cVar5 != '\0') {
      fn_828996C8(param_1,0xffffffffffffffff);
      return;
    }
  }
  fn_828A1318(*(unsigned int *)(param_1 + 0x28),param_1);
  return;
}

