extern int fn_8268B368();
extern unsigned int lbl_831E7E64;


unsigned int * fn_8268C6F8(unsigned int *param_1,int *param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = fn_8268B368(param_1,lbl_831E7E64,param_3,0);
  *param_1 = uVar1;
  (*(int (**)())(*param_2 + 4))(param_2,(uVar1 & 0xfffffffc) + 8,param_3);
  return param_1;
}

