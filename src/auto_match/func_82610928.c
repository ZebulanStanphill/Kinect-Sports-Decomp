typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82522588();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_827D50C0();
extern int fn_827DEA50();
extern int fn_82816F98();
extern int fn_82816FE8();
extern unsigned int iStack_44;
extern unsigned int uStack_3c;
extern unsigned int uStack_48;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82610928(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  int aiStack_50 [2];
  unsigned int uStack_48;
  int iStack_44;
  unsigned char auStack_40 [4];
  unsigned int uStack_3c;
  
  fn_82522588(&uStack_48,param_1 + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(uStack_48 + 0x88);
  if (iVar2 == 0) {
    lVar4 = (unsigned __int64)uStack_48 + 0x1dc;
    do {
      puVar5 = (unsigned int *)lVar4;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar5 - 1,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    aiStack_50[0] = 0;
    fn_82816F98(iVar2,*(unsigned int *)(iVar1 + 0x80),aiStack_50);
    if (aiStack_50[0] != 0) {
      fn_827D5078();
      fn_827DEA50(*(unsigned int *)(param_1 + 0x10),iVar2);
      fn_82816FE8(iVar2,*(unsigned int *)(iVar1 + 0x80),auStack_40);
      fn_827D5090(*param_3,uStack_3c);
      fn_827D50A8(*param_3,0);
      fn_827D50C0(*param_3,0);
      if (iStack_44 != 0) {
        fn_822315A0();
      }
      if (param_3[1] != 0) {
        fn_822315A0();
      }
      return 0;
    }
    fn_827D50C0(*param_3,2);
    lVar4 = (unsigned __int64)uStack_48 + 0x1dc;
    do {
      puVar5 = (unsigned int *)lVar4;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar5 - 1,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return 2;
}

