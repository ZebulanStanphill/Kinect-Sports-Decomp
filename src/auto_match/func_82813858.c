typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_8262F6A8();
extern int fn_82811400();
extern int fn_82813428();
extern unsigned int iStack_68;
extern unsigned int uStack_50;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82813858(__int64 param_1,__int64 *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  char cVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  char in_RESERVE;
  unsigned char bVar11;
  __int64 lStack_70;
  int iStack_68;
  __int64 *plStack_64;
  unsigned char auStack_60 [16];
  unsigned int uStack_50;
  
  plStack_64 = (__int64 *)((int)param_1 + 8);
  lVar8 = *plStack_64;
  lStack_70 = ((((unsigned __int64)(lStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)lVar8 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uVar4 = (((unsigned __int64)(lStack_70) >> 0) & 0xFFFFFFFF);
  iStack_68 = (((unsigned __int64)(lStack_70) >> 0) & 0xFFFFFFFF);
  if (*param_2 == **(__int64 **)((int)param_2 + 0xc)) {
    lVar9 = param_1 + 0x18;
    bVar3 = false;
    do {
      puVar10 = (unsigned int *)lVar9;
      uVar1 = *puVar10;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar9);
          *puVar10 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(1,0,lVar9);
        *puVar10 = uVar2;
        bVar3 = true;
      }
    } while (!bVar3);
    if (uVar1 == 0) {
      bVar11 = (lVar8 != *plStack_64) << 1;
      if (lVar8 == *plStack_64) {
        lStack_70 = lVar8;
        fn_82811400(auStack_60,0x10);
        uStack_50 = 8;
        piVar5 = (int *)fn_8262F6A8();
        iVar6 = (**(int (***)())(*piVar5 + 0xc))(piVar5,0x404,auStack_60);
        *(unsigned int *)(iVar6 + 0x400) = uVar4;
        piVar5 = (int *)(iVar6 + 0x3e0);
        lVar8 = 0x3f;
        do {
          *piVar5 = (int)(piVar5 + 4);
          piVar5 = piVar5 + -4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        do {
          do {
            *param_2 = **(__int64 **)((int)param_2 + 0xc);
            *(unsigned int *)(param_2 + 1) = *(unsigned int *)param_2;
            *(unsigned int *)(iVar6 + 0x3f0) = *(unsigned int *)param_2;
          } while (*param_2 != **(__int64 **)((int)param_2 + 0xc));
          if (*(__int64 *)((int)param_1 + 0x10) == 0) {
            sync(1);
          }
          *(int *)(param_2 + 1) = iVar6;
          cVar7 = fn_82813428(param_2);
          bVar11 = (cVar7 == '\0') << 1;
        } while (cVar7 == '\0');
        iStack_68 = iVar6;
        fn_82813428(&lStack_70);
      }
      do {
        if (*puVar10 != 1) {
          if (in_RESERVE == '\0') {
            return;
          }
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar10,0,lVar9);
          *puVar10 = uVar1;
          return;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar9);
          *puVar10 = uVar1;
          bVar11 = 2;
        }
      } while (!(bool)(bVar11 >> 1 & 1));
    }
  }
  return;
}

