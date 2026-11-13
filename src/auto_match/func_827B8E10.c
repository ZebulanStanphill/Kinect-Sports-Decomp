extern int fn_827B6F80();
extern int fn_827B8C60();


unsigned __int64 fn_827B8E10(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  short *psVar7;
  int iVar9;
  short sVar10;
  unsigned __int64 uVar8;
  
  uVar1 = *(unsigned int *)(param_1 + 0x88);
  if (((uVar1 == 0) ||
      ((unsigned __int64)*(unsigned short *)(uVar1 * 0x30 + *(int *)(param_1 + 0x78) + -0x2a) <
       (param_2 & 0xffffffff))) && (uVar1 < *(unsigned int *)(param_1 + 0x7c))) {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    psVar7 = (short *)(uVar1 * 0x30 + *(int *)(param_1 + 0x78));
    *psVar7 = (short)(uVar1 / uVar2) + (short)*(unsigned int *)(param_1 + 4);
    iVar9 = uVar1 - (uVar1 / uVar2) * uVar2;
    trapWord(6,(unsigned __int64)uVar2,0);
    sVar10 = (short)*(unsigned int *)(param_1 + 0x14) * (short)iVar9;
    psVar7[1] = sVar10;
    trapWord(6,(unsigned __int64)uVar2,0);
    if (iVar9 + 1 == *(int *)(param_1 + 0x18)) {
      sVar10 = (short)*(unsigned int *)(param_1 + 0x10) - sVar10;
    }
    else {
      sVar10 = (short)*(unsigned int *)(param_1 + 0x14);
    }
    psVar7[2] = sVar10;
    psVar7[3] = (short)*(unsigned int *)(param_1 + 0xc);
    *(short **)(psVar7 + 10) = psVar7 + 4;
    *(short **)(psVar7 + 0xc) = psVar7 + 4;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  }
  iVar9 = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x88) * 0x30;
  uVar8 = (unsigned __int64)*(unsigned short *)(iVar9 + -0x2a);
  if (uVar8 < (param_2 & 0xffffffff)) {
    uVar4 = 0;
  }
  else {
    uVar6 = uVar8;
    if ((param_2 & 0xffffffff) <= (uVar8 - param_2 & 0xffffffff)) {
      uVar6 = param_2;
    }
    puVar5 = (unsigned int *)
             fn_827B6F80(param_1,iVar9 + -0x30,*(unsigned int *)(param_1 + 0xc) - uVar8,uVar6);
    *(short *)(iVar9 + -0x2a) = *(short *)(iVar9 + -0x2a) - *(short *)(puVar5 + 9);
    uVar3 = *(unsigned int *)(param_1 + 0x30);
    puVar5[1] = param_1 + 0x30;
    *puVar5 = uVar3;
    *(unsigned int **)(*(int *)(param_1 + 0x30) + 4) = puVar5;
    *(unsigned int **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    puVar5[3] = *(unsigned int *)(iVar9 + -0x1c);
    puVar5[4] = iVar9 + -0x28;
    *(unsigned int **)(*(int *)(iVar9 + -0x1c) + 0x10) = puVar5;
    *(unsigned int **)(iVar9 + -0x1c) = puVar5;
    puVar5[6] = *(unsigned int *)(param_1 + 0x54);
    puVar5[5] = param_1 + 0x3c;
    *(unsigned int **)(*(int *)(param_1 + 0x54) + 0x14) = puVar5;
    *(unsigned int **)(param_1 + 0x54) = puVar5;
    uVar4 = fn_827B8C60(param_1,param_2,param_3,puVar5);
  }
  return uVar4;
}

