extern unsigned int *auStack_4c;
extern int fn_8288D478();
extern int fn_8288E0C8();
extern int fn_8288FBF0();
extern unsigned int iStack_20;
extern unsigned int iStack_30;
extern unsigned int iStack_40;
extern unsigned int stack0x00000026;
extern unsigned int uStack00000026;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82890E18(__int64 param_1,unsigned int param_2,unsigned short param_3)

{
  int iVar1;
  int *piVar2;
  unsigned short uStack00000026;
  unsigned int uStack_50;
  unsigned char auStack_4c [4];
  unsigned int uStack_48;
  unsigned int uStack_44;
  int iStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int iStack_30;
  int *apiStack_28 [2];
  int iStack_20;
  
  uStack_50 = param_2 & 0xffff;
  uStack00000026 = param_3;
  piVar2 = (int *)fn_8288E0C8(auStack_4c,param_1 + 0x7c,&uStack_50);
  iVar1 = *piVar2;
  uStack_44 = 0;
  uStack_34 = 0;
  iStack_30 = *(int *)(iVar1 + 0x1c);
  uStack_48 = *(unsigned int *)(iVar1 + 0x10);
  iStack_40 = iStack_30 + *(int *)(iVar1 + 0x20);
  uStack_38 = uStack_48;
  fn_8288D478(apiStack_28,&uStack_38,&uStack_48,&stack0x00000026);
  if (iStack_20 != *(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x20)) {
    uStack_48 = 0;
    uStack_44 = 0;
    if ((apiStack_28[0] != (int *)0x0) && ((unsigned int *)*apiStack_28[0] != (unsigned int *)0x0)) {
      uStack_48 = *(unsigned int *)*apiStack_28[0];
    }
    iStack_40 = iStack_20;
    fn_8288FBF0(apiStack_28,(unsigned int *)(iVar1 + 0x10),&uStack_48);
  }
  return;
}

