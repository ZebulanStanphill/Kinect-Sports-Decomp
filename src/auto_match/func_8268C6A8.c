extern int fn_8268B368();
extern void *memcpy(void *, const void *, unsigned int);
extern unsigned int lbl_831E7E64;


unsigned int * fn_8268C6A8(unsigned int *param_1,const void *param_2,unsigned int param_3)

{
  int lVar1;
  
  lVar1 = fn_8268B368(param_1,lbl_831E7E64,param_3,0);
  memcpy((void *)(lVar1 + 8),param_2,param_3);
  *param_1 = (int)lVar1;
  return param_1;
}

