extern void fn_822A1100(void);
extern void fn_822A1178(void);
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_823F2E20();
extern unsigned int fn_8266EC60(void);
extern unsigned int fn_8266EF20(void *, unsigned int, unsigned int, int, int, unsigned int);
extern int fn_8266F628();
extern int fn_8266F640();
extern int fn_8266F658();
extern int fn_8266F660();
extern int fn_82673A28();
extern int fn_82673C58();
extern unsigned int iStack_2c;


unsigned int * fn_822A1018(unsigned int *param_1,unsigned __int64 param_2)

{
  float uVar1;
  unsigned int uVar2;
  struct { unsigned int first,second; } pair;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82266D28(param_1,0);
  *(unsigned char *)(param_1 + 2) = 0;
  *(unsigned char *)((int)param_1 + 9) = 0;
  uVar1 = 0.0f;
  ((float *)param_1)[8] = 0.0f;
  ((float *)param_1)[9] = uVar1;
  uVar2 = fn_8266EF20(&pair,fn_8266EC60(),param_2,0,0,0x18280143);
  fn_823F2E20(param_1,uVar2);
  if (pair.second != 0) {
    fn_822315A0(pair.second);
  }
  fn_8266F658(*param_1,1);
  fn_8266F660(*param_1,1);
  fn_8266F640(*param_1,1);
  fn_8266F628(*param_1,1);
  fn_82673C58(*param_1,fn_822A1100,param_1,0);
  fn_82673A28(*param_1,fn_822A1178,param_1);
  return param_1;
}

