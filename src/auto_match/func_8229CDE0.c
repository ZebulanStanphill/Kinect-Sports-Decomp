extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_8229CE78();
extern int fn_823F2E20();
extern int fn_8266EC60();
extern int fn_8266ECF0();
extern int fn_8266F6A8();
extern unsigned int iStack_2c;


int fn_8229CDE0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  uVar1 = fn_8266EC60();
  uVar1 = fn_8266ECF0(auStack_30,uVar1,param_2,1,0,0xffffffffffffffff,0,0x18280143);
  fn_823F2E20((unsigned int *)(param_1 + 8),uVar1);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  fn_8266F6A8(*(unsigned int *)(param_1 + 8),0x80);
  fn_8229CE78(param_1,param_3);
  return param_1;
}

