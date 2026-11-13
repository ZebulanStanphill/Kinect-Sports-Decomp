int fn_82CECDD8(double param_1)

{
  unsigned int uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  fVar2 = (float)param_1;
  uVar6 = (unsigned int)fVar2 >> 0x17 & 0xff;
  uVar1 = (int)(uVar6 - 0x97) >> 0x1f;
  uVar3 = 0x17 - (uVar6 - 0x7f) & uVar1;
  uVar4 = (unsigned int)fVar2 & ~((int)ABS(fVar2) + -1 >> 0x1f);
  uVar5 = (uVar4 & 0x7fffff | 0x800000) & (-0x800000 >> ((uVar1 & 0x17) - uVar3 & 0x3f) | ~uVar1);
  return ((int)(((uVar5 * 2 - 1 | (int)uVar4 >> 0x1f) - uVar5) + 1 & ~((int)(uVar6 - 0x7f) >> 0x1f))
         >> (uVar3 & 0x3f)) << (~uVar1 & uVar6 - 0x96 & 0x3f);
}

