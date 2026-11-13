extern unsigned int *auStack_68;
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82B25248();
extern int fn_82B82D28();
extern int fn_82B84350();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82B28AC0(int param_1,unsigned int param_2,unsigned int *param_3,int param_4,unsigned int param_5,unsigned __int64 param_6
                  ,unsigned __int64 param_7)

{
  unsigned int uVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int auStack_68;
  
  fn_82B25248(param_1,param_3[3],*(unsigned int *)(param_1 + 0x28c));
  uVar5 = *param_3;
  uVar12 = (unsigned __int64)(uVar5 >> 0x19) & 7;
  if (uVar12 == 1) {
    puVar9 = (unsigned int *)(param_3[3] + 4);
    for (puVar8 = (unsigned int *)*puVar9; puVar8 != param_3; puVar8 = (unsigned int *)puVar8[2]) {
      puVar9 = puVar8 + 2;
    }
    *puVar9 = param_3[2];
    param_3[2] = *(unsigned int *)(param_5 + 4);
    *(unsigned int **)(param_5 + 4) = param_3;
    param_3[3] = param_5;
    *param_3 = (unsigned int)((param_6 & 0xffffffff) << 5) & 0x360 | 0x1c80 | *param_3 & 0xfffffc80 |
               (unsigned int)param_7 & 0x1f;
  }
  else {
    uVar3 = fn_82B84350(param_1,*(unsigned int *)(param_2 + 0x1c),0,uVar12);
    uVar1 = uVar3 & 0xfffffffe;
    puVar8 = (unsigned int *)((param_2 & 0xfffffffe) + 0x24);
    uVar11 = 0;
    *(unsigned int *)(uVar1 + 0x24) = *puVar8;
    *(unsigned int *)(*puVar8 & 0xfffffffe) = uVar1;
    *(unsigned int *)(uVar1 + 0x28) = param_2 & 0xfffffffe;
    *puVar8 = uVar1 + 0x28;
    if ((uVar5 >> 0x19 & 7) != 0) {
      puVar10 = (unsigned int *)(uVar3 + 0x2c);
      do {
        uVar6 = param_6;
        uVar7 = param_7;
        uVar5 = param_5;
        if ((int)uVar11 != param_4) {
          fn_82B82D28(param_3,uVar11,&auStack_68,&uStack_6c,&uStack_70,0,0,0);
          uVar6 = (unsigned __int64)uStack_6c;
          uVar7 = (unsigned __int64)uStack_70;
          uVar5 = auStack_68;
        }
        uVar2 = fn_82AD1918(param_1,uVar5,uVar6,uVar7);
        uVar4 = fn_82AD1978(uVar3,uVar2);
        uVar11 = uVar11 + 1;
        *puVar10 = uVar4;
        puVar10 = puVar10 + 1;
      } while ((uVar11 & 0xffffffff) < uVar12);
    }
    puVar9 = (unsigned int *)(param_3[3] + 4);
    for (puVar8 = (unsigned int *)*puVar9; puVar8 != param_3; puVar8 = (unsigned int *)puVar8[2]) {
      puVar9 = puVar8 + 2;
    }
    *puVar9 = param_3[2];
    param_3[2] = *(unsigned int *)(uVar3 + 4);
    *(unsigned int **)(uVar3 + 4) = param_3;
    param_3[3] = uVar3;
    *param_3 = *param_3 & 0xffffe000 | 0x1c80;
    fn_82B25248(param_1,uVar3,*(unsigned int *)(param_1 + 0x28c));
  }
  return;
}

