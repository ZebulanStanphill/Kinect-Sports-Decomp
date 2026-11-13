extern int fn_82ABE870();
extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82AF8780();
extern int fn_82B47660();
extern unsigned int uStack_64;
extern unsigned int uStack_68;


void fn_82B4E6F0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 *puVar3;
  unsigned __int64 *puVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned int uStack_68;
  unsigned int uStack_64;
  
  uStack_68 = *(unsigned int *)(param_4 + 4);
  uStack_64 = *(unsigned int *)(param_4 + 8);
  uVar1 = *(unsigned int *)(param_2 + 4);
  uVar2 = *(unsigned int *)(param_2 + 8);
  uVar9 = uVar1;
  uVar10 = uVar2;
  iVar13 = param_4;
  if ((param_3 & 0xffffffff) == (param_5 & 0xffffffff)) {
    uVar14 = param_3 & 0xffffffff;
    while (uVar14 != 0) {
      puVar3 = (unsigned __int64 *)fn_82ABE870(param_2);
      puVar4 = (unsigned __int64 *)fn_82ABE870(param_4);
      uVar8 = *puVar3;
      *(unsigned int *)puVar3 = *(unsigned int *)puVar4;
      *(unsigned int *)((int)puVar3 + 4) = *(unsigned int *)((int)puVar4 + 4);
      *puVar4 = uVar8;
      param_3 = param_3 - 1;
      uVar14 = param_3;
    }
  }
  else {
    uVar14 = param_3;
    if ((param_3 & 0xffffffff) < (param_5 & 0xffffffff)) {
      uVar14 = param_5;
      param_5 = param_3;
      uVar9 = uStack_68;
      uVar10 = uStack_64;
      iVar13 = param_2;
      param_2 = param_4;
      uStack_64 = uVar2;
      uStack_68 = uVar1;
    }
    lVar11 = (param_5 & 0x1fffffff) << 3;
    iVar5 = fn_82ABE9F0(param_1,lVar11,0);
    if ((param_5 & 0xffffffff) != 0) {
      uVar12 = param_5;
      puVar7 = (unsigned int *)(iVar5 + -8);
      do {
        puVar6 = (unsigned int *)fn_82ABE870(iVar13);
        uVar12 = uVar12 - 1;
        puVar7[2] = *puVar6;
        puVar7[3] = puVar6[1];
        puVar7 = puVar7 + 2;
      } while (uVar12 != 0);
    }
    fn_82B47660(param_2,param_5);
    uVar12 = uVar14 & 0xffffffff;
    while (uVar12 != 0) {
      puVar7 = (unsigned int *)fn_82AF8780(param_2);
      puVar6 = (unsigned int *)fn_82AF8780(iVar13);
      *puVar6 = *puVar7;
      puVar6[1] = puVar7[1];
      uVar14 = uVar14 - 1;
      uVar12 = uVar14;
    }
    *(unsigned int *)(param_2 + 4) = uVar9;
    *(unsigned int *)(param_2 + 8) = uVar10;
    if ((param_5 & 0xffffffff) != 0) {
      puVar3 = (unsigned __int64 *)(iVar5 + -8);
      do {
        puVar4 = (unsigned __int64 *)fn_82ABE870(param_2);
        puVar3 = puVar3 + 1;
        param_5 = param_5 - 1;
        *puVar4 = *puVar3;
      } while (param_5 != 0);
    }
    fn_82AC6808(param_1,iVar5,lVar11,0);
  }
  *(unsigned int *)(param_2 + 4) = uVar9;
  *(unsigned int *)(param_2 + 8) = uVar10;
  *(unsigned int *)(iVar13 + 4) = uStack_68;
  *(unsigned int *)(iVar13 + 8) = uStack_64;
  return;
}

