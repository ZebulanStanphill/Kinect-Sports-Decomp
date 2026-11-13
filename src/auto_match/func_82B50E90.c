typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE250();
extern int fn_82ABE870();
extern int fn_82AF87E0();
extern int fn_82B503A8();
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_3c;


void fn_82B50E90(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 *puVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  int iStack_40;
  unsigned int uStack_3c;
  int iStack_38;
  
  puVar5 = (unsigned int *)fn_82ABE250(param_1,8,3);
  iStack_38 = 0;
  puVar5[1] = (unsigned int)puVar5 | 1;
  *puVar5 = (unsigned int)(puVar5 + 1) | 1;
  iStack_40 = *(int *)(param_1 + 0x240);
  uStack_3c = -(unsigned int)((*(unsigned int *)(iStack_40 + 4) & 1) == 0) & *(unsigned int *)(iStack_40 + 4);
  do {
    if (uStack_3c == 0) {
LAB_82b50f08:
      bVar3 = true;
    }
    else {
      bVar3 = false;
      if (iStack_38 == *(int *)(uStack_3c + 8)) goto LAB_82b50f08;
    }
    if (bVar3) {
      puVar8 = (unsigned int *)fn_82B503A8(*(unsigned int *)(param_1 + 0x244));
      *puVar8 = puVar5;
      puVar8[1] = *(unsigned int *)(param_1 + 0x20);
      uVar2 = puVar8[2];
      uVar4 = *(unsigned int *)(param_1 + 0x28) >> 0x1d & 1;
      puVar8[2] = uVar4 | uVar2 & 0xfffffffe;
      puVar8[2] = *(unsigned int *)(param_1 + 0x28) & 2 | uVar4 | uVar2 & 0xfffffffc;
      return;
    }
    puVar6 = (unsigned __int64 *)fn_82ABE870(&iStack_40);
    uVar9 = *puVar6;
    if ((puVar5[1] & 1) == 0) {
      uVar2 = *puVar5 & 0xfffffffe;
      iVar7 = uVar2 - 4;
      if ((iVar7 == 0) || (*(unsigned int *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82b50f50;
    }
    else {
LAB_82b50f50:
      iVar7 = fn_82AF87E0(puVar5,1);
    }
    iVar1 = *(int *)(iVar7 + 8);
    *(int *)(iVar7 + 8) = iVar1 + 1;
    *(unsigned __int64 *)((iVar1 + 2) * 8 + iVar7) = uVar9;
  } while( true );
}

