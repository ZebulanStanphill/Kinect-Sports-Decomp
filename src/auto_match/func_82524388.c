extern int fn_82524770();
extern int fn_825260E0();
extern int fn_8265C940();
extern int fn_82A1F198();
extern int fn_82A81CC0();
extern int fn_82A82160();
extern int fn_82A821B0();
extern unsigned int lbl_832767EC;
extern unsigned int uStack_30;


unsigned __int64 fn_82524388(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  char cVar5;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned int uStack_30;
  int aiStack_2c;

  if (*(int *)(param_1 + 0x9c8) == 0) {
    iVar3 = param_1 + 0x1e0;
    if (*(int *)(param_1 + 0x9b4) != 1) {
      iVar3 = param_1 + 0x5c8;
    }
    iVar3 = fn_825260E0(iVar3,param_1 + 0xa18,param_1 + 0xa1c);
    if (iVar3 != 0) {
      *(unsigned int *)(param_1 + 0xa20) = 1;
      fn_82524770(param_1);
      return 0;
    }
  }
  if (((*(int *)(param_1 + 0x9b4) == 1) && (*(int *)(param_1 + 0x9cc) != 0)) &&
     (*(int *)(param_1 + 0x9f0) != 0)) {
    cVar5 = fn_82A81CC0(param_1 + 0x1e0);
    if (cVar5 == '\x01') {
      uVar1 = *(unsigned int *)(param_1 + 0x9e8);
      uVar6 = *(unsigned int *)(param_1 + 0x9ec);
    }
    else {
      uVar1 = *(unsigned int *)(param_1 + 0xa0c);
      uVar6 = *(unsigned int *)(param_1 + 0xa10);
    }
    uVar6 = ~uVar1 & 0x93f | uVar6;
  }
  else {
    uVar6 = 0xfff;
  }
  uVar2 = fn_82A82160(uVar6 & 0xffff,&uStack_30,&aiStack_2c);
  if (-1 < (int)uVar2) {
    uVar4 = fn_8265C940(uStack_30,0x21006000);
    *(unsigned int *)(param_1 + 0xa18) = uVar4;
    iVar3 = fn_82A1F198(aiStack_2c + 0xfffU & 0xfffff000,0xffffffffffffffff,0x1000,4);
    *(int *)(param_1 + 0xa1c) = iVar3;
    if (((lbl_832767EC != 0) && (*(int *)(param_1 + 0xa18) != 0)) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82A821B0(*(int *)(param_1 + 0xa18),0,uStack_30);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}
