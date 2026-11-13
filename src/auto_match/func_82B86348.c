extern int fn_82ABDD90();
extern int fn_82AC6560();
extern int fn_82B83B68();
extern int fn_82F6E018();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


unsigned int fn_82B86348(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar11;
  double dVar12;
  unsigned int uStack0000002c;
  unsigned int uVar10;
  
  uStack0000002c = param_4;
  uVar2 = fn_82ABDD90(param_1,0x7d,0,param_2);
  uVar3 = fn_82AC6560(param_1,uVar2,0x23);
  fn_82B83B68(uVar3,param_1,-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4),
                0x7d,0,param_2);
  if ((param_2 & 0xffffffff) != 0) {
    puVar7 = (unsigned int *)(param_3 + -4);
    puVar5 = (unsigned int *)(uVar3 + 0x28);
    uVar11 = param_2;
    do {
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar7;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if ((param_4 & 0xff) != 0) {
    *(unsigned int *)(uVar3 + 0x14) = (param_4 & 0xff) << 2 | *(unsigned int *)(uVar3 + 0x14) & 0xfffffc03;
  }
  uVar8 = uVar3 & 0xfffffffe;
  uVar6 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(uVar8 + 0x24) = *(unsigned int *)(uVar6 + 0x10);
  *(unsigned int *)(*(unsigned int *)(uVar6 + 0x10) & 0xfffffffe) = uVar8;
  *(unsigned int *)(uVar8 + 0x28) = uVar6 - 0x14 | 1;
  *(unsigned int *)(uVar6 + 0x10) = uVar8 + 0x28;
  if ((param_2 & 0xffffffff) != 0) {
    uVar6 = 0;
    uVar8 = 0;
    dVar12 = (double)lbl_821AAD20;
    do {
      uVar9 = 0;
      uVar1 = ((2 << (uVar8 + 1 & 0x1f)) - 1U &
               *(unsigned int *)((int)&stack0x0000002c + (uVar8 >> 3 & 0x1ffffffc)) & -1 << (uVar8 & 0x1f))
              >> (uVar8 & 0x1f);
      if (uVar1 == 0) {
        if (dVar12 <= (double)*(float *)(uVar6 + param_3)) {
          uVar9 = 2;
        }
        if ((double)*(float *)(uVar6 + param_3) <= dVar12) {
          uVar9 = uVar9 | 1;
        }
        if ((float)(__int64)(int)*(float *)(uVar6 + param_3) == *(float *)(uVar6 + param_3)) {
          uVar9 = uVar9 | 4;
        }
        iVar4 = fn_82F6E018();
        if ((iVar4 < 1) || (2 < iVar4)) {
          uVar9 = uVar9 | 8;
        }
      }
      else {
        iVar4 = *(int *)(uVar6 + param_3);
        uVar10 = 0xc;
        if (uVar1 == 1) {
          if (-1 < iVar4) {
            uVar10 = 0xe;
            uVar9 = 0xe;
            if (0 < iVar4) goto LAB_82b8652c;
          }
          uVar9 = uVar10 | 1;
        }
        else {
          uVar9 = 0xe;
          if (iVar4 == 0) {
            uVar9 = 0xf;
          }
        }
      }
LAB_82b8652c:
      uVar9 = uVar9 << (uVar6 & 0x3f);
      if ((*(unsigned int *)(uVar3 + 0xc) & uVar9 & 0xffff) != uVar9) {
        *(unsigned short *)(uVar3 + 0xe) = (unsigned short)*(unsigned int *)(uVar3 + 0xc) | (unsigned short)uVar9;
      }
      param_2 = param_2 - 1;
      uVar8 = uVar8 + 2;
      uVar6 = uVar6 + 4;
    } while (param_2 != 0);
  }
  return uVar3;
}

