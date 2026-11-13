#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8264B4A0();
extern int fn_82F68CC0();
extern unsigned int uStack_30;


void fn_82631920(unsigned __int64 *param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 *puVar4;
  unsigned short uVar5;
  unsigned __int64 *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int uStack_30;
  
  if (param_2 != 0) {
    param_1[2] = param_1[2] | 0x80000;
  }
  puVar9 = *(unsigned int **)(param_1 + 0x649);
  if (puVar9 != (unsigned int *)0x0) {
    if (*(unsigned int *)((int)param_1 + 0x2a9c) == 0) {
      if ((*(unsigned int *)(param_1 + 0x554) & *puVar9) != 0) {
        puVar4 = *(unsigned __int64 **)(param_1 + 0x6b5);
        if (*(unsigned __int64 **)((int)param_1 + 0x35ac) <= puVar4) {
          puVar4 = (unsigned __int64 *)fn_8264B4A0(param_1);
        }
        *puVar4 = CONCAT44((unsigned int)puVar9 >> 2 | uStack_30 & 0x80000000,0xffffffff);
        *(unsigned __int64 **)(param_1 + 0x6b5) = puVar4 + 1;
      }
    }
    else {
      puVar9[2] = *(unsigned int *)((int)param_1 + 0x2a9c);
    }
  }
  *(int *)(param_1 + 0x649) = param_2;
  *(unsigned char *)((int)param_1 + 0x2abe) = *(unsigned char *)((int)param_1 + 0x2abe) & 0x7f;
  if (((param_2 != 0) && (param_2 + 0x368 != 0)) && (*(int *)(param_2 + 0x37c) != 0)) {
    puVar6 = (unsigned __int64 *)(*(int *)(param_2 + 0x37c) + param_2 + 0x368);
    *param_1 = *param_1 & ~*puVar6;
    if (puVar6[1] != 0) {
      param_1[4] = param_1[4] | 0x100000000000000;
    }
    puVar8 = (unsigned int *)((int)puVar6 + 0x14);
    puVar9 = (unsigned int *)(*(int *)(puVar6 + 2) + (int)puVar8);
    if (puVar8 < puVar9) {
      do {
        puVar10 = puVar8 + 1;
        if ((unsigned short)*puVar8 == 0) break;
        puVar8 = puVar8 + 2;
        puVar10 = puVar8;
      } while (puVar8 < puVar9);
      if (puVar10 < puVar9) {
        do {
          uVar7 = (unsigned int)(unsigned short)*puVar10;
          uVar5 = *(unsigned short *)puVar10;
          puVar10 = puVar10 + 1;
          if (uVar7 == 0) break;
          fn_82F68CC0((int)param_1 + uVar5 + 0x480,puVar10,uVar7 * 4);
          puVar10 = puVar10 + uVar7;
        } while (puVar10 < puVar9);
        while( true ) {
          if (puVar9 <= puVar10) {
            return;
          }
          uVar5 = (unsigned short)*puVar10;
          uVar1 = *(unsigned short *)puVar10;
          puVar10 = puVar10 + 1;
          if (uVar5 == 0) break;
          puVar8 = (unsigned int *)((int)param_1 + uVar1 + 0x47c);
          do {
            uVar7 = *puVar10;
            puVar2 = puVar8 + 1;
            puVar3 = puVar10 + 1;
            uVar5 = uVar5 - 2;
            puVar10 = puVar10 + 2;
            puVar8 = puVar8 + 1;
            *puVar8 = *puVar2 & uVar7 | *puVar3;
          } while (uVar5 != 0);
        }
        return;
      }
    }
  }
  return;
}

