extern int fn_82231540();
extern int fn_828B6DD0();
extern unsigned int uStack_30;


unsigned int * fn_828B7DC0(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char uStack_30;
  
  uVar1 = *param_3;
  fn_828B6DD0((unsigned __int64)uVar1 + 8,*(unsigned int *)(param_2 + 8),(unsigned __int64)uVar1,uStack_30);
  fn_82231540((unsigned __int64)*(unsigned int *)(param_2 + 8) - 8,(unsigned __int64)*(unsigned int *)(param_2 + 8),
                    param_2 + 0x10,uStack_30);
  iVar2 = *(int *)(param_2 + 8);
  *param_1 = uVar1;
  *(int *)(param_2 + 8) = iVar2 + -8;
  return param_1;
}

