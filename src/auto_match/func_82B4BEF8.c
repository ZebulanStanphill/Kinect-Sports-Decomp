typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_38;
extern int fn_82ABE9F0();
extern int fn_82B4B9A8();
extern int fn_82B85298();
extern int fn_82B8AB60();
extern int memcpy();
extern unsigned int uStack_40;


void fn_82B4BEF8(int param_1,unsigned __int64 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 *puVar5;
  unsigned int *puVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uStack_40;
  unsigned char auStack_38 [1];
  
  uVar10 = (unsigned int)*param_2;
  if ((uVar10 & 3) != 0) {
    if ((uVar10 & 3) != 3) {
      return;
    }
    if ((uVar10 >> 0x10 & 1) == 0) {
      piVar2 = *(int **)param_2;
      *(int *)param_2 = *piVar2;
      uVar10 = piVar2[1];
    }
    else {
      iVar4 = *(int *)param_2;
      uVar8 = 0;
      uVar10 = *(unsigned int *)(iVar4 + 8) >> 0xe;
      uVar9 = uVar10 & 0x3fff;
      if ((uVar10 & 0x3fff) != 0) {
        puVar6 = (unsigned int *)(iVar4 + 0x10);
        do {
          if (((*puVar6 & 3) == 3) || ((*puVar6 & 3) == 0)) break;
          uVar8 = uVar8 + 1;
          puVar6 = puVar6 + 2;
        } while (uVar8 < uVar9);
      }
      if (uVar8 < uVar9) {
        iVar11 = uVar9 * 8 + 0xc;
        iVar3 = fn_82ABE9F0(param_1,iVar11,0x20);
        memcpy(iVar3,iVar4,iVar11);
        uVar10 = 0;
        if ((*(unsigned int *)(iVar3 + 8) & 0xfffc000) != 0) {
          iVar4 = iVar3 + 0xc;
          do {
            fn_82B4BEF8(param_1,iVar4);
            uVar10 = uVar10 + 1;
            iVar4 = iVar4 + 8;
          } while (uVar10 < (*(unsigned int *)(iVar3 + 8) >> 0xe & 0x3fff));
        }
        uVar7 = *param_2;
        *(int *)param_2 = iVar3;
        *(unsigned int *)((int)param_2 + 4) = (unsigned int)uVar7 | 0x10003;
      }
      iVar4 = fn_82B4B9A8(param_1,param_2);
      uVar7 = *param_2;
      *(int *)param_2 = iVar4;
      uVar10 = (unsigned int)uVar7 & 0x10000 | 1;
    }
    *(unsigned int *)((int)param_2 + 4) = uVar10;
    return;
  }
  uVar8 = *(unsigned int *)(param_1 + 0x234);
  if (*(int *)(uVar8 + 0x50) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((uVar10 >> 0xf & 0x1fffc) + *(int *)(uVar8 + 0x50));
  }
  uStack_40 = (unsigned __int64)(((unsigned __int64)(uStack_40) >> 32) & 0xFFFFFFFF);
  if (iVar4 != 0) {
    uVar7 = *(unsigned __int64 *)((uVar10 & 0xfffc) * 2 + iVar4);
    uStack_40 = ((((unsigned __int64)(uStack_40)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(uVar7 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    bVar1 = (((unsigned __int64)(uStack_40) >> 0) & 0xFFFFFFFF) != 0;
    uStack_40 = uVar7;
    if ((bVar1) && (((uVar7 & 3) == 1 || ((uVar7 & 3) == 2)))) {
      bVar1 = true;
      goto LAB_82b4c08c;
    }
  }
  bVar1 = false;
LAB_82b4c08c:
  if (!bVar1) {
    if ((uVar8 == (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) ||
       (((*(unsigned int *)((uVar10 >> 0x11) * 0x28 + *(int *)(param_1 + 0xc) + 4) & 4) == 0 &&
        ((*(unsigned int *)(param_1 + 0x2c) & 2) == 0)))) {
      puVar5 = (unsigned __int64 *)
               fn_82B8AB60(auStack_38,param_1,uVar10 >> 0x11,uVar10 >> 2 & 0x3fff);
    }
    else {
      puVar5 = (unsigned __int64 *)
               fn_82B85298(&uStack_40,param_1,uVar8,uVar10 >> 0x11,uVar10 >> 2 & 0x3fff);
    }
    uStack_40 = *puVar5;
  }
  *param_2 = uStack_40;
  return;
}

