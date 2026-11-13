#define true 1
extern int fn_82F691F0();


void fn_827B36A8(int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned char *puVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  if (param_2 < (unsigned int)param_1[0xd]) {
    uVar8 = 0;
    piVar4 = (int *)(param_2 * 8 + param_1[0xc]);
    uVar9 = (unsigned __int64)(unsigned int)piVar4[1];
    piVar4 = (int *)(param_1[9] + *piVar4 * 4);
    if (uVar9 != 0) {
      do {
        piVar2 = (int *)*piVar4;
        iVar1 = *piVar2;
        iVar5 = piVar2[3];
        while( true ) {
          uVar9 = uVar9 - 1;
          uVar8 = piVar2[2] + uVar8;
          if (uVar9 == 0) break;
          piVar4 = piVar4 + 1;
          piVar2 = (int *)*piVar4;
          if (*piVar2 != iVar1) break;
          iVar5 = piVar2[3] + iVar5;
        }
        iVar7 = (int)param_4;
        if (iVar5 != 0) {
          uVar3 = (unsigned __int64)((int)(uVar8 * 0x200 - iVar5) >> 9);
          if ((__int64)uVar3 < 0) {
            uVar3 = -uVar3;
          }
          if ((*param_1 == 1) && (uVar3 = uVar3 & 0x1ff, 0x100 < (unsigned int)uVar3)) {
            uVar3 = 0x200 - uVar3;
          }
          if (0xff < (int)uVar3) {
            uVar3 = 0xff;
          }
          if (param_1[3] != 0) {
            uVar3 = (unsigned __int64)*(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_1[2]);
          }
          if ((param_4 & 0xffffffff) != 0) {
            puVar6 = (unsigned char *)((iVar1 - param_1[0x13]) * iVar7 + param_3 + -1);
            uVar10 = param_4;
            do {
              puVar6 = puVar6 + 1;
              *puVar6 = (char)uVar3;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          iVar1 = iVar1 + 1;
        }
        if ((uVar9 & 0xffffffff) == 0) {
          return;
        }
        if (iVar1 < *piVar2) {
          uVar3 = (unsigned __int64)((int)(uVar8 * 0x200 | uVar8 >> 0x17) >> 9);
          if ((__int64)uVar3 < 0) {
            uVar3 = -uVar3;
          }
          if ((*param_1 == 1) && (uVar3 = uVar3 & 0x1ff, 0x100 < (unsigned int)uVar3)) {
            uVar3 = 0x200 - uVar3;
          }
          if (0xff < (int)uVar3) {
            uVar3 = 0xff;
          }
          if (param_1[3] != 0) {
            uVar3 = (unsigned __int64)*(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_1[2]);
          }
          if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0((iVar1 - param_1[0x13]) * iVar7 + param_3,uVar3,
                         (__int64)(*piVar2 - iVar1) * (__int64)iVar7);
          }
        }
      } while( true );
    }
  }
  return;
}

