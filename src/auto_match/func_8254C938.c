extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_822D5340();
extern int fn_8254BD40();
extern int fn_8254C838();
extern int fn_8254F298();
extern int fn_8254F418();
extern int fn_8263CBB0();
extern int fn_82837D98();
extern int fn_8284EF60();
extern int memcpy();


void fn_8254C938(unsigned __int64 param_1,int *param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned int auStack_e0 [4];
  unsigned int * apuStack_d0;
  unsigned char auStack_c0 [96];
  
  if (((param_2[1] != 0) && (param_3 != (int *)0x0)) && ((param_4 & 0xffffffff) != 0)) {
    memcpy(auStack_c0,param_3 + 0x2a20,0x40);
    iVar1 = *param_3;
    uVar12 = fn_8254C838(param_1,param_2,param_3,param_5);
    iVar9 = *(int *)(*(int *)(*param_2 + 0x1a8) + 0x4664);
    if (iVar9 == 0) {
      uVar10 = 0;
    }
    else {
      fn_82837D98(*(unsigned int *)(iVar9 + 0x14),0,auStack_e0);
      uVar10 = auStack_e0[0];
    }
    fn_8263CBB0(iVar1,0xf,uVar10,0x10000);
    *(unsigned int *)(iVar1 + 0x5e8) = *(unsigned int *)(iVar1 + 0x5e8) & 0xffffe3ff | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x10000;
    *(unsigned int *)(iVar1 + 0x5e8) = *(unsigned int *)(iVar1 + 0x5e8) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x10000;
    fn_8263CBB0(iVar1,0x11,uVar10,0x4000);
    *(unsigned int *)(iVar1 + 0x618) = *(unsigned int *)(iVar1 + 0x618) & 0xffffe3ff | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x4000;
    *(unsigned int *)(iVar1 + 0x618) = *(unsigned int *)(iVar1 + 0x618) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x4000;
    fn_82837D98(*(unsigned int *)(param_2[0x3d] + 0x14),0,auStack_e0);
    fn_8263CBB0(iVar1,7,auStack_e0[0],0x1000000);
    fn_82837D98(*(unsigned int *)(param_2[0x3d] + 0x14),0,auStack_e0);
    fn_8263CBB0(iVar1,0x12,auStack_e0[0],0x2000);
    *(unsigned int *)(iVar1 + 0x630) = *(unsigned int *)(iVar1 + 0x630) & 0xffffe3ff | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x2000;
    *(unsigned int *)(iVar1 + 0x630) = *(unsigned int *)(iVar1 + 0x630) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x2000;
    *(unsigned int *)(iVar1 + 0x630) = *(unsigned int *)(iVar1 + 0x630) & 0xfff8ffff | 0x20000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | 0x2000;
    fn_82837D98(*(unsigned int *)(param_2[0x3d] + 0x14),0,auStack_e0);
    fn_8263CBB0(iVar1,0xe,auStack_e0[0],0x20000);
    fn_8254F298(param_2,iVar1,0);
    auStack_e0[0] = 0;
    fn_8254F418(&apuStack_d0,param_2[7] - param_2[6] >> 3,auStack_e0);
    lVar8 = 0;
    iVar9 = 8;
    do {
      iVar2 = param_2[6];
      uVar5 = 0;
      if (param_2[7] - iVar2 >> 3 != 0) {
        iVar6 = 0;
        iVar7 = 0;
        puVar11 = apuStack_d0;
        do {
          piVar3 = *(int **)(iVar2 + iVar7);
          iVar2 = param_2[0x31];
          if (piVar3 != (int *)0x0) {
            iVar4 = (**(int (***)())(*piVar3 + 0x3c))(piVar3);
            if (*(int *)(iVar4 + 0xc) != 0) {
              fn_8284EF60(uVar12);
            }
            fn_8254BD40(param_2,piVar3,param_4,iVar1,auStack_c0,lVar8,lVar8,
                              (unsigned __int64)*puVar11 + (unsigned __int64)*(unsigned int *)(iVar2 + iVar6));
            *puVar11 = *(int *)(iVar9 + iVar2 + iVar6) + *puVar11;
          }
          iVar2 = param_2[6];
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 8;
          iVar6 = iVar6 + 0x38;
          puVar11 = puVar11 + 1;
        } while (uVar5 < (unsigned int)(param_2[7] - iVar2 >> 3));
      }
      iVar9 = iVar9 + 4;
      lVar8 = lVar8 + 1;
    } while (iVar9 != 0x20);
    fn_822D5340(&apuStack_d0);
  }
  return;
}

