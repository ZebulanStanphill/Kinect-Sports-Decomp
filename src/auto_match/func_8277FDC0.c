#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8277BB80();
extern int fn_8277F4F0();
extern int fn_8277F650();
extern unsigned int iStack_74;
extern unsigned int iStack_80;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_8277FDC0(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  struct { int first; int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  int iStack_74;
  char cStack_70;
  
  iVar7 = param_2;
  if (*(int *)(param_3 + 0x18) != -1) {
    iVar7 = *(int *)(param_3 + 0x18) * 0xc + *(int *)(param_1 + 0x128);
  }
  stack_pair_90.second = *(int *)(param_3 + 0x10);
  stack_pair_90.first = param_1 + 0x128;
  uStack_84 = *(unsigned int *)(param_3 + 0xc);
  uStack_7c = *(unsigned int *)(param_3 + 8);
  iStack_74 = *(int *)(param_3 + 4);
  uStack_88 = *(unsigned int *)(param_3 + 0x14);
  iVar1 = *(int *)(*(int *)(param_2 + 4) + 0x10);
  uStack_78 = *(unsigned int *)(stack_pair_90.second * 0xc + *(int *)(param_1 + 0x128) + 8);
  cStack_70 = '\x01';
  iStack_80 = param_2;
  do {
    cVar6 = cStack_70;
    iVar5 = iStack_74;
    uVar4 = uStack_78;
    uVar3 = uStack_7c;
    iVar8 = iStack_80;
    if (cStack_70 == '\0') {
      if (uStack_7c != uStack_78) {
        fn_8277F650(param_1,iStack_80,iVar1);
        uVar2 = *(unsigned int *)(iVar8 + 4);
        if ((int)param_4 != -1) {
          fn_8277F4F0(param_1,uVar2,param_4 | 0x40000000);
          fn_8277F4F0(param_1,uVar2,param_4 << 0x20 | param_4 & 0xbfffffff);
        }
        goto LAB_8277febc;
      }
    }
    else {
LAB_8277febc:
      uVar2 = *(unsigned int *)(iVar8 + 4);
      if (uVar3 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar2,uVar3 | 0x40000000);
      }
      if (uVar4 != 0xffffffff) {
        fn_8277F4F0(param_1,uVar2,CONCAT44(uVar4,uVar4) & 0xffffffffbfffffff);
      }
    }
    if ((iVar5 != iVar1) || (*(int *)(iVar8 + 4) == 0)) {
      if (*(char *)(*(int *)(param_1 + 0x24) + iVar5) == '\0') {
        *(unsigned int *)(iVar8 + 4) = 0;
      }
      else {
        if (cVar6 != '\0') {
          iVar8 = iVar7;
          iStack_80 = iVar7;
        }
        fn_8277F650(param_1,iVar8,iVar5);
        uVar2 = *(unsigned int *)(iVar8 + 4);
        if (uVar3 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar2,uVar3 | 0x40000000);
        }
        if (uVar4 != 0xffffffff) {
          fn_8277F4F0(param_1,uVar2,CONCAT44(uVar4,uVar4) & 0xffffffffbfffffff);
        }
      }
    }
    cVar6 = fn_8277BB80(&stack_pair_90.first,0xffffffff8277ba88);
    if (cVar6 == '\0') {
      *(unsigned int *)(param_3 + 0x14) = 0;
      return;
    }
  } while( true );
}

