#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8277BB80();
extern int fn_8277F4F0();
extern int fn_8277F5D8();
extern int fn_8277F650();
extern int fn_82F68CC0();
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;


void fn_8277FB80(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  char cVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  unsigned int uStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  int iStack_74;
  char cStack_70;
  
  iVar8 = param_2;
  if (*(int *)(param_3 + 0x18) != -1) {
    iVar8 = *(int *)(param_3 + 0x18) * 0xc + *(int *)(param_1 + 0x128);
  }
  iStack_8c = *(int *)(param_3 + 0x10);
  iStack_90 = param_1 + 0x128;
  iStack_88 = *(int *)(param_3 + 0x14);
  uStack_84 = *(unsigned int *)(param_3 + 0xc);
  uVar1 = *(unsigned int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 4);
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 0x10);
  uVar9 = *(unsigned int *)(iStack_8c * 0xc + *(int *)(param_1 + 0x128) + 8);
  cStack_70 = '\x01';
  iStack_80 = param_2;
  uStack_7c = uVar1;
  uStack_78 = uVar9;
  iStack_74 = iVar2;
  uVar6 = fn_8277F5D8(param_1,0);
  fn_82F68CC0(uVar6,*(unsigned int *)(param_2 + 4),0x18);
  puVar4 = *(unsigned int **)(param_2 + 4);
  *puVar4 = 0;
  puVar4[1] = 0xffffffff;
  puVar4[2] = 0xffffffff;
  puVar4[3] = 0xffffffff;
  puVar4[4] = iVar3;
  puVar4[5] = 0;
  do {
    if (iStack_88 == 0) {
      *(int *)(param_2 + 4) = (int)uVar6;
      uVar10 = uVar6;
      if (uVar1 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar6,uVar1 | 0x40000000);
      }
joined_r0x8277fd04:
      if (uVar9 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar10,CONCAT44(uVar9,uVar9) & 0xffffffffbfffffff);
      }
    }
    else if (uVar1 != uVar9) {
      fn_8277F650(param_1,param_2,iVar3);
      uVar5 = *(unsigned int *)(param_2 + 4);
      if ((int)param_4 != -1) {
        fn_8277F4F0(param_1,uVar5,param_4 | 0x40000000);
        fn_8277F4F0(param_1,uVar5,param_4 << 0x20 | param_4 & 0xbfffffff);
      }
      uVar10 = (unsigned __int64)*(unsigned int *)(param_2 + 4);
      if (uVar1 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar10,uVar1 | 0x40000000);
      }
      goto joined_r0x8277fd04;
    }
    if ((iVar2 != iVar3) || (*(int *)(param_2 + 4) == 0)) {
      if (*(char *)(*(int *)(param_1 + 0x24) + iVar2) == '\0') {
        *(unsigned int *)(param_2 + 4) = 0;
      }
      else {
        if (cStack_70 != '\0') {
          param_2 = iVar8;
          iStack_80 = iVar8;
        }
        fn_8277F650(param_1,param_2,iVar2);
        uVar5 = *(unsigned int *)(param_2 + 4);
        if (uVar1 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar5,uVar1 | 0x40000000);
        }
        if (uVar9 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar5,CONCAT44(uVar9,uVar9) & 0xffffffffbfffffff);
        }
      }
    }
    cVar7 = fn_8277BB80(&iStack_90,0xffffffff8277ba88);
    uVar9 = uStack_78;
    iVar2 = iStack_74;
    uVar1 = uStack_7c;
    param_2 = iStack_80;
    if (cVar7 == '\0') {
      *(unsigned int *)(param_3 + 0x14) = 0;
      return;
    }
  } while( true );
}

