extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB670();
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;


unsigned int *
fn_82333E80(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6)

{
  unsigned int *puVar1;
  unsigned char auStack_80 [64];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x88);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821AD588;
    puVar1[2] = 1;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      fn_82230110(auStack_80,param_5);
      fn_822FB670(puVar1 + 3,param_2,param_3,param_4,auStack_80,*param_6);
      fn_82230300(auStack_80,1,0);
    }
  }
  param_1[1] = puVar1;
  *param_1 = puVar1 + 3;
  return param_1;
}

