extern int fn_82EDDF88();
extern int fn_82EDE100();
extern int fn_82EDE388();
extern int fn_82EDE770();
extern int fn_82EDE890();
extern int fn_82EDF9F8();


unsigned __int64 fn_82EDFEC0(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x10);
  iVar2 = *(int *)(param_1[1] + 0x10);
  if ((iVar1 == 0) || (iVar1 == 3)) {
    fn_82EDE100(param_1);
  }
  if ((iVar2 == 0) || (iVar2 == 3)) {
    fn_82EDDF88(param_1);
  }
  if (((iVar1 == 0) && (*(short *)(*param_1 + 0xe) == 8)) ||
     ((iVar2 == 0 && (*(short *)(param_1[1] + 0xe) == 8)))) {
    fn_82EDE388(param_1);
  }
  uVar3 = fn_82EDE770(param_1[1],param_1);
  if ((int)uVar3 == 0) {
    param_1[0x17] = param_1[0x1b] << 0x10 | param_1[0x1b];
    param_1[0x18] = param_1[0x1c];
    param_1[0x1a] = param_1[0x1e];
    param_1[0x19] = param_1[0x1d] << 0x10 | param_1[0x1d];
    uVar3 = fn_82EDE770(*param_1);
    if (((int)uVar3 == 0) && (uVar3 = fn_82EDE890(param_1), (int)uVar3 == 0)) {
      fn_82EDF9F8(param_1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

