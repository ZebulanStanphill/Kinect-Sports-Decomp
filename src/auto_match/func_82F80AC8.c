extern unsigned int *auStack_aa0;
extern unsigned int *auStack_ab0;
extern int fn_82F69370();
extern int fn_82F69398();
extern int fn_82F697A8();
extern int fn_82F6FA38();
extern int fn_82F80208();
extern int fn_82F80368();
extern int fn_82F80998();
extern int fn_82F8698C();
extern int fn_82F86A70();
extern int fn_82F86B1C();
extern unsigned int iStack_abc;
extern unsigned int uStack_ab4;
extern unsigned int uStack_ab8;
extern unsigned int uStack_ac0;


void fn_82F80AC8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int in_stack_00000054;
  unsigned int uStack_ac0;
  int iStack_abc;
  unsigned int uStack_ab8;
  unsigned int uStack_ab4;
  unsigned char auStack_ab0 [16];
  unsigned char auStack_aa0 [2720];
  
  uVar1 = fn_82F69370(param_2,param_5);
  lVar2 = fn_82F69398(param_4,param_5);
  if (lVar2 == 0) {
    uStack_ab8 = 0;
    *(unsigned int **)(param_2 + 4) = &uStack_ac0;
    uStack_ac0 = 0xfffffffe;
    uStack_ab4 = 0;
    iStack_abc = param_2;
  }
  if ((param_7 & 0xffffffff) != 0) {
    fn_82F80998(param_1,uVar1,param_6,param_7);
  }
  iVar5 = fn_82F6FA38();
  *(unsigned char **)(iVar5 + 0x8c) = auStack_aa0;
  uVar3 = fn_82F697A8(auStack_ab0,param_1);
  if (in_stack_00000054 == 0) {
    in_stack_00000054 = *(int *)(param_4 + 8);
  }
  fn_82F86A70(in_stack_00000054,param_1,param_3);
  fn_82F80368(uVar1,param_4,param_5,*param_8);
  fn_82F80208(param_2,param_4,param_5,(unsigned __int64)(unsigned int)param_8[1] + 1);
  iVar5 = fn_82F6FA38();
  uVar4 = fn_82F86B1C(param_1,uVar1,param_3,param_5,*(unsigned int *)(param_6 + 0xc),
                          (unsigned int *)(param_2 + 4),uVar3,*(unsigned int *)(iVar5 + 0x8c));
  if ((uVar4 & 0xffffffff) != 0) {
    if ((int)lVar2 == 0) {
      *(unsigned int *)(param_2 + 4) = 0;
    }
    fn_82F8698C(uVar4,auStack_aa0);
  }
  return;
}

