extern unsigned int *auStack_48;
extern int fn_82230218();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822D54A8();
extern int fn_82365BD8();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


void fn_822D4B10(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  struct { int first; int second; } stack_pair_50;

  unsigned char auStack_48 [72];
  
  stack_pair_50.first = 0;
  uVar1 = fn_8265C9E0(0x94);
  if ((uVar1 & 0xffffffff) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = fn_822D54A8(uVar1,param_2,param_5,param_3,param_2,&stack_pair_50.first,param_4);
  }
  stack_pair_50.second = (int)lVar2;
  stack_pair_50.first = stack_pair_50.second + 0xc;
  uVar3 = fn_822C7578(lVar2 + 0x4c,(unsigned __int64)*param_7 + 4);
  fn_82230218(uVar3,param_6,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_48,param_7);
  fn_82376640(lVar2 + 0x3c,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&stack_pair_50.first);
  if (stack_pair_50.second != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return;
}

