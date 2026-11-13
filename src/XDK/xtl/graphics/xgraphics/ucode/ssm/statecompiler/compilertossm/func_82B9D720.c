extern int fn_82AB71F0();
extern unsigned int lbl_8316E4B0;


unsigned __int64
fn_82B9D720(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,int (**param_6)(),unsigned __int64 param_7)

{
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  
  uVar2 = fn_82AB71F0(param_1,0x52,param_2);
  uVar3 = fn_82AB71F0(param_1,0x53,param_2);
  uVar1 = fn_82AB71F0(param_1,0x54,param_2);
  *param_3 = uVar2;
  *param_4 = uVar3;
  *param_5 = (int)uVar1;
  if ((param_6 != (int (**)())0x0) && ((param_7 & 0xffffffff) != 0)) {
    (*param_6)(param_7,0xffffffff820ddc34,lbl_8316E4B0,0xc,param_2,*param_3
               ,*param_4,uVar1);
  }
  return 1;
}

