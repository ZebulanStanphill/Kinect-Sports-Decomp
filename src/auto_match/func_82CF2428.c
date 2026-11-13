extern unsigned int *auStack_20;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CED488();
extern int fn_82CED540();
extern int fn_82CED5B8();
extern unsigned int uStack_1c;


void fn_82CF2428(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  unsigned char auStack_20 [4];
  unsigned int uStack_1c;
  
  fn_82CED488(auStack_20);
  uStack_1c = param_3;
  iVar1 = fn_82CE5410();
  if (*(unsigned int *)(param_1 + 0xc) == (*(unsigned int *)(param_1 + 0x10) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 8),8);
  }
  iVar1 = *(int *)(param_1 + 0xc) * 8 + *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    fn_82CED540(iVar1,auStack_20);
    *(unsigned int *)(iVar1 + 4) = uStack_1c;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  fn_82CED5B8(auStack_20);
  return;
}

