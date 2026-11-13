extern int fn_82FB8288();
extern int fn_82FB9358();
extern int fn_82FB95B0();
extern int fn_8300CBD0();
extern int fn_8300CC40();
extern int fn_8300CCD0();
extern int fn_8300CD08();


void fn_82FB8558(int param_1,int param_2,unsigned __int64 param_3,int *param_4,int param_5)

{
  unsigned short uVar1;
  char cVar3;
  unsigned short *puVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  if (((*(unsigned short *)(param_1 + 0x28) & 0x8000) != 0) && (param_5 == *(int *)(param_2 + 0x20))) {
    fn_82FB8288(param_1,param_2,param_5);
  }
  if (*(char *)(param_2 + 0x25) == '\0') {
    cVar3 = fn_8300CC40(param_5,param_3);
    if (cVar3 == '\0') {
      fn_8300CBD0(param_5,param_3);
      *(short *)(param_5 + 0x16) = *(short *)(param_5 + 0x16) + -1;
    }
    if (*(short *)(param_2 + 0x28) == 0) {
      return;
    }
    puVar6 = (unsigned int *)(param_5 + 0x18);
    *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + -1;
    puVar2 = (unsigned short *)fn_82FB95B0(puVar6);
    if (puVar2 != (unsigned short *)0x0) {
      *puVar2 = (short)param_3;
      fn_8300CCD0(param_5,param_3);
      *(unsigned int *)(param_5 + 0x10) =
           *(int *)(param_5 + 0x10) -
           (unsigned int)*(unsigned short *)
                  (*(int *)(((unsigned int)((param_3 & 0xffffffff) << 2) & 0x3fffc) + *param_4) + 0xe);
      uVar5 = (param_4[1] - *param_4 >> 2) + 0xffffU & 0xffff;
      uVar4 = (unsigned int)*(unsigned short *)(param_2 + 0x28);
      if (uVar5 <= *(unsigned short *)(param_2 + 0x28)) {
        uVar4 = uVar5;
      }
      if ((unsigned int)(*(int *)(param_5 + 0x1c) - (int)*puVar6 >> 1) <= uVar4) {
        return;
      }
      uVar1 = *(unsigned short *)*puVar6;
      fn_8300CD08(param_5,uVar1);
      uVar1 = *(unsigned short *)(*(int *)((unsigned int)uVar1 * 4 + *param_4) + 0xe);
      *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + 1;
      *(unsigned int *)(param_5 + 0x10) = (unsigned int)uVar1 + *(int *)(param_5 + 0x10);
      fn_82FB9358(puVar6,0);
      return;
    }
  }
  else {
    uVar5 = (unsigned int)*(unsigned short *)(param_2 + 0x28);
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    uVar1 = *(unsigned short *)(*(int *)(((unsigned int)((param_3 & 0xffffffff) << 2) & 0x3fffc) + *param_4) + 0xe);
    *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + -1;
    *(short *)(param_5 + 0x16) = *(short *)(param_5 + 0x16) + -1;
    *(unsigned int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) - (unsigned int)uVar1;
    fn_8300CBD0(param_5,param_3);
    puVar6 = (unsigned int *)(param_5 + 0x18);
    puVar2 = (unsigned short *)fn_82FB95B0(puVar6);
    if (puVar2 != (unsigned short *)0x0) {
      *puVar2 = (short)param_3;
      fn_8300CCD0(param_5,param_3);
      uVar4 = (param_4[1] - *param_4 >> 2) + 0xffffU & 0xffff;
      if (uVar5 < uVar4) {
        uVar4 = uVar5;
      }
      if ((unsigned int)(*(int *)(param_5 + 0x1c) - (int)*puVar6 >> 1) <= uVar4) {
        return;
      }
      uVar1 = *(unsigned short *)*puVar6;
      fn_82FB9358(puVar6,0);
      fn_8300CD08(param_5,uVar1);
      cVar3 = fn_8300CC40(param_5,uVar1);
      if (cVar3 != '\0') {
        return;
      }
      uVar1 = *(unsigned short *)(*(int *)((unsigned int)uVar1 * 4 + *param_4) + 0xe);
      *(short *)(param_5 + 0x14) = *(short *)(param_5 + 0x14) + 1;
      *(unsigned int *)(param_5 + 0x10) = (unsigned int)uVar1 + *(int *)(param_5 + 0x10);
      return;
    }
  }
  *(unsigned short *)(param_5 + 0x16) = 0;
  return;
}

