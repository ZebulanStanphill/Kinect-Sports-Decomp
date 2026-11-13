extern int fn_827591D8();


char * fn_82759CB8(unsigned __int64 param_1,char *param_2,unsigned short *param_3,unsigned short *param_4,int param_5,
                    unsigned __int64 param_6)

{
  unsigned short uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  uVar1 = param_3[3];
  uVar5 = (param_6 & 0xffffff) << 8 | param_6;
  uVar6 = ((unsigned int)param_4[3] - (unsigned int)uVar1) * param_5;
  uVar7 = (__int64)(int)((unsigned int)param_4[2] - (unsigned int)param_3[2]) * (__int64)param_5;
  iVar8 = (int)param_6;
  trapWord(6,param_6,0);
  trapWord(6,uVar5,0);
  trapWord(5,uVar5 & ~((((unsigned __int64)uVar6 & 0x7fffffff) << 1 | (unsigned __int64)(uVar6 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,param_6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  cVar2 = fn_827591D8((__int64)((int)uVar7 / iVar8) + (unsigned __int64)param_3[2] & 0xffff);
  trapWord(6,param_6,0);
  uVar7 = (__int64)(int)((unsigned int)param_4[1] - (unsigned int)param_3[1]) * (__int64)param_5;
  trapWord(5,param_6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  cVar3 = fn_827591D8(param_1,(__int64)((int)uVar7 / iVar8) + (unsigned __int64)param_3[1] & 0xffff);
  trapWord(6,param_6,0);
  uVar7 = (__int64)(int)((unsigned int)*param_4 - (unsigned int)*param_3) * (__int64)param_5;
  trapWord(5,param_6 & ~(((uVar7 & 0x7fffffff) << 1 | (uVar7 & 0xffffffff) >> 0x1f) - 1),0xffff);
  cVar4 = fn_827591D8(param_1,(__int64)((int)uVar7 / iVar8) + (unsigned __int64)*param_3 & 0xffff);
  param_2[1] = cVar4;
  param_2[2] = cVar3;
  param_2[3] = cVar2;
  *param_2 = (char)((int)uVar6 / (int)uVar5) + (char)uVar1;
  return param_2;
}

