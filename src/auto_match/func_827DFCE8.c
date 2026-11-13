typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_827D50B8();
extern int fn_827D5100();
extern int fn_827DF148();
extern int fn_827DF770();
extern int fn_827DFC38();
extern int fn_827E1838();
extern int fn_827E25B8();
extern int fn_827E2618();
extern int fn_827E2790();
extern int fn_82811438();
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int lbl_83156AA0;


unsigned __int64
fn_827DFCE8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,int param_7,unsigned int *param_8)

{
  bool bVar1;
  bool bVar2;
  __int64 lVar3;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar4;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int in_stack_00000054;
  int (**in_stack_0000005c)();
  unsigned char *in_stack_00000064;
  unsigned char auStack_b0 [8];
  unsigned char auStack_a8 [4];
  int iStack_a4;
  unsigned char auStack_a0 [4];
  int iStack_9c;
  unsigned char auStack_90 [144];
  
  uVar8 = 0;
  RtlEnterCriticalSection(param_1 + 400);
  *in_stack_00000064 = 0;
  lVar3 = fn_827DF148(param_1,param_2,param_3);
  if (lVar3 == 0) {
    fn_82811438(auStack_90,auStack_b0,0x10);
    uVar8 = (**(int (***)())(*(int *)lbl_83156AA0 + 4))(lbl_83156AA0,0x30,auStack_90,param_6);
    uVar7 = fn_827DF770(param_1,param_2,param_3,param_5,uVar8,param_6);
    *param_8 = uVar7;
LAB_827dfea0:
    *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
    *in_stack_00000064 = 1;
  }
  else {
    *param_8 = (int)lVar3;
    if (param_4 != 0) {
      fn_827DFC38(param_1,lVar3);
      goto LAB_827dfea0;
    }
    puVar5 = (unsigned int *)fn_827E2790(auStack_a0);
    bVar2 = false;
    iVar6 = fn_827D5100(*puVar5);
    if (iVar6 == 3) {
      puVar5 = (unsigned int *)fn_827E2790(auStack_a8,lVar3);
      bVar2 = true;
      iVar6 = fn_827D50B8(*puVar5);
      bVar1 = true;
      if (iVar6 != 0) goto LAB_827dfda4;
    }
    else {
LAB_827dfda4:
      bVar1 = false;
    }
    if ((bVar2) && (iStack_a4 != 0)) {
      fn_822315A0();
    }
    if (iStack_9c != 0) {
      fn_822315A0();
    }
    if (bVar1) {
      if (param_7 != 0) {
        fn_827E25B8(*param_8);
      }
      uVar4 = fn_827E2790(auStack_b0,lVar3);
      (*in_stack_0000005c)(uVar4,param_6);
      if (in_stack_00000054 != 0) {
        fn_827E1838();
      }
      goto LAB_827dfe28;
    }
  }
  if (param_7 != 0) {
    fn_827E25B8(*param_8);
  }
  fn_827E2618(*param_8);
  uVar8 = 1;
LAB_827dfe28:
  RtlLeaveCriticalSection(param_1 + 400);
  return uVar8;
}

