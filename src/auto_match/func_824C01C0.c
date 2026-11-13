extern int fn_822315A0();
extern int fn_824C02A8();
extern int fn_824C04E0();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_828A9B18();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;
extern unsigned int lbl_821C06A0;
extern unsigned int lbl_83297810;
extern unsigned int uStack_28;


unsigned int * fn_824C01C0(unsigned int *param_1,int param_2,__int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iStack_30;
  int iStack_2c;
  unsigned int uStack_28;
  
  uVar2 = (unsigned __int64)lbl_83297810;
  if (uVar2 == 0) {
    uVar2 = fn_82511928();
  }
  fn_825138E0(&iStack_30,uVar2,1);
  if ((iStack_30 == 0) ||
     (iVar1 = fn_828A9B18(*(unsigned int *)(iStack_30 + 8),param_3 + 8), iVar1 == 0)) {
    fn_824C04E0(param_2,2);
    iVar1 = *(int *)(param_2 + 0x48);
    *(unsigned int *)(param_2 + 0x48) = 0;
    *(unsigned int *)(param_2 + 0x44) = 0;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (param_1 != (unsigned int *)0x0) {
      *param_1 = &lbl_821C06A0;
      param_1[1] = fn_824C02A8;
      param_1[2] = param_2;
      param_1[3] = uStack_28;
    }
    param_1[4] = param_1;
  }
  else {
    param_1[4] = 0;
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return param_1;
}

