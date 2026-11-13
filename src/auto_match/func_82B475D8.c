extern int fn_82ABDD90();
extern int fn_82AD1978();
extern int fn_82B841E8();


int fn_82B475D8(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  
  iVar2 = fn_82B841E8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x234),
                            (unsigned __int64)*(unsigned int *)(param_1 + 0x234) + 0x18,0x68,1,*param_2 >> 0x19 & 7
                           );
  uVar3 = fn_82AD1978(iVar2,param_2);
  uVar1 = *(unsigned int *)(iVar2 + 8);
  *(unsigned int *)(iVar2 + 0x2c) = uVar3;
  iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  puVar5 = (unsigned int *)(iVar4 + iVar2 + -4);
  *puVar5 = *puVar5 | 0x200000;
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 4;
  return iVar2;
}

