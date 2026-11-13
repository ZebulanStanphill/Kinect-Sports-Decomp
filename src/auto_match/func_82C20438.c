extern unsigned int *auStack_68;
extern unsigned int *auStack_78;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int memset();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7a;
extern unsigned int uStack_7c;
extern unsigned int uStack_7e;
extern unsigned int uStack_80;


unsigned __int64 fn_82C20438(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned short uVar6;
  unsigned __int64 uVar7;
  unsigned short *puVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned short uStack_80;
  unsigned short uStack_7e;
  unsigned short uStack_7c;
  unsigned short uStack_7a;
  unsigned short auStack_78;
  unsigned short *puStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int auStack_68 [2];

  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_68[0] = 0;
  uVar9 = param_2 - 0x18;
  uStack_70 = 0;
  puStack_74 = (unsigned short *)0x0;
  uStack_6c = (unsigned int)uVar9;
  uStack_80 = 0;
  uStack_7e = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  auStack_78 = 0;
  uVar7 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,uVar9);
  if ((int)uVar7 < 0) {
    return uVar7;
  }
  if (9 < (uVar9 & 0xffffffff)) {
    uVar7 = fn_82C1E938(param_1,&uStack_80,auStack_68,&uStack_70,&uStack_6c);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_82C1E938(param_1,&uStack_7e,auStack_68,&uStack_70,&uStack_6c);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_82C1E938(param_1,&uStack_7c,auStack_68,&uStack_70,&uStack_6c);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_82C1E938(param_1,&uStack_7a,auStack_68,&uStack_70,&uStack_6c);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = fn_82C1E938(param_1,&auStack_78,auStack_68,&uStack_70,&uStack_6c);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    if (*(short *)(piVar1[1] + 0x38) < 1) {
      uVar7 = fn_82C10AD0(piVar1[0x38],0xb,0x20,&puStack_74);
      uVar6 = auStack_78;
      uVar5 = uStack_7a;
      uVar4 = uStack_7c;
      uVar3 = uStack_7e;
      uVar2 = uStack_80;
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      puVar8 = puStack_74 + -2;
      lVar10 = 8;
      do {
        puVar8 = puVar8 + 2;
        puVar8[0] = 0;
        puVar8[1] = 0;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      *(unsigned short **)(piVar1[1] + 0x4c) = puStack_74;
      *puStack_74 = uStack_80 >> 1;
      puStack_74[1] = uStack_7e >> 1;
      puStack_74[2] = uStack_7c >> 1;
      puStack_74[3] = uStack_7a >> 1;
      puStack_74[4] = auStack_78 >> 1;
      puStack_74[6] = 0;
      puStack_74[7] = 0;
      puStack_74[8] = 0;
      puStack_74[9] = 0;
      puStack_74[10] = 0;
      puStack_74[0xb] = 0;
      puStack_74[0xc] = 0;
      puStack_74[0xd] = 0;
      puStack_74[0xe] = 0;
      puStack_74[0xf] = 0;
      if (uStack_80 != 0) {
        uVar7 = fn_82C10AD0(piVar1[0x38],0xb,uStack_80,puStack_74 + 6);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        memset(*(unsigned int *)(puStack_74 + 6),0,uVar2);
      }
      if (uStack_7e != 0) {
        uVar7 = fn_82C10AD0(piVar1[0x38],0xb,uStack_7e,puStack_74 + 8);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        memset(*(unsigned int *)(puStack_74 + 8),0,uVar3);
      }
      if (uStack_7c != 0) {
        uVar7 = fn_82C10AD0(piVar1[0x38],0xb,uStack_7c,puStack_74 + 10);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        memset(*(unsigned int *)(puStack_74 + 10),0,uVar4);
      }
      if (uStack_7a != 0) {
        uVar7 = fn_82C10AD0(piVar1[0x38],0xb,uStack_7a,puStack_74 + 0xc);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        memset(*(unsigned int *)(puStack_74 + 0xc),0,uVar5);
      }
      if (auStack_78 != 0) {
        uVar7 = fn_82C10AD0(piVar1[0x38],0xb,auStack_78,puStack_74 + 0xe);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        memset(*(unsigned int *)(puStack_74 + 0xe),0,uVar6);
      }
      *(short *)(piVar1[1] + 0x38) = *(short *)(piVar1[1] + 0x38) + 1;
      uVar9 = (uVar9 - uStack_70) - 10;
      if (uVar9 == 0) {
        return uVar7;
      }
      uVar7 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar9);
      if ((int)uVar7 < 0) {
        return uVar7;
      }
      *(unsigned __int64 *)(piVar1 + 2) = (uVar9 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
      return uVar7;
    }
  }
  return 0xffffffff8050000c;
}
