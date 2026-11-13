#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F69148();
extern unsigned int stack0x00000000;
extern unsigned int uStack_3d;
extern unsigned int uStack_44;


void fn_82A866E0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_44;
  unsigned char uStack_3d;
  
  uVar2 = ZEXT48(&stack0x00000000);
  if ((param_3 & 0xffffffff) == 0) {
    uStack_3d = 0;
  }
  else {
    uVar1 = (param_2 + param_3) - 1 & 0x1f;
    uVar8 = (((param_2 & 0x1f) + param_3) - 1 & 0xffffffff) >> 5;
    fn_82F69148(uVar2 - 0x40,((param_2 & 0xffffffff) >> 3 & 0x1ffffffc) + param_1,(uVar8 + 1) * 4);
    lVar4 = -(uVar8 + 1);
    if (-1 < (int)lVar4 + 1) {
      lVar3 = (uVar8 + 1) * 4 + uVar2 + -0x44;
      for (lVar4 = lVar4 + 2; lVar4 != 0; lVar4 = lVar4 + -1) {
        lVar3 = lVar3 + 4;
        *(unsigned int *)lVar3 = 0;
      }
    }
    if (uVar1 < 0x1f) {
      iVar7 = (int)(uVar8 + 1);
      (&uStack_44)[iVar7] = (&uStack_44)[iVar7] & ~(-1 << (int)uVar1 + 1);
    }
    lVar4 = uVar2 - 0x40;
    puVar5 = (unsigned int *)lVar4;
    iVar7 = (int)(param_2 & 0x1f);
    if (-1 < (__int64)(uVar8 - 1)) {
      do {
        puVar6 = (unsigned int *)lVar4;
        lVar4 = lVar4 + 4;
        puVar5 = (unsigned int *)lVar4;
        *puVar6 = puVar6[1] << (0x20U - iVar7 & 0x3f) | *puVar6 >> iVar7;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    *puVar5 = *puVar5 >> iVar7;
  }
  *param_4 = uStack_3d;
  return;
}

