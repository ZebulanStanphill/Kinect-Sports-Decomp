char * fn_82759DE8(char *param_1,unsigned short *param_2,unsigned short *param_3,int param_4,unsigned __int64 param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_5 = (param_5 & 0xffffff) << 8 | param_5;
  uVar4 = ((unsigned int)*param_3 - (unsigned int)*param_2) * param_4;
  uVar6 = (__int64)(int)((unsigned int)param_3[2] - (unsigned int)uVar1) * (__int64)param_4;
  uVar8 = (__int64)(int)((unsigned int)param_3[1] - (unsigned int)uVar2) * (__int64)param_4;
  uVar5 = (__int64)(int)((unsigned int)param_3[3] - (unsigned int)uVar3) * (__int64)param_4;
  iVar7 = (int)param_5;
  param_1[1] = (char)((int)uVar4 / iVar7) + (char)*param_2;
  param_1[2] = (char)((int)uVar8 / iVar7) + (char)uVar2;
  param_1[3] = (char)((int)uVar6 / iVar7) + (char)uVar1;
  *param_1 = (char)((int)uVar5 / iVar7) + (char)uVar3;
  trapWord(6,param_5,0);
  trapWord(6,param_5,0);
  trapWord(6,param_5,0);
  trapWord(6,param_5,0);
  trapWord(5,param_5 & ~((((unsigned __int64)uVar4 & 0x7fffffff) << 1 | (unsigned __int64)(uVar4 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,param_5 & ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_5 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_5 & ~(((uVar5 & 0x7fffffff) << 1 | (uVar5 & 0xffffffff) >> 0x1f) - 1),0xffff);
  return param_1;
}

