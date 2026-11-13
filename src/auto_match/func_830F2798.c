extern int fn_830EFAB8();
extern int fn_830EFF58();
extern int fn_830F0790();
extern int fn_830F1780();
extern unsigned int uStack0000003c;


unsigned __int64
fn_830F2798(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned int param_6)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned int uStack0000003c;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  if (((*(int *)(param_1 + 0xecc) == 0) || ((unsigned __int64)*(unsigned int *)(param_1 + 0xed0) == 0)) ||
     ((unsigned __int64)*(unsigned int *)(param_1 + 0xed4) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar1 = *(unsigned short *)(param_2 + 0x32) >> 1;
    iVar4 = (int)param_5;
    lVar7 = (__int64)(int)((unsigned int)*(unsigned short *)(param_2 + 0x4c) << 3) * (__int64)iVar4;
    lVar5 = (__int64)(int)((unsigned int)*(unsigned short *)(param_2 + 0x4a) << 4) * (__int64)iVar4;
    lVar10 = lVar5 + (unsigned __int64)*(unsigned int *)(param_1 + 0xec0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xdc);
    puVar8 = (unsigned int *)((unsigned int)uVar1 * iVar4 * 0x18 + *(int *)(param_1 + 0x110));
    lVar11 = lVar7 + *(unsigned int *)(param_1 + 0xec4) + uVar6;
    lVar5 = lVar5 + (unsigned __int64)*(unsigned int *)(param_1 + 0xee4);
    lVar9 = lVar7 + *(unsigned int *)(param_1 + 0xed0) + uVar6;
    lVar7 = lVar7 + *(unsigned int *)(param_1 + 0xed4) + uVar6;
    uStack0000003c = param_6;
    if ((param_5 & 0xffffffff) < (unsigned __int64)param_6) {
      do {
        uVar6 = 0;
        if ((unsigned __int64)uVar1 != 0) {
          lVar12 = lVar10;
          lVar13 = lVar11;
          do {
            uVar2 = *puVar8 >> 8 & 7;
            if (uVar2 != 4) {
              if (uVar2 == 0) {
                fn_830EFAB8(param_2,uVar6,param_5,(lVar5 - lVar10) + lVar12,
                                (lVar9 - lVar11) + lVar13,(lVar7 - lVar11) + lVar13,lVar12,lVar13);
              }
              else if (uVar2 == 1) {
                fn_830F0790();
              }
              else if (uVar2 < 3) {
                fn_830EFF58();
              }
              else {
                fn_830F1780();
              }
            }
            uVar6 = uVar6 + 1;
            lVar12 = lVar12 + 0x10;
            lVar13 = lVar13 + 8;
            puVar8 = puVar8 + 6;
            param_6 = uStack0000003c;
          } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar1);
        }
        uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe8);
        param_5 = param_5 + 1;
        lVar11 = uVar6 + lVar11;
        lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe4) + lVar10;
        lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe4) + lVar5;
        lVar9 = uVar6 + lVar9;
        lVar7 = uVar6 + lVar7;
      } while ((param_5 & 0xffffffff) < (unsigned __int64)param_6);
    }
    uVar3 = 0;
  }
  return uVar3;
}

