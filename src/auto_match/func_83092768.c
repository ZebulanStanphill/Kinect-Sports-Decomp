extern int fn_82CE5410();
extern int fn_83090E68();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int uStack_48;


/* WARNING: Removing unreachable block (ram,0x83092828) */

void fn_83092768(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_50;
  int iStack_4c;
  unsigned int uStack_48;
  int iStack_44;
  
  iVar5 = 0;
  uVar1 = param_2[1];
  iStack_4c = 0;
  piVar3 = (int *)fn_82CE5410();
  uStack_48 = uVar1 | 0x80000000;
  iVar2 = *piVar3;
  *piVar3 = (uVar1 * 4 + 0x7f & 0xffffff80) + iVar2;
  if (0 < param_2[1]) {
    iVar4 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(int *)(iVar4 + iVar2) =
           *(int *)(*(int *)(*param_2 + iVar4) + 0x14) * 0x10 + *(int *)(param_1 + 0xa0);
      iVar4 = iVar4 + 4;
      iStack_4c = iVar5;
    } while (iVar5 < param_2[1]);
  }
  iStack_50 = iVar2;
  iStack_44 = iVar2;
  fn_83090E68(param_1,&iStack_50,param_3);
  piVar3 = (int *)fn_82CE5410();
  *piVar3 = iVar2;
  fn_82CE5410();
  return;
}

