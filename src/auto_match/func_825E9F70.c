typedef unsigned char bool;
extern unsigned int *auStack_50;
extern int fn_825E8220();
extern int fn_825EA0B8();
extern int fn_82A1F198();
extern int fn_82BFE128();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_825E9F70(__int64 param_1,unsigned __int64 param_2,int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  char in_RESERVE;
  unsigned char bVar10;
  unsigned char auStack_50 [8];
  int (**pcStack_48)();
  
  uVar5 = fn_825EA0B8();
  if ((uVar5 & 0xffffffff) != 0) {
    return uVar5;
  }
  fn_825E8220(auStack_50,param_1 + 0x10);
  uVar5 = fn_825EA0B8(param_1,param_2,param_3);
  bVar1 = (uVar5 & 0xffffffff) == 0;
  bVar10 = bVar1 << 1;
  if (bVar1) {
    iVar8 = 0;
    lVar6 = param_1;
    do {
      if ((*param_3 <= ((int *)*(int *)lVar6)[1]) && (*(int *)*(int *)lVar6 == (int)param_2)) {
        iVar3 = *(int *)(iVar8 * 4 + (int)param_1);
        lVar6 = fn_82A1F198(*(unsigned int *)(iVar3 + 0xc),0xffffffffffffffff,0x80,0x404);
        fn_82BFE128(*(unsigned int *)(iVar3 + 0x14),lVar6);
        iVar9 = 0;
        if (0 < *(int *)(iVar3 + 8)) {
          do {
            fn_82BFE128(*(unsigned int *)(iVar3 + 0x10),lVar6);
            iVar9 = iVar9 + 1;
            lVar6 = (unsigned __int64)*(unsigned int *)(iVar3 + 4) + lVar6;
          } while (iVar9 < *(int *)(iVar3 + 8));
        }
        uVar2 = *(unsigned int *)(*(int *)(iVar8 * 4 + (int)param_1) + 0xc);
        do {
          puVar7 = (unsigned int *)(param_1 + 0x24);
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed
                              ((unsigned __int64)uVar2 + (unsigned __int64)*puVar7,0,param_1 + 0x24);
            *puVar7 = uVar4;
            bVar10 = 2;
          }
        } while (!(bool)(bVar10 >> 1 & 1));
        uVar5 = fn_825EA0B8(param_1,param_2,param_3);
        goto LAB_825e9fbc;
      }
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar8 < 4);
    uVar5 = 0;
  }
LAB_825e9fbc:
  (*pcStack_48)(auStack_50);
  return uVar5;
}

