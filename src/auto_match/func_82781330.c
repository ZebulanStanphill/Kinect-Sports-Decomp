extern int fn_8277E9F8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82781330(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  
  stack_pair_20.second = param_3 & 0xbfffffff;
  uStack_18 = param_4 & 0xbfffffff;
  iVar3 = *(int *)(param_1 + 0x110);
  stack_pair_20.first = param_2 & 0xbfffffff;
  iVar6 = (param_2 & 0x3ff) * 8;
  pfVar5 = (float *)(*(int *)((stack_pair_20.second >> 8 & 0xfffffc) + iVar3) + (param_3 & 0x3ff) * 8);
  iVar4 = *(int *)((stack_pair_20.first >> 8 & 0xfffffc) + iVar3);
  pfVar7 = (float *)(*(int *)((uStack_18 >> 8 & 0xfffffc) + iVar3) + (param_4 & 0x3ff) * 8);
  fVar1 = pfVar5[1];
  fVar2 = *pfVar5;
  fVar1 = (fVar1 - *(float *)(iVar4 + iVar6 + 4)) * (*pfVar7 - fVar2) -
          (pfVar7[1] - fVar1) * (fVar2 - *(float *)(iVar4 + iVar6));
  if (fVar1 != lbl_821AAD20) {
    if (lbl_821AAD20 < fVar1) {
      return 0;
    }
    fn_8277E9F8(param_1 + 0x184,&stack_pair_20.first);
  }
  return 1;
}

