extern unsigned int *auStack_30;
extern int fn_8223A630();
extern int fn_8223A738();
extern int fn_828CB590();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned int * fn_828CB7A8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned char auStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  char cStack_24;
  
  auStack_30 = 0;
  uStack_2c = 0;
  fn_828CB590(&uStack_28,param_2,param_3,param_2,&auStack_30,0);
  if (cStack_24 == '\0') {
    *(unsigned char *)(param_1 + 1) = 0;
    *param_1 = uStack_28;
  }
  else {
    fn_8223A738(param_2,param_3,&auStack_30);
    fn_8223A630(param_2,param_3);
    *param_1 = (int)param_3;
    *(unsigned char *)(param_1 + 1) = 1;
  }
  return param_1;
}

