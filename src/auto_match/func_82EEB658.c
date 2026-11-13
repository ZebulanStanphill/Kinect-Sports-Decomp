extern unsigned int *auStack_30;
extern int fn_82EEB288();
extern int fn_82EEB3B8();
extern int fn_82EEB480();


unsigned __int64 fn_82EEB658(unsigned int *param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int auStack_30 [12];
  
  if (param_2 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  if (param_1[9] == 0) {
    return 0xffffffff8007000e;
  }
  uVar4 = param_1[1];
  uVar3 = (unsigned __int64)uVar4;
  puVar2 = param_1 + 1;
  if (uVar3 == 0) {
    auStack_30[0] = *param_1;
    uVar3 = (unsigned __int64)auStack_30[0];
    if (uVar3 == 0) {
      uVar3 = fn_82EEB288(param_1);
      auStack_30[0] = (unsigned int)uVar3;
      if (uVar3 == 0) goto LAB_82eeb708;
      uVar4 = *(int *)(auStack_30[0] + 4) + 1;
      *(unsigned int *)(auStack_30[0] + 4) = uVar4;
      if (uVar4 == param_1[4]) goto LAB_82eeb6d4;
    }
    else {
      *(int *)(auStack_30[0] + 4) = *(int *)(auStack_30[0] + 4) + 1;
      fn_82EEB3B8(param_1,param_1,auStack_30);
      uVar4 = (unsigned int)uVar3;
      if (*(unsigned int *)(uVar4 + 4) == param_1[4]) goto LAB_82eeb6d8;
    }
    uVar4 = (unsigned int)uVar3;
LAB_82eeb6dc:
    fn_82EEB480(param_1,puVar2,auStack_30);
  }
  else {
    iVar1 = *(int *)(uVar4 + 4);
    *(int *)(uVar4 + 4) = iVar1 + 1;
    if (iVar1 + 1U == param_1[4]) {
      auStack_30[0] = uVar4;
      fn_82EEB3B8(param_1,puVar2,auStack_30);
LAB_82eeb6d4:
      uVar4 = (unsigned int)uVar3;
LAB_82eeb6d8:
      puVar2 = param_1 + 2;
      goto LAB_82eeb6dc;
    }
  }
  iVar1 = *(int *)(uVar4 + 8);
  if (iVar1 != 0) {
    *(unsigned int *)(uVar4 + 8) = *(unsigned int *)(iVar1 + 4);
    *(unsigned int *)(iVar1 + 4) = 0;
    *param_2 = iVar1 - param_1[5];
  }
LAB_82eeb708:
  if (*param_2 == 0) {
    return 0xffffffff8007000e;
  }
  return 0;
}

