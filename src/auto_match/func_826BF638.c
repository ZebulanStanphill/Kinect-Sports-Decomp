extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826B14D8();
extern int fn_826C3560();
extern unsigned int iStack_74;
extern unsigned int iStack_78;


void fn_826BF638(unsigned __int64 param_1,int param_2,unsigned int *param_3,int *param_4,unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  int iVar4;
  int *piVar5;
  int aiStack_80 [2];
  struct { int first; int second; } stack_pair_78;

  unsigned char bStack_70;
  unsigned char auStack_60 [48];
  
  iVar2 = fn_826B14D8(*param_3,7);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
  }
  iVar4 = 0;
  if (*param_4 != 0) {
    piVar5 = param_4;
    do {
      uVar1 = fn_8267B890(*(unsigned int *)(*param_3 + 0x288),0x34,0);
      if ((uVar1 & 0xffffffff) == 0) {
        stack_pair_78.first = 0;
      }
      else {
        stack_pair_78.first = fn_826C3560(uVar1,param_3,iVar2,piVar5[1]);
      }
      bStack_70 = 0;
      stack_pair_78.second = 0;
      fn_82695750(auStack_60,&stack_pair_78.first);
      fn_82681728(aiStack_80,(unsigned __int64)*param_3 + 0x254,*piVar5);
      (**(int (***)())(*(int *)(param_2 + 0x10) + 0x28))
                ((int *)(param_2 + 0x10),param_3,aiStack_80,auStack_60,param_5);
      lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_80[0] + 8) - 1;
      *(int *)(aiStack_80[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_80[0]);
      }
      fn_82696330(auStack_60);
      if (((bStack_70 & 2) == 0) && (stack_pair_78.first != 0)) {
        fn_826824B0();
      }
      stack_pair_78.first = 0;
      if (((bStack_70 & 1) == 0) && (stack_pair_78.second != 0)) {
        fn_826824B0();
      }
      iVar4 = iVar4 + 1;
      stack_pair_78.second = 0;
      piVar5 = param_4 + iVar4 * 2;
    } while (param_4[iVar4 * 2] != 0);
  }
  if (iVar2 != 0) {
    fn_826824B0(iVar2);
  }
  return;
}

