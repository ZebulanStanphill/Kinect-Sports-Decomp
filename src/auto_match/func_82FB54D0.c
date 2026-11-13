extern unsigned int *auStack_58;
extern int fn_82FA5060();
extern int fn_82FA9410();
extern int fn_82FAB710();
extern int fn_82FABE80();
extern int fn_82FAD510();
extern int fn_82FB40B0();
extern int fn_82FB4990();
extern int fn_82FB6240();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_5c;
extern unsigned int lbl_831BC768;


int fn_82FB54D0(int param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned char uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piStack_60;
  int iStack_5c;
  unsigned char auStack_58 [8];
  struct { int first; int second; } stack_pair_50;

  
  iVar2 = param_2[1];
  uVar3 = fn_82FA9410(iVar2,*param_4);
  iVar7 = param_4[1];
  uVar1 = *(unsigned char *)(param_4 + 3);
  uVar4 = fn_82FA5060(lbl_831BC768,0x54);
  if ((uVar4 & 0xffffffff) != 0) {
    iVar5 = fn_82FB40B0(uVar4,uVar3,param_1,param_3,uVar1);
    if (iVar5 == 0) {
      return 0;
    }
    piVar6 = (int *)fn_82FB6240(param_1 + 0x54);
    if (piVar6 != (int *)0x0) {
      *piVar6 = iVar5;
      *(int *)(iVar5 + 0x48) = iVar7 + (int)uVar3;
      iVar7 = fn_82FABE80(param_3);
      if (iVar7 != 0) {
        *(unsigned int *)(iVar7 + 0xc) = 0;
      }
      iStack_5c = *param_2;
      stack_pair_50.first = *(int *)(iStack_5c + 4);
      stack_pair_50.second = 0;
      if (stack_pair_50.first != 0) {
        do {
          iVar7 = stack_pair_50.first;
          stack_pair_50.first = iVar7;
          if (iVar7 == param_2[1]) break;
          stack_pair_50.first = *(int *)(iVar7 + 4);
          stack_pair_50.second = iVar7;
        } while (stack_pair_50.first != 0);
      }
      fn_82FAD510(&piStack_60,iStack_5c,&stack_pair_50.first,iVar5);
      piVar6 = (int *)0x0;
      if ((piStack_60 != (int *)0x0) && (piVar6 = piStack_60, *(char *)(piStack_60 + 4) == '\0')) {
        piVar6 = (int *)(**(int (***)())(*piStack_60 + 0xc))
                                  (piStack_60,piStack_60[5],&iStack_5c,auStack_58);
      }
      fn_82FAB710(*(unsigned int *)(param_1 + 0x38),iVar2,piVar6,*(unsigned int *)(iVar5 + 0xc));
      return iVar5;
    }
    fn_82FB4990(iVar5);
  }
  return 0;
}

