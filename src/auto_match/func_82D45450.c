void fn_82D45450(int param_1,unsigned int param_2,unsigned short param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)(param_2 >> (*(unsigned int *)(param_1 + 0x1c) & 0x3f));
  if (uVar2 == 0) {
    *(unsigned short *)((*(unsigned int *)(param_1 + 0x20) & param_2) * 0x10 + *(int *)(param_1 + 0x6c) + 0xc) =
         param_3;
    return;
  }
  uVar2 = uVar2 - 1;
  uVar1 = (unsigned __int64)
          *(unsigned short *)
           ((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 4) + *(int *)(param_1 + 0x78) +
           0x44);
  if (uVar1 != 0xffff) {
    uVar2 = uVar1;
  }
  *(unsigned short *)
   (*(int *)((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 4) + *(int *)(param_1 + 0x78)
            + 0x34) + (*(unsigned int *)(param_1 + 0x24) & param_2) * 2) = param_3;
  return;
}

