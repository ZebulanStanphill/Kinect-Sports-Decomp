extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();


void fn_824A1078(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_50 [4];
  unsigned char auStack_40 [48];
  
  iVar1 = *(int *)((param_2 + 1) * 8 + param_1);
  if ((iVar1 == param_3) || (iVar1 == 0)) {
    if (param_4 == 0) {
      if (param_5 == 0) {
        return;
      }
      fn_828648F0(auStack_40,0xffffffff83292a0c);
      uVar2 = fn_828647D8();
      auStack_50[0] = *(unsigned int *)(param_1 + 0x1c);
    }
    else {
      if (param_5 != 0) {
        return;
      }
      fn_828648F0(auStack_40,0xffffffff83292a0c);
      uVar2 = fn_828647D8();
      auStack_50[0] = *(unsigned int *)(param_1 + 0x18);
    }
    auStack_50[0] = fn_82535298(auStack_50,uVar2,0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82864898(auStack_40);
    fn_82536288(auStack_50);
  }
  return;
}

