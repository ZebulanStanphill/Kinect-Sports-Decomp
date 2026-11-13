typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B17520();
extern int fn_82B189C0();


unsigned __int64 fn_82B26678(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  
  uVar8 = fn_82B189C0(param_1,param_3);
  if ((uVar8 & 0xff) == 0) {
    return uVar8;
  }
  puVar9 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar3 = puVar9 + 1;
  puVar9[1] = (unsigned int)puVar9 | 1;
  *puVar9 = (unsigned int)puVar3 | 1;
  do {
    fn_82B17520(param_1,param_2);
    uVar13 = *(unsigned int *)(param_2 + 8);
    iVar10 = fn_82ABDD90(param_1,uVar13 >> 7 & 0x7f,uVar13 >> 0x13 & 7,uVar13 >> 0xe & 7);
    iVar10 = *(int *)(iVar10 + (param_2 - 0x10));
    for (uVar13 = *(unsigned int *)(param_1 + 4); ((uVar13 & 1) == 0 && (uVar13 != 0));
        uVar13 = *(unsigned int *)((uVar13 & 0xfffffffe) + 4)) {
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar10 + 0x30) & 0x7ffff;
      if ((*(unsigned int *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar13 + 0x28)) &
          1 << ((unsigned int)uVar4 & 0x1f)) != 0) {
        for (uVar1 = *(unsigned int *)(uVar13 + 0x24); ((uVar1 & 1) == 0 && (uVar1 != 0));
            uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
          uVar7 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
          if ((uVar7 == 0x56) || (bVar6 = false, uVar7 == 0x57)) {
            bVar6 = true;
          }
          if (bVar6) {
            if ((*puVar3 & 1) == 0) {
              uVar7 = *puVar9 & 0xfffffffe;
              iVar11 = uVar7 - 4;
              if ((iVar11 == 0) || (*(unsigned int *)(uVar7 + 8) < *(int *)(uVar7 + 4) + 1U))
              goto LAB_82b267ac;
            }
            else {
LAB_82b267ac:
              iVar11 = fn_82AD6090(puVar9,1);
            }
            iVar2 = *(int *)(iVar11 + 8);
            *(int *)(iVar11 + 8) = iVar2 + 1;
            *(unsigned int *)((iVar2 + 4) * 4 + iVar11) = uVar1;
          }
        }
      }
    }
    if (((*puVar3 & 1) != 0) || (*puVar3 == 0)) {
      *puVar9 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar9;
      return uVar8;
    }
    puVar5 = (unsigned int *)(*puVar9 & 0xfffffffe);
    puVar12 = puVar5 + -1;
    uVar13 = puVar5[1] - 1;
    param_2 = puVar12[puVar5[1] + 3];
    puVar5[1] = uVar13;
    if (uVar13 == 0) {
      *(unsigned int *)(*puVar5 & 0xfffffffe) = *puVar12;
      *(unsigned int *)(*puVar12 & 0xfffffffe) = *puVar5;
      fn_82AA6648(puVar9,puVar12,((unsigned __int64)puVar5[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

