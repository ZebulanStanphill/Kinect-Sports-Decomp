extern int fn_8270AA18();
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


unsigned int * fn_82691080(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  fn_8270AA18(param_1 + 4,4);
  param_1[0x6a] = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (*(int (**)())**(unsigned int **)*param_1)((unsigned int *)*param_1,&uStack_30);
  uStack_28 = uStack_28 >> 0x20;
  if (uStack_28 < 0x1000) {
    uStack_28 = 0x1000;
  }
  trapWord(6,uStack_28,0);
  param_1[1] = (int)((((unsigned int)param_1[1] + uStack_28) - 1 & 0xffffffff) / uStack_28) * (int)uStack_28
  ;
  return param_1;
}

