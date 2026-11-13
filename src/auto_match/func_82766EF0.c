typedef unsigned char bool;
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int lbl_821AAD20;


double fn_82766EF0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  float fVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  __int64 lVar8;
  bool bVar9;
  
  lVar7 = 0;
  lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - 1;
  fVar2 = lbl_821AAD20;
  if (-1 < lVar8) {
    iVar1 = *(int *)(param_1 + 8);
    do {
      uVar6 = (int)lVar7 + (int)lVar8;
      lVar3 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      uVar6 = (int)lVar3 * 6 + *(int *)(param_1 + 0x18);
      uVar5 = (unsigned __int64)
              CONCAT11(*(unsigned char *)
                        (*(int *)((uVar6 + 1 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 + 1 & 0xfff)),
                       *(unsigned char *)
                        (*(int *)((uVar6 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 & 0xfff)));
      uVar4 = (unsigned __int64)
              CONCAT11(*(unsigned char *)
                        (*(int *)((uVar6 + 3 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 + 3 & 0xfff)),
                       *(unsigned char *)
                        (*(int *)((uVar6 + 2 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                        (uVar6 + 2 & 0xfff)));
      if (uVar5 == (param_2 & 0xffffffff)) {
        if (uVar4 == (param_3 & 0xffffffff)) {
          fVar2 = (float)(__int64)
                         CONCAT11(*(unsigned char *)
                                   (*(int *)((uVar6 + 5 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                                   (uVar6 + 5 & 0xfff)),
                                  *(unsigned char *)
                                   (*(int *)((uVar6 + 4 >> 10 & 0x3ffffc) + *(int *)(iVar1 + 0xc)) +
                                   (uVar6 + 4 & 0xfff)));
          break;
        }
        bVar9 = uVar4 <= param_3;
      }
      else {
        bVar9 = uVar5 <= param_2;
      }
      if (bVar9) {
        lVar7 = lVar3 + 1;
      }
      else {
        lVar8 = lVar3 + -1;
      }
    } while ((int)lVar7 <= (int)lVar8);
  }
  return (double)fVar2;
}

