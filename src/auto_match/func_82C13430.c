extern int fn_82C038C8();
extern unsigned int lbl_820ED0D8;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82C13430(__int64 *param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  double dVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int iVar20;
  unsigned __int64 uStack_50;
  
  uStack_50 = (unsigned __int64)(((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF);
  if (param_1 == (__int64 *)0x0) {
    uVar18 = 2;
  }
  else if ((param_2 - 0x18U < 0x50) ||
          (iVar19 = fn_82C038C8(param_1,*param_1,0x50,&uStack_50), iVar19 != 0x50)) {
    uVar18 = 3;
  }
  else {
    iVar20 = (((unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x23) * 0x100 +
              (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x22)) * 0x100 +
             (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x21)) * 0x100 +
             (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x20);
    bVar1 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x37);
    bVar2 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x32);
    bVar3 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x36);
    bVar4 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x31);
    bVar5 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x30);
    bVar6 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x35);
    bVar7 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x33);
    bVar8 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x34);
    bVar9 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x3a);
    bVar10 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x39);
    bVar11 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x38);
    bVar12 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x3b);
    bVar13 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x42);
    bVar14 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x41);
    bVar15 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x40);
    bVar16 = *(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x43);
    iVar19 = (((unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x4b) * 0x100 +
              (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x4a)) * 0x100 +
             (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x49)) * 0x100 +
             (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x48);
    if (((((unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x47) * 0x100 + (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x46)
          ) * 0x100 + (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x45)) * 0x100 +
         (unsigned int)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x44) == iVar19) &&
       ((iVar20 != 0 ||
        ((((unsigned __int64)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x27) * 0x100 +
          (unsigned __int64)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x26)) * 0x100 +
         (unsigned __int64)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x25)) * 0x100 +
         (unsigned __int64)*(unsigned char *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x24) != 0)))) {
      *(int *)((int)param_1 + 0x14) = iVar19;
      dVar17 = lbl_820ED0D8;
      *(int *)((int)param_1 + 0x1c) = iVar20;
      *(unsigned int *)((int)param_1 + 0x24) =
           (((unsigned int)bVar12 * 0x100 + (unsigned int)bVar9) * 0x100 + (unsigned int)bVar10) * 0x100 + (unsigned int)bVar11;
      *(unsigned int *)(param_1 + 7) =
           (((unsigned int)bVar16 * 0x100 + (unsigned int)bVar13) * 0x100 + (unsigned int)bVar14) * 0x100 + (unsigned int)bVar15;
      uVar18 = 0;
      *param_1 = (unsigned __int64)(param_2 - 0x18U) + *param_1;
      uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)
                 ((double)((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar3) * 0x100 + (unsigned __int64)bVar6
                           ) * 0x100 + (unsigned __int64)bVar8) * dVar17))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      *(unsigned int *)(param_1 + 4) =
           (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) +
           (int)(((((unsigned __int64)bVar7 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar4) * 0x100
                 + (unsigned __int64)bVar5) / 10000);
    }
    else {
      uVar18 = 1;
    }
  }
  return uVar18;
}

