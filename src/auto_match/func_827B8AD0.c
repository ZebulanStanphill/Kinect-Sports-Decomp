extern int fn_827B86F8();


int * fn_827B8AD0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  short sVar4;
  short sVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  if (*param_4 == 0) {
    if (((unsigned __int64)*(unsigned short *)(param_4 + 7) < (param_2 & 0xffffffff)) ||
       ((unsigned __int64)*(unsigned short *)((int)param_4 + 0x1e) < (param_3 & 0xffffffff))) {
      piVar1 = (int *)0x0;
    }
    else {
      uVar7 = *(unsigned short *)(param_4 + 7) - param_2;
      uVar6 = *(unsigned short *)((int)param_4 + 0x1e) - param_3;
      sVar5 = (short)param_2;
      sVar4 = (short)param_3;
      if (((unsigned __int64)*param_1 <= (uVar7 & 0xffffffff)) ||
         ((unsigned __int64)*param_1 <= (uVar6 & 0xffffffff))) {
        puVar3 = param_1 + 0x19;
        if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          iVar2 = fn_827B86F8(puVar3,param_4);
          param_4[4] = iVar2;
          *(short *)(iVar2 + 0x18) = *(short *)(param_4 + 6) + sVar5;
          *(short *)(param_4[4] + 0x1c) = (short)uVar7;
          if ((unsigned __int64)*param_1 <= (uVar6 & 0xffffffff)) {
            iVar2 = fn_827B86F8(puVar3,param_4);
            param_4[5] = iVar2;
            *(unsigned int *)(iVar2 + 0x10) = 0;
            *(short *)(param_4[5] + 0x1a) = *(short *)((int)param_4 + 0x1a) + sVar4;
            *(short *)(param_4[5] + 0x1e) = (short)uVar6;
            *(short *)(param_4[5] + 0x1c) = sVar5;
          }
        }
        else {
          iVar2 = fn_827B86F8(puVar3,param_4);
          param_4[4] = iVar2;
          *(short *)(iVar2 + 0x1a) = *(short *)((int)param_4 + 0x1a) + sVar4;
          *(short *)(param_4[4] + 0x1e) = (short)uVar6;
          if ((unsigned __int64)*param_1 <= (uVar7 & 0xffffffff)) {
            iVar2 = fn_827B86F8(puVar3,param_4);
            param_4[5] = iVar2;
            *(unsigned int *)(iVar2 + 0x10) = 0;
            *(short *)(param_4[5] + 0x18) = *(short *)(param_4 + 6) + sVar5;
            *(short *)(param_4[5] + 0x1c) = (short)uVar7;
            *(short *)(param_4[5] + 0x1e) = sVar4;
          }
        }
      }
      *(short *)(param_4 + 7) = sVar5;
      *(short *)((int)param_4 + 0x1e) = sVar4;
      piVar1 = param_4;
    }
  }
  else {
    piVar1 = (int *)0x0;
    if (((param_4[4] == 0) || (piVar1 = (int *)((int (*)())fn_827B8AD0)(param_1), piVar1 == (int *)0x0)) &&
       (param_4[5] != 0)) {
      piVar1 = (int *)((int (*)())fn_827B8AD0)(param_1,param_2,param_3);
    }
  }
  return piVar1;
}

