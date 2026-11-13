extern int fn_822CF008();
extern int fn_822CFA38();
extern int fn_823737B8();
extern unsigned int lbl_82191118;
extern unsigned int lbl_831CD65C;


unsigned __int64 fn_822E0EB0(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if ((((*(int *)(iVar3 + 0x2ac) != 0) && (*(float *)(iVar3 + 0x2a8) < lbl_82191118)) ||
      (iVar2 = fn_823737B8(*(unsigned int *)(param_1 + 0x10),*(int *)(iVar3 + 0x2c) == 0),
      iVar2 != 0)) || (iVar3 = fn_822CF008((double)lbl_831CD65C,iVar3), iVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_822CFA38(*(unsigned int *)(param_1 + 0x14),9);
  }
  return uVar1;
}

