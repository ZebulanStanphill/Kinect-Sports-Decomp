extern int fn_82A2A288();
extern int fn_82A3F758();
extern int fn_82E4FE08();
extern int fn_82EE0060();
extern int fn_82F64CE0();


unsigned __int64 fn_82E7F520(short *param_1,short param_2,char *param_3)

{
  char cVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  int iVar4;
  char *pcVar5;
  unsigned __int64 uVar6;
  
  *param_1 = param_2;
  uVar6 = 0;
  pcVar5 = param_3;
  if (param_2 == 0x1e) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = (int)pcVar5 - (int)param_3 & 0x7fffffff;
    puVar3 = (unsigned short *)fn_82E4FE08(uVar2);
    *(unsigned short **)(param_1 + 4) = puVar3;
    if (puVar3 != (unsigned short *)0x0) {
      *puVar3 = 0;
      goto LAB_82e7f5c4;
    }
LAB_82e7f584:
    uVar6 = 0xffffffff8007000e;
  }
  else {
    if ((param_2 != 0x1f) && (param_2 != 8)) {
      return 0xffffffff80070057;
    }
    iVar4 = fn_82F64CE0(param_3);
    uVar2 = iVar4 + 1U & 0x7fffffff;
LAB_82e7f5c4:
    if ((param_2 == 0x1e) || (param_2 == 0x1f)) {
      puVar3 = (unsigned short *)fn_82E4FE08(uVar2);
      *(unsigned short **)(param_1 + 4) = puVar3;
      if (puVar3 == (unsigned short *)0x0) goto LAB_82e7f584;
      *puVar3 = 0;
    }
    if (param_2 == 0x1e) {
      *param_1 = 0x1f;
      iVar4 = fn_82A2A288(0,0,param_3,0xffffffffffffffff,*(unsigned int *)(param_1 + 4),uVar2);
      if (iVar4 == 0) {
        uVar6 = thunk_FUN_82a2b798();
        if (0 < (int)uVar6) {
          uVar6 = uVar6 & 0xffff | 0x80070000;
        }
        if (-1 < (int)uVar6) {
          uVar6 = 0xffffffff8000ffff;
        }
      }
    }
    else if (param_2 == 0x1f) {
      if (uVar2 < 0x80000000) {
        uVar6 = fn_82A3F758(*(unsigned int *)(param_1 + 4),uVar2,param_3);
      }
      else {
        uVar6 = 0xffffffff80070057;
      }
    }
    else {
      iVar4 = fn_82EE0060(param_3);
      *(int *)(param_1 + 4) = iVar4;
      if ((iVar4 == 0) && (uVar6 = thunk_FUN_82a2b798(), 0 < (int)uVar6)) {
        uVar6 = uVar6 & 0xffff | 0x80070000;
      }
    }
  }
  return uVar6;
}

