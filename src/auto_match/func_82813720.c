typedef unsigned char bool;
#define true 1
extern int fn_8262F6A8();
extern int fn_82811400();
extern int fn_82813428();
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82813720(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 *puVar7;
  char cVar9;
  int *piVar8;
  unsigned __int64 uVar6;
  __int64 lVar10;
  unsigned int *puVar11;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned char bVar12;
  unsigned __int64 uStack_70;
  unsigned int uStack_68;
  unsigned __int64 *puStack_64;
  unsigned __int64 uStack_50;
  unsigned int uStack_48;
  unsigned __int64 *puStack_44;
  
  lVar10 = param_1 + 0x18;
LAB_8281373c:
  do {
    puVar11 = (unsigned int *)lVar10;
    uVar1 = *puVar11;
    if (uVar1 == 0) {
      if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed(1,0,lVar10);
        *puVar11 = uVar5;
        in_cr0 = 2;
      }
      if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_8281373c;
    }
    else if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar10);
      *puVar11 = uVar5;
      in_cr0 = 2;
    }
    if (uVar1 == 0) {
      puVar7 = (unsigned __int64 *)param_1;
      uStack_70 = *puVar7;
      puStack_44 = puVar7 + 1;
      uStack_50 = puVar7[1];
      puStack_64 = puVar7;
      while( true ) {
        uStack_68 = 0;
        cVar9 = fn_82813428(&uStack_70);
        if (cVar9 != '\0') break;
        uStack_70 = *puStack_64;
      }
      bVar12 = (puVar7[2] != 0) << 1;
      if (puVar7[2] == 0) {
        sync(1);
      }
      iVar4 = (((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF);
      while (iVar4 != 0) {
        iVar2 = *(int *)(iVar4 + 0x400);
        piVar8 = (int *)fn_8262F6A8();
        iVar3 = *piVar8;
        uVar6 = fn_82811400(&uStack_70,0x10);
        (**(int (***)())(iVar3 + 0x18))(piVar8,iVar4,uVar6);
        iVar4 = iVar2;
      }
      uStack_48 = 0;
      fn_82813428(&uStack_50);
      do {
        if (*puVar11 != 1) {
          if (in_RESERVE == '\0') {
            return;
          }
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar11,0,lVar10);
          *puVar11 = uVar1;
          return;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar10);
          *puVar11 = uVar1;
          bVar12 = 2;
        }
      } while (!(bool)(bVar12 >> 1 & 1));
      return;
    }
  } while( true );
}

