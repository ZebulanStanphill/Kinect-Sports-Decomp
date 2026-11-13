int fn_82CECD18(double param_1)

{
  unsigned int uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  fVar2 = (float)param_1;
  uVar6 = (unsigned int)fVar2 >> 0x17 & 0xff;
  uVar7 = uVar6 - 0x7f;
  uVar1 = (int)(uVar6 - 0x97) >> 0x1f;
  uVar3 = 0x17 - uVar7 & uVar1;
  uVar4 = (unsigned int)fVar2 & ~((int)ABS(fVar2) + -1 >> 0x1f);
  uVar5 = -0x800000 >> ((uVar1 & 0x17) - uVar3 & 0x3f) | ~uVar1;
  uVar5 = (((int)(uVar7 & uVar4) >> 0x1f | ~((int)uVar7 >> 0x1f)) & 0x800000U |
          (0x800000 >> (uVar7 & 0x3f) & ~((uVar4 & ~uVar5) - 1) & (int)uVar4 >> 0x1f) +
          (~((int)uVar7 >> 0x1f) & uVar4) & 0x7fffff) & uVar5;
  return ((int)(((uVar5 * 2 - 1 | (int)uVar4 >> 0x1f) - uVar5) + 1) >> (uVar3 & 0x3f)) <<
         (~uVar1 & uVar6 - 0x96 & 0x3f);
}

