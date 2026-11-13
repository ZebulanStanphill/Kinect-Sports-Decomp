extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82695370();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696B20();
extern int fn_826A2AB8();
extern int fn_826A2DA8();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;


unsigned __int64 fn_82720090(int param_1,int *param_2,unsigned __int64 param_3,int *param_4)

{
  char *pcVar1;
  unsigned __int64 uVar2;
  char cVar10;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar3;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar11;
  int iVar12;
  struct { int first; int second; } stack_pair_a0;

  unsigned char bStack_98;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    piVar11 = (int *)(param_1 + 0x78);
    auStack_80[0] = 0;
    cVar10 = (**(int (***)())(*param_2 + 0x2c))
                       (param_2,piVar11,(unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x140,auStack_80);
    if (((cVar10 != '\0') && (iVar4 = fn_82696958(auStack_80,param_1), iVar4 != 0)) &&
       (iVar5 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 == 7)) {
      *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      if (0 < *(int *)(iVar4 + 0x38)) {
        uVar3 = fn_8267B890(*(unsigned int *)(*piVar11 + 0x288),0x48,0);
        if ((uVar3 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_826A2AB8(uVar3,param_1);
        }
        fn_826A2DA8(iVar5,*(unsigned int *)(*piVar11 + 0x288),iVar4);
        uVar3 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x38);
        if (uVar3 != 0) {
          iVar12 = 0;
          do {
            pcVar1 = *(char **)(iVar12 + *(int *)(iVar5 + 0x34));
            if ((pcVar1 != (char *)0x0) &&
               (piVar6 = (int *)fn_82696AD0(pcVar1,param_1), piVar6 != (int *)0x0)) {
              iVar8 = 0;
              iVar7 = 0;
              if (*pcVar1 == '\a') {
                iVar7 = fn_82695370();
                if (iVar7 != 0) {
                  *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
                }
              }
              else {
                iVar8 = fn_82696958(pcVar1,param_1);
                if (iVar8 != 0) {
                  *(unsigned int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
                }
              }
              auStack_90[0] = 0;
              cVar10 = (**(int (***)())(*piVar6 + 0x2c))(piVar6,piVar11,param_3,auStack_90);
              if (cVar10 != '\0') {
                fn_82696B20(&stack_pair_a0.first,auStack_90,param_1);
                iVar9 = 0;
                if (stack_pair_a0.first != 0) {
                  (**(int (***)())(*param_4 + 4))(param_4,param_1,piVar6,&stack_pair_a0.first);
                  iVar9 = stack_pair_a0.first;
                }
                if (((bStack_98 & 2) == 0) && (iVar9 != 0)) {
                  fn_826824B0();
                }
                stack_pair_a0.first = 0;
                if (((bStack_98 & 1) == 0) && (stack_pair_a0.second != 0)) {
                  fn_826824B0();
                }
                stack_pair_a0.second = 0;
              }
              fn_82696330(auStack_90);
              if (iVar7 != 0) {
                fn_8267C498(iVar7);
              }
              if (iVar8 != 0) {
                fn_826824B0(iVar8);
              }
            }
            uVar3 = uVar3 - 1;
            iVar12 = iVar12 + 4;
          } while (uVar3 != 0);
        }
        fn_826824B0(iVar5);
      }
      fn_826824B0(iVar4);
    }
    fn_82696330(auStack_80);
    uVar2 = 1;
  }
  return uVar2;
}

