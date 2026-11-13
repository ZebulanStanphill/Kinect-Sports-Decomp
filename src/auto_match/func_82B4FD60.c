typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82ABE870();
extern int fn_82AF87E0();
extern int fn_82B20BC0();
extern int fn_82B46498();
extern unsigned int iStack_38;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B4FD60(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned __int64 *puVar5;
  int iVar6;
  unsigned char *puVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_40 [8];
  int iStack_38;
  
  fn_82B20BC0(param_2);
  fn_82B20BC0(*(unsigned int *)(param_1 + 0x240));
  uVar8 = (*(unsigned int **)(param_1 + 0x244))[1];
  if (((uVar8 & 1) == 0) && (uVar8 != 0)) {
    if ((uVar8 & 1) == 0) {
      iVar6 = (**(unsigned int **)(param_1 + 0x244) & 0xfffffffe) - 4;
    }
    else {
      iVar6 = 0;
    }
    iStack_38 = 0;
    iVar6 = *(int *)(iVar6 + 8) * 0xc + iVar6;
    puVar7 = (unsigned char *)(iVar6 + 4);
    uVar8 = *(unsigned int *)(*(int *)(iVar6 + 4) + 4);
    uVar8 = -(unsigned int)((uVar8 & 1) == 0) & uVar8;
    while( true ) {
      if ((uVar8 == 0) || (bVar4 = false, iStack_38 == *(int *)(uVar8 + 8))) {
        bVar4 = true;
      }
      if (bVar4) break;
      puVar5 = (unsigned __int64 *)fn_82ABE870(auStack_40);
      puVar1 = *(unsigned int **)(param_1 + 0x240);
      uVar9 = *puVar5;
      if ((puVar1[1] & 1) == 0) {
        uVar3 = *puVar1 & 0xfffffffe;
        iVar6 = uVar3 - 4;
        if ((iVar6 == 0) || (*(unsigned int *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U)) goto LAB_82b4fe58;
      }
      else {
LAB_82b4fe58:
        iVar6 = fn_82AF87E0(puVar1,1);
      }
      iVar2 = *(int *)(iVar6 + 8);
      *(int *)(iVar6 + 8) = iVar2 + 1;
      *(unsigned __int64 *)((iVar2 + 2) * 8 + iVar6) = uVar9;
    }
  }
  else {
    puVar7 = auStack_40;
    iStack_38 = 0;
  }
  fn_82B46498(param_1,puVar7);
  return;
}

