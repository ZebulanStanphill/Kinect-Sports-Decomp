extern unsigned int *auStack_80;
extern int fn_826A19C0();
extern int fn_826A29C0();
extern int fn_826A2A40();
extern int fn_826A54F0();
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned int *
fn_826A5D50(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,int *param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned char uStack_88;
  unsigned char auStack_80 [32];
  
  *param_1 = (int)param_2;
  param_1[1] = param_3;
  param_1[2] = (int)param_5;
  param_1[3] = (int)param_6;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_826A54F0(param_1 + 4,param_4[1]);
  uVar5 = 0;
  if (param_1[5] != 0) {
    lVar3 = 0;
    iVar4 = 0;
    do {
      uStack_88 = 0;
      stack_pair_90.first = 0;
      stack_pair_90.second = 0;
      uVar1 = param_1[4];
      uVar2 = fn_826A29C0(auStack_80,param_2,*(unsigned int *)(*param_4 + iVar4),&stack_pair_90.first,param_5,
                            param_6);
      fn_826A19C0((unsigned __int64)uVar1 + lVar3,uVar2);
      fn_826A2A40(auStack_80);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
      lVar3 = lVar3 + 0x1c;
    } while (uVar5 < (unsigned int)param_1[5]);
  }
  return param_1;
}

