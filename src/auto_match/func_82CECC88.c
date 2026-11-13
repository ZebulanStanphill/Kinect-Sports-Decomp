double fn_82CECC88(double param_1)

{
  unsigned int uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  fVar2 = (float)param_1;
  uVar5 = ((unsigned int)fVar2 >> 0x17 & 0xff) - 0x7f;
  uVar1 = (int)(0x17 - uVar5) >> 0x1f;
  uVar3 = ~uVar1;
  uVar4 = (unsigned int)fVar2 & ~((int)ABS(fVar2) + -1 >> 0x1f);
  uVar1 = -0x800000 >> ((uVar3 & 0x17) - (uVar3 & 0x17 - uVar5) & 0x3f) | uVar1;
  return (double)(float)((0x800000 >> (uVar5 & 0x3f) & ~((uVar4 & ~uVar1) - 1) & (int)uVar4 >> 0x1f)
                         + uVar4 & ~((int)uVar5 >> 0x1f) & uVar1 |
                        (int)(uVar5 & uVar4) >> 0x1f & 0xbf800000U);
}

