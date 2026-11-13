extern unsigned int fStack_4c;
extern int fn_82508160();
extern int fn_82512E18();
extern int fn_8251FBA8();
extern int fn_82526A20();
extern unsigned int iStack_50;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_48;


unsigned __int64 fn_82508078(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iStack_50;
  float fStack_4c;
  unsigned int uStack_48;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (param_1[10] == 0)) {
    uVar5 = 0;
    uVar2 = fn_8251FBA8(iVar1);
    iVar4 = iVar1;
    if ((int)((uVar2 & 0xffffffff) / 0x98) != 0) {
      do {
        iVar3 = fn_82526A20(iVar4 + 4,param_2);
        if (iVar3 == 0) goto LAB_825080f8;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x98;
        uVar2 = fn_8251FBA8(iVar1);
      } while ((uVar5 & 0xffffffff) < (uVar2 & 0xffffffff) / 0x98);
    }
    iVar4 = 0;
LAB_825080f8:
    if (iVar4 != 0) {
      fStack_4c = *(float *)(iVar4 + 0x90);
      if (fStack_4c <= ltcg_pool_0_0f) {
        fn_82508160(param_1,iVar4,param_3,1);
      }
      else {
        uStack_48 = (unsigned int)param_3;
        iStack_50 = iVar4;
        fn_82512E18(param_1 + 0xb,&iStack_50);
      }
      return 1;
    }
  }
  return 0;
}

