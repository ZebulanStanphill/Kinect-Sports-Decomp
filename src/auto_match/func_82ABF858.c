typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA6648();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82AD6090();


unsigned int fn_82ABF858(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,6);
  puVar3 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar3 | 1;
  while( true ) {
    uVar10 = *(unsigned int *)(param_2 + 0x1c);
    uVar1 = uVar10 & 1;
    for (; ((uVar10 & 1) == 0 && (uVar10 != 0)); uVar10 = *(unsigned int *)((uVar10 & 0xfffffffe) + 0x28)) {
      uVar5 = *(unsigned int *)(uVar10 + 8) >> 7 & 0x7f;
      if ((uVar5 == 0) || (bVar4 = true, 0x52 < uVar5)) {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar10;
      }
      if ((uVar5 < 0x60) || (bVar4 = true, 0x66 < uVar5)) {
        bVar4 = false;
      }
      if (bVar4) {
        return uVar10;
      }
    }
    puVar9 = *(unsigned int **)(param_2 + 0xc);
    if ((puVar9 == (unsigned int *)0x0) || (bVar4 = true, puVar9[2] != 0)) {
      bVar4 = false;
    }
    if (!bVar4) break;
    if (puVar9 == (unsigned int *)0x0) goto LAB_82abfa48;
    param_2 = *puVar9;
LAB_82abfa40:
    if (param_2 == 0) {
LAB_82abfa48:
      if (((*puVar3 & 1) != 0) || (*puVar3 == 0)) {
        return 0;
      }
      puVar9 = (unsigned int *)(*puVar6 & 0xfffffffe);
      puVar8 = puVar9 + -1;
      uVar10 = puVar9[1] - 1;
      param_2 = puVar8[puVar9[1] + 3];
      puVar9[1] = uVar10;
      if (uVar10 == 0) {
        *(unsigned int *)(*puVar9 & 0xfffffffe) = *puVar8;
        *(unsigned int *)(*puVar8 & 0xfffffffe) = *puVar9;
        fn_82AA6648(puVar6,puVar8,((unsigned __int64)puVar9[2] + 4 & 0x3fffffff) << 2);
      }
    }
  }
  if ((uVar1 == 0) && (uVar10 = *(unsigned int *)(param_2 + 0x18) & 0xfffffffe, uVar10 != 0x28)) {
    uVar1 = *(unsigned int *)(uVar10 - 0x20) >> 7 & 0x7f;
    if ((uVar1 == 0x56) || (bVar4 = false, uVar1 == 0x57)) {
      bVar4 = true;
    }
    if (bVar4) {
      uVar1 = *(unsigned int *)(uVar10 - 0x20);
      iVar7 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
      param_2 = *(unsigned int *)((*(unsigned int *)(iVar7 + (uVar10 - 0x38)) & 0xfffffffc) + 0x1c);
      for (; puVar9 != (unsigned int *)0x0; puVar9 = (unsigned int *)puVar9[2]) {
        uVar10 = *puVar9;
        if (uVar10 != param_2) goto LAB_82abf9d4;
      }
      uVar10 = 0;
LAB_82abf9d4:
      if ((*puVar3 & 1) == 0) {
        uVar1 = *puVar6 & 0xfffffffe;
        iVar7 = uVar1 - 4;
        if ((iVar7 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U)) goto LAB_82abfa04;
      }
      else {
LAB_82abfa04:
        iVar7 = fn_82AD6090(puVar6,1);
      }
      iVar2 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar2 + 1;
      *(unsigned int *)((iVar2 + 4) * 4 + iVar7) = uVar10;
      goto LAB_82abfa40;
    }
  }
  param_2 = *(unsigned int *)((param_2 & 0xfffffffe) + 4);
  if ((param_2 & 1) == 0) goto LAB_82abfa40;
  goto LAB_82abfa48;
}

