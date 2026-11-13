#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_82248B90();
extern int fn_8224EEE0();
extern int fn_825ACF50();
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned int * fn_8224ED20(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uStack00000024;
  unsigned char auStack_30 [48];
  
  uStack00000024 = (unsigned int)param_3;
  if (((param_3 & 0xffffffff) == (unsigned __int64)**(unsigned int **)(param_2 + 4)) &&
     (param_4 == *(unsigned int **)(param_2 + 4))) {
    fn_8224EEE0(param_2);
    *param_1 = **(unsigned int **)(param_2 + 4);
  }
  else {
    while ((param_3 & 0xffffffff) != ZEXT48(param_4)) {
      fn_82248B90(&stack0x00000024);
      fn_825ACF50(auStack_30,param_2,param_3);
      param_3 = (unsigned __int64)uStack00000024;
    }
    *param_1 = (int)param_3;
  }
  return param_1;
}

