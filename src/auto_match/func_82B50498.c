extern int fn_82ABE250();
extern int fn_82AD6090();


unsigned int * fn_82B50498(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  *param_1 = (int)param_3;
  puVar3 = (unsigned int *)fn_82ABE250(param_3,8,0xf);
  param_1[1] = puVar3;
  puVar3[1] = (unsigned int)puVar3 | 1;
  *puVar3 = (unsigned int)(puVar3 + 1) | 1;
  puVar3 = (unsigned int *)param_1[1];
  if ((puVar3[1] & 1) == 0) {
    uVar2 = *puVar3 & 0xfffffffe;
    iVar4 = uVar2 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8))) goto code_r0x82b50524;
  }
  iVar4 = fn_82AD6090(puVar3,1);
code_r0x82b50524:
  iVar1 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar1 + 1;
  *(unsigned int *)((iVar1 + 4) * 4 + iVar4) = param_2;
  return param_1;
}

