extern int fn_82F66FC8();
extern int fn_82F66FD0();
extern int fn_82F70028();


unsigned __int64 fn_82E442E0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  if (param_2 == (unsigned int *)0x0) {
    uVar3 = 0x80070057;
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    if (uVar1 < (unsigned int)param_1[2]) {
      do {
        uVar4 = uVar5;
        uVar5 = (unsigned int)*(unsigned short *)param_1[1];
        iVar2 = fn_82F66FD0(uVar5);
        if (iVar2 == 0) {
          iVar2 = fn_82F66FC8(uVar5);
          if (iVar2 == 0) break;
          uVar5 = fn_82F70028(uVar5);
          uVar5 = (uVar5 & 0xffff) - 0x37;
        }
        else {
          uVar5 = uVar5 - 0x30;
        }
        if (param_3 <= uVar5) break;
        uVar5 = uVar4 * param_3 + uVar5;
        if (uVar5 < uVar4) {
          param_1[1] = uVar1;
          uVar3 = 0x80070216;
          goto LAB_82e44314;
        }
        iVar2 = param_1[1];
        param_1[1] = iVar2 + 2U;
        uVar4 = uVar5;
      } while (iVar2 + 2U < (unsigned int)param_1[2]);
    }
    if (uVar1 != param_1[1]) {
      *param_2 = uVar4;
      return 1;
    }
    uVar3 = 0x80004005;
  }
LAB_82e44314:
  *param_1 = uVar3;
  return 0;
}

