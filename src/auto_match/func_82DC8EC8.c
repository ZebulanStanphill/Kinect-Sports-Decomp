typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))


void fn_82DC8EC8(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned int *puVar10;
  int iVar12;
  unsigned __int64 uVar11;
  unsigned int *puVar13;
  int iVar14;
  
  do {
    iVar12 = (param_2 + param_3 >> 1) * 0x10;
    iVar5 = *(int *)(iVar12 + param_1);
    iVar12 = *(int *)(iVar12 + param_1 + 0xc);
    iVar14 = param_2;
    iVar7 = param_3;
    do {
      piVar9 = (int *)(iVar14 * 0x10 + param_1);
      uVar8 = CONCAT44(*(unsigned int *)(*(int *)(iVar5 + 0x58) + 0xd4),
                       *(unsigned int *)(*(int *)(iVar5 + 0x5c) + 0xd4));
      while( true ) {
        uVar11 = CONCAT44(*(unsigned int *)(*(int *)(*piVar9 + 0x58) + 0xd4),
                          *(unsigned int *)(*(int *)(*piVar9 + 0x5c) + 0xd4));
        if ((uVar11 < uVar8) || ((uVar11 == uVar8 && (piVar9[3] < iVar12)))) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) break;
        iVar14 = iVar14 + 1;
        piVar9 = piVar9 + 4;
      }
      piVar9 = (int *)(iVar7 * 0x10 + param_1);
      while( true ) {
        uVar11 = CONCAT44(*(unsigned int *)(*(int *)(*piVar9 + 0x58) + 0xd4),
                          *(unsigned int *)(*(int *)(*piVar9 + 0x5c) + 0xd4));
        if ((uVar8 < uVar11) || ((uVar8 == uVar11 && (iVar12 < piVar9[3])))) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) break;
        iVar7 = iVar7 + -1;
        piVar9 = piVar9 + -4;
      }
      if (iVar7 < iVar14) break;
      if (iVar7 != iVar14) {
        puVar13 = (unsigned int *)(iVar7 * 0x10 + param_1);
        puVar10 = (unsigned int *)(iVar14 * 0x10 + param_1);
        uVar1 = *puVar13;
        uVar2 = puVar13[1];
        uVar3 = puVar13[2];
        uVar4 = puVar13[3];
        *puVar13 = *puVar10;
        puVar13[1] = puVar10[1];
        puVar13[2] = puVar10[2];
        puVar13[3] = puVar10[3];
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        puVar10[2] = uVar3;
        puVar10[3] = uVar4;
      }
      iVar7 = iVar7 + -1;
      iVar14 = iVar14 + 1;
    } while (iVar14 <= iVar7);
    if (param_2 < iVar7) {
      fn_82DC8EC8(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar14;
    if (param_3 <= iVar14) {
      return;
    }
  } while( true );
}

