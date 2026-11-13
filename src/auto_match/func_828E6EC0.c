extern unsigned int fn_823AA970(int);
extern unsigned int fn_8240D928(int);
extern int fn_828CCCC0();
extern int fn_828DF3D0();
extern unsigned int fn_828DF8D0(unsigned int,unsigned int);
extern unsigned int lbl_82027454;


unsigned int * fn_828E6EC0(unsigned int *param_1,unsigned int param_2,int *param_3)

{
  unsigned int *sub;
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = *param_3;
  uVar2 = *(unsigned int *)(iVar1 + 4);
  uVar3 = fn_8240D928(iVar1);
  uVar4 = fn_823AA970(iVar1);
  uVar3 = fn_828DF8D0(uVar4,uVar3);
  fn_828DF3D0(param_1,param_2,uVar3,uVar2);
  *param_1 = &lbl_82027454;
  sub = param_1 + 4;
  sub[0] = 0;
  sub[1] = 0;
  fn_828CCCC0(sub,*param_3,param_3[1],0);
  return param_1;
}

