extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern int fn_8253FDC8();


void fn_8255A1C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned char auStack_30 [4];
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [36];
  
  uVar1 = fn_8253FDC8(param_3,auStack_2c,auStack_30);
  fn_8253FDC8(param_2,uVar1,auStack_28,auStack_24);
  return;
}

