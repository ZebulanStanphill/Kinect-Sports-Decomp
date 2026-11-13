extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826B14D8();
extern int fn_826C3560();
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_826B1688(unsigned __int64 param_1,int *param_2,int *param_3,unsigned char param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_70;
  struct { int first; int second; } stack_pair_68;

  unsigned char bStack_60;
  unsigned char auStack_50 [32];
  
  uVar1 = *(unsigned int *)(*param_2 + 0x288);
  uVar3 = fn_826B14D8(*param_2,7);
  iVar2 = *param_3;
  while (iVar2 != 0) {
    auStack_70 = param_4;
    uVar4 = fn_8267B890(uVar1,0x34,0);
    if ((uVar4 & 0xffffffff) == 0) {
      stack_pair_68.first = 0;
    }
    else {
      stack_pair_68.first = fn_826C3560(uVar4,param_2,uVar3,param_3[1]);
    }
    bStack_60 = 0;
    stack_pair_68.second = 0;
    fn_82695750(auStack_50,&stack_pair_68.first);
    fn_826A1CC8(param_1,param_2,*param_3,auStack_50,&auStack_70);
    fn_82696330(auStack_50);
    if (((bStack_60 & 2) == 0) && (stack_pair_68.first != 0)) {
      fn_826824B0();
    }
    stack_pair_68.first = 0;
    if (((bStack_60 & 1) == 0) && (stack_pair_68.second != 0)) {
      fn_826824B0();
    }
    param_3 = param_3 + 2;
    iVar2 = *param_3;
    stack_pair_68.second = 0;
  }
  return;
}

