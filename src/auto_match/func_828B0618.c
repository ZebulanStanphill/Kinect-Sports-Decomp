extern int fn_82243988();
extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_828A1318();


void fn_828B0618(int param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  
  if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
     (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 != 0)) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
    }
    iVar4 = fn_8240D928(param_3);
    iVar6 = iVar3 + 0xc;
    if (*(unsigned int *)(iVar3 + 0x24) < 5) {
      pbVar7 = (unsigned char *)((iVar4 + 2) * 4 + iVar6);
    }
    else {
      pbVar7 = *(unsigned char **)((iVar4 + 2) * 4 + iVar6);
    }
    pbVar8 = param_2;
    do {
      bVar1 = *pbVar8;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar8 = pbVar8 + 1;
      pbVar7 = pbVar7 + 1;
    } while (pbVar8 != param_2 + 1);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      fn_82243988(iVar6,iVar4,param_2);
      cVar5 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
      if (cVar5 == '\0') {
        fn_828A1318(*(unsigned int *)(param_1 + 0x28),param_1);
      }
    }
  }
  return;
}

