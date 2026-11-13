extern int fn_82E3C8C0();


unsigned __int64 fn_82E3E5A8(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int aiStack_30 [12];
  
  iVar3 = fn_82E3C8C0(param_1 + 4,aiStack_30);
  if (iVar3 < 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    puVar5 = param_2 + -1;
    puVar4 = (unsigned int *)(aiStack_30[0] + -4);
    lVar6 = 5;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = 0;
    *(unsigned int *)(aiStack_30[0] + 0x14) = *param_3;
    uVar1 = (unsigned int)param_1[1] >> 1;
    trapWord(6,(unsigned __int64)uVar1,0);
    iVar3 = (int)((((unsigned __int64)*(unsigned short *)(param_2 + 4) ^ (unsigned __int64)*param_2) -
                   (__int64)
                   (int)(((unsigned __int64)*(unsigned short *)(param_2 + 4) ^ (unsigned __int64)*param_2) /
                        (unsigned __int64)uVar1) * (__int64)(int)uVar1 & 0xffffffff) << 2);
    *(unsigned int *)(aiStack_30[0] + 0x18) = *(unsigned int *)(iVar3 + *param_1);
    *(int *)(iVar3 + *param_1) = aiStack_30[0];
    param_1[2] = param_1[2] + 1;
  }
  return uVar2;
}

