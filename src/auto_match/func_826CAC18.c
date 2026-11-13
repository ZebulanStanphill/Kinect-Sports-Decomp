extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82697700();
extern int fn_826C59F8();
extern int fn_826C8590();
extern int fn_826CAB68();
extern int fn_827583F8();
extern unsigned int lbl_82005CCC;
extern unsigned char lbl_8200BED8[];
extern unsigned int lbl_821AAD20;


void fn_826CAC18(int param_1)

{
  unsigned int uVar1;
  float fVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  double dVar7;
  
  iVar5 = fn_826C59F8();
  if (iVar5 != 0) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      fn_826C8590(iVar5,1);
      fn_827583F8(*(unsigned int *)(iVar5 + 0x1b8));
    }
    else {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      uVar4 = fn_82697700(uVar3,uVar1);
      uVar6 = uVar4 | 0xff000000;
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        dVar7 = (double)fn_826972E0(uVar3,uVar1);
        fVar2 = (float)dVar7 * (float)(((unsigned __int64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF);
        if (lbl_82005CCC <= (float)dVar7 * (float)(((unsigned __int64)(lbl_8200BED8) >> 0) & 0xFFFFFFFF)) {
          fVar2 = lbl_82005CCC;
        }
        if (fVar2 < 0.0) {
          fVar2 = lbl_821AAD20;
        }
        uVar6 = ((__int64)fVar2 & 0xffU) << 0x18 | uVar4 & 0xffffff;
      }
      fn_826CAB68(iVar5,uVar6);
    }
  }
  return;
}

