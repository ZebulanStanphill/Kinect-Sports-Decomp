typedef unsigned char bool;
extern int fn_8255AEF0();


bool fn_82624610(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_1 + 0x58);
  iVar1 = fn_8255AEF0((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) + 0x81c);
  if (iVar1 == 0) {
    *(unsigned int *)((int)((param_3 + 0x17U & 0xffffffff) << 2) + param_1) = *puVar2;
  }
  return iVar1 != 0;
}

