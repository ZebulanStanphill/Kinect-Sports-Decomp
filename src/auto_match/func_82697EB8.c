extern int fn_82681838();
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696D38();
extern int fn_82697248();
extern int fn_826972E0();
extern int fn_82697820();
extern int fn_82697918();
extern int fn_826979D0();
extern unsigned int iStack_80;


void fn_82697EB8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  struct { int first; int second; } stack_pair_80;

  unsigned char abStack_70 [16];
  unsigned char abStack_60 [16];
  unsigned char abStack_50 [16];
  unsigned char abStack_40 [16];
  
  abStack_70[0] = 0;
  abStack_60[0] = 0;
  uVar2 = fn_826979D0(abStack_50,param_1,param_2,0);
  fn_82695FA0(abStack_70,uVar2);
  if (4 < abStack_50[0]) {
    fn_826959C8(abStack_50);
  }
  uVar2 = fn_826979D0(abStack_40,param_3,param_2,0);
  fn_82695FA0(abStack_60,uVar2);
  if (4 < abStack_40[0]) {
    fn_826959C8(abStack_40);
  }
  if ((abStack_70[0] == 5) || (abStack_60[0] == 5)) {
    uVar1 = *(unsigned char *)(param_2 + 0x7c);
    fn_82697820(abStack_70,param_2,uVar1);
    uVar2 = fn_82697248(&stack_pair_80.second,abStack_60,param_2,uVar1);
    fn_82697918(abStack_70,param_2,uVar2);
    lVar3 = (unsigned __int64)*(unsigned int *)(stack_pair_80.second + 8) - 1;
    *(int *)(stack_pair_80.second + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(stack_pair_80.second);
    }
    fn_82696D38(&stack_pair_80.first,abStack_70,param_2,0xffffffffffffffff,0);
    fn_82681838(param_1,&stack_pair_80.first);
    lVar3 = (unsigned __int64)*(unsigned int *)(stack_pair_80.first + 8) - 1;
    *(int *)(stack_pair_80.first + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8();
    }
  }
  else {
    dVar4 = (double)fn_826972E0(abStack_60,param_2);
    dVar5 = (double)fn_826972E0(abStack_70,param_2);
    fn_82681898(dVar4 + dVar5,param_1);
  }
  if (4 < abStack_60[0]) {
    fn_826959C8(abStack_60);
  }
  if (4 < abStack_70[0]) {
    fn_826959C8(abStack_70);
  }
  return;
}

