#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int uStack_10;


unsigned int fn_825E49E0(int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned char *puVar8;
  unsigned int uStack_10;
  
  iVar1 = param_1[7];
  uVar4 = 1;
  uVar6 = 0;
  uVar2 = ((param_2 & 0xffff) - *param_1) * iVar1;
  iVar5 = 0;
  uVar3 = uVar2 + (((int)uVar2 >> 3) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 7) != 0)) * -8;
  uVar7 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = uVar7 | uVar4;
      uVar4 = uVar4 << 1;
      uVar7 = uVar6;
    } while (iVar5 < iVar1);
  }
  puVar8 = (unsigned char *)
           (param_1[10] + ((int)uVar2 >> 3) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 7) != 0));
  uStack_10 = CONCAT31(CONCAT21(CONCAT11(puVar8[3],puVar8[2]),puVar8[1]),*puVar8);
  return (uVar6 << (uVar3 & 0x3f) & uStack_10) >> (uVar3 & 0x3f);
}

