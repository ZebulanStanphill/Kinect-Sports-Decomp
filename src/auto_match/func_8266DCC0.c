extern unsigned int *auStack_50;
extern int fn_8266CBF0();
extern int fn_8266D210();
extern int fn_8266D3E0();
extern int fn_8266D440();
extern int fn_8266D840();
extern int fn_8266D998();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


__int64 fn_8266DCC0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                      __int64 param_5,int param_6)

{
  int iVar2;
  __int64 lVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned char auStack_50 [32];
  
  if ((param_4 <= (int)param_5) && (iVar2 = fn_8266CBF0(param_6), param_4 <= iVar2)) {
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
    uStack_60 = *(unsigned int *)(param_6 + 0x10);
    fn_8266D840(auStack_50,param_1,param_2,&stack_pair_70.first);
    fn_8266D440(auStack_50);
    fn_8266D3E0(param_2,param_3,param_1);
    lVar1 = fn_8266D210(**(unsigned int **)(param_6 + 0x10),(*(unsigned int **)(param_6 + 0x10))[1],
                          param_3);
    return lVar1;
  }
  iVar2 = fn_8266CBF0(param_6);
  if (iVar2 < (int)param_5) {
    fn_8266D998(param_1,param_2,param_3);
    param_1 = param_5 * 0xc + param_1;
  }
  else {
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
    uStack_60 = *(unsigned int *)(param_6 + 0x10);
    fn_8266D840(auStack_50,param_2,param_3,&stack_pair_70.first);
    fn_8266D440(auStack_50);
    fn_8266D210(param_1,param_2,param_3);
    param_1 = fn_8266D3E0(**(unsigned int **)(param_6 + 0x10),(*(unsigned int **)(param_6 + 0x10))[1],
                            param_1);
  }
  return param_1;
}

