extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8232DEA0();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


unsigned int *
fn_82326D40(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int *puVar1;
  unsigned char auStack_90 [64];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xd8);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (unsigned int *)0x0) {
      fn_82230110(auStack_90,param_5);
      fn_8232DEA0(puVar1 + 4,param_2,param_3,param_4,auStack_90,*param_6,*param_7,*param_8);
      fn_82230300(auStack_90,1,0);
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 4;
  return param_1;
}

