extern unsigned int *auStack_80;
extern int fn_82811680();
extern int fn_828184A8();
extern int fn_828256C0();
extern int fn_82829758();
extern int fn_828311B0();
extern int fn_82834990();
extern unsigned int uStack_5f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


void fn_82833988(int *param_1,unsigned int *param_2,short param_3,unsigned int *param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned char auStack_80 [12];
  struct { unsigned int first; unsigned int second; } stack_pair_74;

  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  short sStack_5e;
  
  stack_pair_74.second = (unsigned int)param_5;
  uStack_68 = (unsigned int)param_6;
  uStack_60 = fn_82811680(param_7);
  uStack_5f = fn_82811680(param_8);
  uStack_64 = fn_828184A8(param_5,param_6);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  uStack_6c = (*(int *)(iVar1 + 0x14) + (int)param_7) - 1U & ~((int)param_7 - 1U);
  piVar3 = (int *)fn_82834990(auStack_80,iVar2,&stack_pair_74.second);
  if (*piVar3 == *(int *)(iVar2 + 4)) {
    fn_82829758(iVar1,param_2,param_5,param_6,param_7,param_8);
    stack_pair_74.second = *param_2;
    *(int *)(*(int *)(*param_1 + 8) + 0x3e0) = *(int *)(*(int *)(*param_1 + 8) + 0x3e0) + 1;
    sStack_5e = param_3;
  }
  else {
    puVar5 = &stack_pair_74.first;
    puVar4 = (unsigned int *)(*piVar3 + 8);
    lVar6 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    fn_828256C0(auStack_80,iVar2);
    sStack_5e = sStack_5e + param_3 + 1;
    *param_2 = stack_pair_74.second;
  }
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = uStack_6c;
  }
  fn_828311B0(auStack_80,param_1[1],&stack_pair_74.second);
  return;
}

