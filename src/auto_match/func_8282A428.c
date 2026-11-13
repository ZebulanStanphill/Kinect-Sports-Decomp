extern unsigned int *auStack_60;
extern int fn_82824308();
extern int fn_82824338();
extern int fn_828243A0();
extern int fn_828243B8();
extern int fn_828243D0();
extern int fn_8282A0E8();
extern int fn_8282A380();
extern unsigned int iStack_54;
extern unsigned int iStack_58;


unsigned __int64 fn_8282A428(unsigned __int64 param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned char auStack_60 [8];
  struct { int first; int second; } stack_pair_58;

  
  iVar1 = *param_4;
  iVar2 = param_4[1];
  iVar3 = *(int *)(iVar1 + 8);
  iVar4 = **(int **)(iVar3 + 0x388);
  cVar5 = fn_828243A0(param_2);
  if (((cVar5 == '\0') || (param_2[6] != 0)) && (cVar5 = fn_828243B8(param_2), cVar5 == '\0')) {
    cVar5 = fn_828243D0(param_2);
    if (cVar5 != '\0') {
      while ((cVar5 = fn_82824308(param_2), cVar5 == '\0' &&
             (cVar5 = fn_82824338(param_2), cVar5 == '\0'))) {
        param_2 = (int *)(*param_2 * 0x20 + **(int **)(iVar3 + 0x388));
      }
    }
    cVar5 = fn_82824338(param_2);
    if (cVar5 == '\0') {
      return 1;
    }
    uVar6 = 0;
    if (param_4[3] != 0) {
      do {
        piVar7 = (int *)(*(int *)(iVar2 * 0x20 + iVar4 + 0x10) * uVar6 + param_3);
        cVar5 = fn_8282A0E8(iVar3,piVar7);
        if (cVar5 != '\0') {
          stack_pair_58.first = *piVar7;
          stack_pair_58.second = 0;
          if (stack_pair_58.first != 0) {
            fn_8282A380(&stack_pair_58.first,iVar3,iVar1,auStack_60);
            *piVar7 = stack_pair_58.second;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < (unsigned int)param_4[3]);
    }
  }
  return 0;
}

