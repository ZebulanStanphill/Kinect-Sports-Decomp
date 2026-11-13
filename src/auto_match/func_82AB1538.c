#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82AB1538(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char uVar3;
  unsigned char uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 lVar10;
  
  uVar5 = param_2 - 1U >> 3;
  puVar6 = (unsigned char *)(uVar5 + param_1);
  lVar10 = 4;
  iVar8 = 0;
  uVar9 = 0;
  uVar1 = puVar6[3];
  uVar7 = (param_2 + uVar5 * -8) - 1;
  uVar2 = puVar6[2];
  uVar3 = puVar6[1];
  uVar4 = *puVar6;
  uVar5 = ((0xffffffffU >> ((0x20 - uVar7) - param_3 & 0x3f)) >> (uVar7 & 0x3f)) << (uVar7 & 0x3f);
  do {
    puVar6[iVar8] =
         (char)((CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4) & ~uVar5 |
                param_4 << (uVar7 & 0x3f) & uVar5) >> (uVar9 & 0x3f));
    uVar9 = uVar9 + 8;
    iVar8 = iVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

