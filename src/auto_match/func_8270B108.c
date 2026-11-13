extern unsigned int *auStack_30;
extern int fn_8268E898();
extern unsigned int uStack_20;
extern unsigned int uStack_28;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int *
fn_8270B108(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned int param_5)

{
  unsigned char auStack_30 [8];
  unsigned __int64 uStack_28;
  unsigned __int64 uStack_20;
  
  *param_1 = param_2;
  param_1[2] = param_5;
  param_1[1] = param_4;
  param_1[4] = 0;
  param_1[3] = (int)(((unsigned __int64)param_5 - 0x20 & 0xffffffff) >> 5);
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 7;
  param_1[8] = param_1 + 7;
  param_1[10] = param_1 + 9;
  param_1[0xb] = param_1 + 9;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  fn_8268E898(param_1 + 0x13,param_3);
  uStack_28 = 0;
  uStack_20 = 0;
  (*(int (**)())**(unsigned int **)*param_1)((unsigned int *)*param_1,auStack_30);
  uStack_28 = uStack_28 >> 0x20;
  if (uStack_28 < 0x1000) {
    uStack_28 = 0x1000;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[4] = 1;
  param_1[5] = 0x80000000;
  trapWord(6,uStack_28,0);
  *(unsigned char *)(param_1 + 6) = (((unsigned __int64)(uStack_20) >> 32) & 0xFF);
  param_1[1] = (int)((((unsigned int)param_1[1] + uStack_28) - 1 & 0xffffffff) / uStack_28) * (int)uStack_28
  ;
  return param_1;
}

