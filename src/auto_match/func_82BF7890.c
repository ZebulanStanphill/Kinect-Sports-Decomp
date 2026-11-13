extern unsigned int *auStack_2c;
extern int fn_82BF72C8();
extern int fn_82BF74D0();
extern int fn_82BF77B8();
extern unsigned int iStack_30;


unsigned __int64 fn_82BF7890(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iStack_30;
  unsigned int auStack_2c;
  
  if (param_1 == 0) {
LAB_82bf78b0:
    uVar1 = 0;
  }
  else {
    iVar2 = fn_82BF74D0(param_1,param_2,&iStack_30,&auStack_2c);
    if (iVar2 == 0) {
      if (((*(int *)(param_1 + 8) == 0) &&
          (iVar2 = fn_82BF72C8(param_1,*(unsigned int *)(param_1 + 0xc),1), iVar2 == 0)) ||
         (iVar2 = fn_82BF77B8(param_1,param_2), iVar2 == 0)) goto LAB_82bf78b0;
      *(unsigned int *)(iVar2 + 0x14) = auStack_2c;
      *(unsigned int *)(iVar2 + 0x10) = *(unsigned int *)(*(int *)(param_1 + 8) + iStack_30 * 4);
      *(int *)(*(int *)(param_1 + 8) + iStack_30 * 4) = iVar2;
    }
    *(unsigned int *)(iVar2 + 0xc) = param_3;
    uVar1 = 1;
  }
  return uVar1;
}

