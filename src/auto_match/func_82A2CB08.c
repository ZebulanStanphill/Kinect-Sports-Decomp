void fn_82A2CB08(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  XeCryptSha(param_3,0x1000,0,0,0,0,
             (param_2 + ((param_2 & 0xffffffff) / 0xaa) * -0xaa) * 0x18 + param_4,0x14);
  uVar2 = (int)param_3 - *(int *)(param_1 + 0x34);
  iVar1 = (((int)uVar2 >> 0xc) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xfff) != 0)) * 8 +
          *(int *)(param_1 + 0x30);
  *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
  uVar2 = (int)param_4 - *(int *)(param_1 + 0x34);
  iVar1 = (((int)uVar2 >> 0xc) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 0xfff) != 0)) * 8 +
          *(int *)(param_1 + 0x30);
  *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
  return;
}

