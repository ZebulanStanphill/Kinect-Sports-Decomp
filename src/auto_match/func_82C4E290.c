extern int fn_82C4E0F8();


unsigned __int64 fn_82C4E290(unsigned __int64 *param_1,__int64 param_2)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned __int64 uVar5;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 1) & 7;
  uVar5 = param_2 + 8;
  if ((int)uVar3 != 0) {
    uVar5 = uVar3 + param_2;
  }
  pbVar4 = *(unsigned char **)((int)param_1 + 0xc);
  if ((unsigned __int64)(*(unsigned int *)(param_1 + 1) + 0x10) < (uVar5 & 0xffffffff)) {
    do {
      if (*(unsigned char **)(param_1 + 2) < pbVar4) {
        if (*(int *)(param_1 + 3) != 1) break;
        fn_82C4E0F8(param_1);
        pbVar4 = *(unsigned char **)((int)param_1 + 0xc);
      }
      else {
        uVar2 = *(unsigned int *)(param_1 + 1);
        if (0x28 < (int)uVar2) {
          if (((unsigned __int64)uVar2 + 0x10 & 0xffffffff) < (uVar5 & 0xffffffff)) {
            return (unsigned __int64)(*pbVar4 >> ((unsigned __int64)uVar2 + 0xf8 & 0x7f)) + *param_1 >>
                   (0x20 - uVar5 & 0x7f) & 0xffffffff &
                   (unsigned __int64)(0xffffffff >> ((unsigned int)param_2 & 0x3f));
          }
          break;
        }
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        *(unsigned int *)(param_1 + 1) = uVar2 + 8;
        *(unsigned char **)((int)param_1 + 0xc) = pbVar4;
        *param_1 = ((unsigned __int64)bVar1 << ((__int64)(int)(0x28 - uVar2) & 0x7fU)) + *param_1;
      }
    } while ((unsigned __int64)(*(int *)(param_1 + 1) + 0x10) < (uVar5 & 0xffffffff));
  }
  return *param_1 >> (0x40 - uVar5 & 0x7f) & 0xffffffff &
         (unsigned __int64)(0xffffffff >> ((unsigned int)param_2 & 0x3f));
}

