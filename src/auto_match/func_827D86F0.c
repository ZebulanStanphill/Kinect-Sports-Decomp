extern unsigned int *auStack_50;
extern int fn_827D9410();
extern int fn_827E0658();
extern int fn_82811438();
extern int fn_8281C448();
extern int fn_82F65390();
extern int fn_82F66368();
extern int fn_82F6D460();
extern unsigned int lbl_83156AA0;


unsigned __int64 fn_827D86F0(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar3;
  __int64 lVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int aiStack_60 [4];
  unsigned char auStack_50 [80];
  
  if ((param_3 & 0xffffffff) == 0) {
    return 0;
  }
  RtlEnterCriticalSection(param_1 + 0x3c8);
  fn_827E0658(aiStack_60,param_1 + 0x350,param_2);
  iVar1 = aiStack_60[0];
  if (aiStack_60[0] == *(int *)(param_1 + 0x354)) {
    aiStack_60[0] = 0;
    fn_82811438(auStack_50,aiStack_60,0x10);
    lVar2 = fn_82F6D460(param_3,0x400);
    uVar5 = (**(int (***)())(*(int *)lbl_83156AA0 + 0xc))(lbl_83156AA0,lVar2 + 1,auStack_50);
    lVar2 = fn_82F6D460(param_3,0x400);
    fn_82F66368(uVar5,lVar2 + 1,param_3,0x400);
    puVar4 = (unsigned int *)fn_827D9410(param_1 + 0x350,param_2);
    *puVar4 = (int)uVar5;
  }
  else {
    iVar3 = fn_82F65390(*(unsigned int *)(aiStack_60[0] + 0xc),param_3,0x400);
    if (iVar3 != 0) {
      fn_8281C448(0xffffffff8201ac8c,*param_2,*(unsigned int *)(iVar1 + 0xc),param_3);
      uVar5 = 0;
      goto LAB_827d87fc;
    }
  }
  uVar5 = 1;
LAB_827d87fc:
  RtlLeaveCriticalSection(param_1 + 0x3c8);
  return uVar5;
}

