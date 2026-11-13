#define true 1
extern int fn_82ABDD90();


void fn_82B825D0(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  
  uVar7 = *(unsigned int *)(param_1 + 8);
  iVar2 = fn_82ABDD90(param_3,uVar7 >> 7 & 0x7f,uVar7 >> 0x13 & 7,uVar7 >> 0xe & 7);
  puVar4 = (unsigned int *)(iVar2 + param_1 + -0x14);
  *param_2 = *puVar4;
  param_2[1] = puVar4[1];
  param_2[2] = puVar4[2];
  puVar1 = *(unsigned int **)(param_1 + 4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
      uVar7 = param_2[1] | 0xfff;
LAB_82b827ec:
      param_2[1] = uVar7;
LAB_82b827f0:
      if ((*(unsigned int *)(param_1 + 8) & 0x380000) != 0) {
        puVar1 = *(unsigned int **)(param_1 + 0x2c);
        *param_2 = *puVar1 >> 0xc & 0x7e0 | *param_2 & 0xfffff81f;
        uVar7 = (*puVar1 & 0x60) << 0x19 | *param_2 & 0x3fffffff;
        *param_2 = uVar7;
        if ((*puVar1 & 0x10) != 0) {
          *param_2 = uVar7 | 0x800;
        }
      }
      if ((*(unsigned int *)(param_1 + 8) & 0x380000) < 0x80001) {
        *param_2 = *param_2 & 0xf80fffff | 0x5f00000;
      }
      else {
        uVar6 = 0x5f - ((unsigned __int64)(**(unsigned int **)(param_1 + 0x30) >> 0x11) & 0xff);
        *param_2 = (unsigned int)(((uVar6 + ((uVar6 & 0xffffffff) / 3) * -3 & 3) << 5 |
                          (uVar6 & 0xffffffff) / 3 & 0xffffffffffffff9f) << 0x14) & 0x7f00000 |
                   *param_2 & 0xf80fffff;
      }
      if ((*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x4c) >> 0x16 & 1) == 0) {
        param_2[2] = (*(unsigned int *)(param_1 + 8) & 0x40000) << 0xd | param_2[2] & 0x7fffffff;
        param_2[1] = (*(unsigned int *)(param_1 + 8) & 0x20000) << 0xe | param_2[1] & 0x7fffffff;
      }
      else {
        param_2[1] = param_2[1] | 0x80000000;
        param_2[2] = (*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x4c) >> 0x17) << 0x1f |
                     param_2[2] & 0x7fffffff;
      }
      return;
    }
    if (puVar1[4] != 0) {
      if ((*puVar1 & 0xe000000) != 0) {
        uVar7 = *puVar1 >> 5 & 0x3f000 | *param_2 & 0xfffc0fff;
        *param_2 = uVar7;
        if ((*puVar1 & 0x10) != 0) {
          *param_2 = uVar7 | 0x40000;
        }
        uVar7 = *(unsigned int *)(param_1 + 8) >> 1;
        uVar6 = (unsigned __int64)(puVar4[3] >> 0x11);
        if ((uVar7 & 1) == 0) {
          uVar3 = param_2[1] | 7;
        }
        else {
          uVar3 = param_2[1] & 0xfffffff8 | puVar4[3] >> 0x11 & 3;
        }
        param_2[1] = uVar3;
        if ((uVar7 & 2) == 0) {
          uVar3 = param_2[1] | 0x38;
        }
        else {
          uVar3 = (unsigned int)((uVar6 & 0xc) << 1) | param_2[1] & 0xffffffc7;
        }
        param_2[1] = uVar3;
        if ((uVar7 & 4) == 0) {
          uVar3 = param_2[1] | 0x1c0;
        }
        else {
          uVar3 = (unsigned int)((uVar6 & 0x30) << 2) | param_2[1] & 0xfffffe3f;
        }
        param_2[1] = uVar3;
        if ((uVar7 & 8) == 0) {
          uVar7 = param_2[1] | 0xe00;
        }
        else {
          uVar7 = (unsigned int)((uVar6 & 0xc0) << 3) | uVar3 & 0xfffff1ff;
        }
        param_2[1] = uVar7;
        uVar7 = puVar4[3] >> 8 & 0xf;
        if (uVar7 != 0) {
          uVar5 = 0x1f - LZCOUNT(uVar7);
          uVar6 = uVar5 & 0xffffffff;
          if (uVar6 == 0) {
            uVar7 = param_2[1] & 0xfffffff8 | 4;
          }
          else if (uVar6 == 1) {
            uVar7 = param_2[1] & 0xffffffc7 | 0x20;
          }
          else {
            uVar5 = uVar5 & 0xffffffff;
            if (uVar5 < 3) {
              uVar7 = param_2[1] & 0xfffffe3f | 0x100;
            }
            else {
              if (uVar5 != 3) goto LAB_82b82778;
              uVar7 = param_2[1] & 0xfffff1ff | 0x800;
            }
          }
          param_2[1] = uVar7;
        }
LAB_82b82778:
        uVar7 = puVar4[3] >> 0xc & 0xf;
        if (uVar7 == 0) goto LAB_82b827f0;
        uVar5 = 0x1f - LZCOUNT(uVar7);
        uVar6 = uVar5 & 0xffffffff;
        if (uVar6 == 0) {
          uVar7 = param_2[1] & 0xfffffff8 | 5;
          goto LAB_82b827ec;
        }
        if (uVar6 == 1) {
          uVar7 = param_2[1] & 0xffffffc7 | 0x28;
          goto LAB_82b827ec;
        }
        uVar5 = uVar5 & 0xffffffff;
        if (uVar5 < 3) {
          uVar7 = param_2[1] & 0xfffffe3f | 0x140;
        }
        else {
          if (uVar5 != 3) goto LAB_82b827f0;
          uVar7 = param_2[1] & 0xfffff1ff | 0xa00;
        }
        goto LAB_82b827ec;
      }
    }
    puVar1 = (unsigned int *)puVar1[2];
  } while( true );
}

