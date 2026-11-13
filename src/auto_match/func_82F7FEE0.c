extern unsigned int *auStack_50;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7F510();
extern int fn_82F7FC58();
extern int fn_82F86648();
extern int fn_82F86888();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


unsigned __int64
fn_82F7FEE0(unsigned __int64 *param_1,unsigned char *param_2,int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  char *pcVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned char auStack_50 [32];
  
  fn_82F86888(*param_1,&stack_pair_60.first,auStack_50,0x16);
  if ((param_2 == (unsigned char *)0x0) || (param_3 == 0)) {
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 0x16;
    fn_82F63BA0();
    uVar2 = 0x16;
  }
  else {
    uVar5 = (unsigned __int64)stack_pair_60.second;
    iVar4 = -1;
    if (param_3 != -1) {
      iVar4 = param_3 - (unsigned int)(stack_pair_60.first == 0x2d);
    }
    uVar2 = fn_82F86648(param_2 + (stack_pair_60.first == 0x2d),iVar4,param_4,&stack_pair_60.first);
    if ((int)uVar2 == 0) {
      uVar6 = (unsigned __int64)stack_pair_60.second - 1;
      if (((int)uVar6 < -4) || ((int)param_4 <= (int)uVar6)) {
        uVar2 = fn_82F7F510(param_2,param_3,param_4,param_5,&stack_pair_60.first,1);
      }
      else {
        pcVar1 = param_2 + (stack_pair_60.first == 0x2d);
        if (((char)((~(uVar6 ^ uVar5 - 1) & 0xffffffff) >> 0x1f) + (uVar6 <= uVar5 - 1) & 1U) != 0)
        {
          do {
            pcVar7 = pcVar1;
            pcVar1 = pcVar7 + 1;
          } while (*pcVar7 != '\0');
          pcVar7[-1] = '\0';
        }
        uVar2 = fn_82F7FC58(param_2,param_3,param_4,&stack_pair_60.first,1);
      }
    }
    else {
      *param_2 = 0;
    }
  }
  return uVar2;
}

