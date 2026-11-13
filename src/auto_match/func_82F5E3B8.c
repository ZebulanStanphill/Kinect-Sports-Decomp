typedef unsigned char bool;
extern int fn_829C8658();
extern int fn_82F5E338();
extern unsigned int iStack_30;


unsigned char fn_82F5E3B8(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  int iVar3;
  int iStack_30;
  int aiStack_2c [11];
  
  iStack_30 = -1;
  iVar2 = fn_829C8658(0,0,&iStack_30);
  bVar1 = *param_2 == iStack_30 && iVar2 == 0;
  if (iStack_30 == 0) {
    if (*(char *)(param_1 + 0x6c) == '\0') {
      bVar7 = 0;
    }
    else {
      bVar4 = fn_82F5E338((double)(float)param_2[1],0);
      bVar5 = fn_82F5E338((double)(float)param_2[2],6);
      bVar6 = fn_82F5E338((double)(float)param_2[3],7);
      bVar7 = fn_82F5E338((double)(float)param_2[4],8);
      bVar7 = bVar7 & bVar6 & bVar5 & bVar4 & bVar1;
    }
  }
  else {
    iVar2 = param_2[5];
    aiStack_2c[0] = iVar2 + -1;
    iVar3 = fn_829C8658(0,2,aiStack_2c);
    bVar7 = fn_82F5E338((double)(float)param_2[6],5);
    bVar7 = bVar7 & iVar2 == aiStack_2c[0] & iVar3 == 0 & bVar1;
  }
  return bVar7;
}

