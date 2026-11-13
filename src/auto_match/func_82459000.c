extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82264CE0();
extern int fn_82458910();
extern int fn_82F63108();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;


void fn_82459000(unsigned int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_90 [4];
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  fn_82458910(&iStack_88,*param_1,*(unsigned int *)(param_2 + 0x2c));
  fn_82458910(auStack_90,*param_1,*(unsigned int *)(param_3 + 0x2c));
  uVar1 = *(unsigned int *)(iStack_88 + 0xb8);
  uVar2 = *(unsigned int *)(iStack_88 + 0xb0);
  uVar3 = *(unsigned int *)(iStack_88 + 0x84);
  uVar4 = *(unsigned int *)(iStack_88 + 0x98);
  uVar5 = *(unsigned int *)(iStack_88 + 0x9c);
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  uVar6 = (**(int (***)())(*(int *)param_1[0xe] + 4))((int *)param_1[0xe],param_3);
  if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  uVar7 = (**(int (***)())(*(int *)param_1[0xe] + 4))((int *)param_1[0xe],param_2);
  fn_82264CE0(param_1[0x16],param_4,uVar7,uVar6,(unsigned __int64)uVar5 + (unsigned __int64)uVar4,uVar3,
                    uVar2,uVar1);
  param_1[0x17] = 0;
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  if (iStack_84 != 0) {
    fn_822315A0();
  }
  return;
}

