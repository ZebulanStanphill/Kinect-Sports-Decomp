extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_828C0148();
extern int fn_828C0E18();
extern int fn_828C1040();


int fn_828C1398(int param_1,unsigned __int64 *param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int auStack_40 [4];
  unsigned __int64 auStack_30 [6];
  
  uVar2 = fn_828C0148();
  if ((uVar2 == *(unsigned int *)(param_1 + 4)) || (*param_2 < *(unsigned __int64 *)(uVar2 + 0x10))) {
    auStack_30[0] = *param_2;
    auStack_30[1] = 0;
    uVar1 = fn_828C1040(param_1,auStack_30);
    fn_828C0E18(auStack_40,param_1,uVar2,uVar1);
    uVar2 = auStack_40[0];
  }
  return uVar2 + 0x18;
}

