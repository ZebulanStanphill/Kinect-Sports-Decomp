unsigned __int64 fn_82C127B8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x14);
  uVar2 = *puVar1;
  if (((param_2 <= uVar2) ||
      ((*(int *)((int)puVar1 + 0xc) != 0 &&
       (param_2 - uVar2 <= (unsigned __int64)*(unsigned int *)((int)puVar1 + 0x2c))))) &&
     ((uVar2 <= param_2 ||
      ((*(int *)(puVar1 + 4) != 0 && (uVar2 - param_2 <= (unsigned __int64)*(unsigned int *)((int)puVar1 + 0x24))))
      ))) {
    *puVar1 = param_2;
    return 0;
  }
  return 0xffffffff80500003;
}

