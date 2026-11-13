#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828C4508();
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_828C4CA0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned char uStack_80;
  unsigned __int64 uStack_78;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  
  uStack00000010 = ((((unsigned __int64)(uStack00000010)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack00000018 = ((((unsigned __int64)(uStack00000018)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar4 = (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  if ((((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF) != (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF)) {
    uVar14 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF) + 1;
    uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(param_1 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    iVar5 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
    uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),uVar14);
    if (uVar14 != (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF)) {
      uVar3 = (unsigned __int64)((((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF) >> 2);
      puVar13 = (unsigned int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8);
      piVar12 = (int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 4);
      uStack00000010 = param_1;
      uStack00000018 = param_2;
      do {
        uVar11 = uVar14 >> 2;
        uVar7 = *puVar13;
        if (uVar7 <= uVar11) {
          uVar11 = uVar11 - uVar7;
        }
        iVar2 = *(int *)(*(int *)(uVar11 * 4 + *piVar12) + (uVar14 & 3) * 4);
        uVar9 = uVar3;
        if (*(unsigned int *)(iVar5 + 8) <= uVar3) {
          uVar9 = uVar3 - *(unsigned int *)(iVar5 + 8);
        }
        uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uStack_70 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        if (*(unsigned int *)(iVar2 + 8) <
            *(unsigned int *)(*(int *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(iVar5 + 4)) +
                              (int)((param_1 & 3) << 2)) + 8)) {
          uStack_78 = CONCAT44((((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF),uVar14 + 1);
          fn_828C4508(&uStack_68,param_1,uStack_70,uStack_78,uStack_80);
          uVar9 = uVar3;
          if (*(unsigned int *)(iVar5 + 8) <= uVar3) {
            uVar9 = uVar3 - *(unsigned int *)(iVar5 + 8);
          }
          *(int *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(iVar5 + 4)) +
                  (int)((param_1 & 3) << 2)) = iVar2;
        }
        else {
          uStack_68 = uStack_70;
          uVar6 = uStack_68;
          uStack_68 = ((((unsigned __int64)(uStack_68)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_70)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
          uVar7 = (((unsigned __int64)(uStack_68) >> 32) & 0xFFFFFFFF);
          uStack_68 = uVar6;
          while( true ) {
            uVar6 = uStack_68;
            uVar7 = uVar7 - 1;
            uVar8 = (unsigned __int64)*puVar13;
            uVar9 = (unsigned __int64)(uVar7 >> 2);
            uStack_68 = CONCAT44((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF),uVar7);
            uVar10 = uVar9;
            if (uVar8 <= uVar9) {
              uVar10 = uVar9 - uVar8;
            }
            iVar1 = *piVar12;
            uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar6)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
            if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar10 & 0xffffffff) << 2) + iVar1) +
                                  (int)(((unsigned __int64)uVar7 & 3) << 2)) + 8) <= *(unsigned int *)(iVar2 + 8))
            break;
            if (uVar8 <= uVar9) {
              uVar9 = uVar9 - uVar8;
            }
            uVar11 = (((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) >> 2;
            if (*(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar11) {
              uVar11 = uVar11 - *(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
            }
            *(unsigned int *)
             (*(int *)(*(int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4) + uVar11 * 4) + ((((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) & 3) * 4) =
                 *(unsigned int *)
                  (*(int *)((int)((uVar9 & 0xffffffff) << 2) + iVar1) +
                  (int)(((unsigned __int64)uVar7 & 3) << 2));
          }
          uVar7 = (((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) >> 2;
          if (*(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar7) {
            uVar7 = uVar7 - *(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
          }
          *(int *)(*(int *)(uVar7 * 4 + *(int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4)) + ((((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) & 3) * 4)
               = iVar2;
        }
        uVar14 = uVar14 + 1;
        uStack_70 = CONCAT44((((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF),uVar14);
      } while (uVar14 != uVar4);
    }
  }
  return;
}

