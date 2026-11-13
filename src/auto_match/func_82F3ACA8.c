extern unsigned int *auStack_100;
extern int fn_82EE3128();
extern int fn_82F3A1D0();
extern int fn_82F3A818();
extern unsigned int lbl_82162C1C;


unsigned int fn_82F3ACA8(int param_1,int param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned char auStack_100 [232];
  
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = *(unsigned int *)(param_1 + 0x1220);
  }
  uVar1 = fn_82F3A1D0(auStack_100,param_2);
  uVar2 = fn_82F3A818(param_1,*(unsigned int *)(param_1 + 0x1220),uVar1);
  if (-1 < (int)uVar2) {
    *(int *)(param_1 + 0x1220) = *(int *)(param_1 + 0x1220) + 1;
  }
  *(unsigned char ***)(param_2 + 0x14) = &lbl_82162C1C;
  if (*(int *)(param_2 + 0x18) == 0) {
    fn_82EE3128(param_2 + 0x14,0);
  }
  return uVar2 >> 0x1f ^ 1;
}

