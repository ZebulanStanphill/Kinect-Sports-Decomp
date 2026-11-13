typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826A73F8();
extern int fn_826ADE60();
extern int fn_826B3798();
extern int fn_826B3E08();
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_826AE0C0(unsigned __int64 param_1,unsigned int *param_2)

{
  bool bVar1;
  char cVar3;
  unsigned __int64 uVar2;
  char acStack_50 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  char *pcStack_30;
  unsigned int uStack_2c;
  
  if (((*(unsigned int *)(*(int *)*param_2 + 0xc) >> 0x19 & 1) == 0) &&
     (cVar3 = fn_826A73F8(), cVar3 != '\0')) {
    stack_pair_40.first = *param_2;
    pcStack_30 = acStack_50;
    stack_pair_40.second = param_2[1];
    uStack_38 = param_2[2];
    uStack_34 = param_2[3];
    uStack_2c = param_2[5];
    acStack_50[0] = '\0';
    uVar2 = fn_826B3E08(param_1,&stack_pair_40.first,0,0);
    if ((acStack_50[0] == '\0') || (bVar1 = false, acStack_50[0] == '\n')) {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_2[5] & 4) == 0) {
        fn_826ADE60(param_1,0xffffffff82007570,**(unsigned int **)*param_2);
      }
      uVar2 = 0;
    }
    else if (param_2[4] != 0) {
      fn_82695FA0(param_2[4],acStack_50);
    }
    fn_82696330(acStack_50);
    return uVar2;
  }
  uVar2 = fn_826B3798(param_1,param_2);
  return uVar2;
}

