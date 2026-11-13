extern int fn_8268AF70();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_8278B788(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned char bStack_31;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  uVar4 = 0x1505;
  uStack_30 = *(unsigned int *)(param_1 + 0x40);
  lVar5 = 0x10;
  uStack_2c = *(unsigned int *)(param_1 + 0x44);
  uStack_28 = *(unsigned int *)(param_1 + 0x48);
  uStack_24 = (unsigned int)*(unsigned char *)(param_1 + 0x4c);
  iVar3 = 0x10;
  do {
    uVar4 = (unsigned __int64)(&bStack_31)[iVar3] + (__int64)(int)uVar4 * 0x1003f;
    lVar5 = lVar5 + -1;
    iVar3 = iVar3 + -1;
  } while (lVar5 != 0);
  uVar1 = fn_8268AF70(((unsigned __int64)*(unsigned int *)(param_1 + 0x38) & 0xfffffffc) + 8,
                       *(unsigned int *)(*(unsigned int *)(param_1 + 0x38) & 0xfffffffc) & 0x7fffffff,0x1505);
  uVar2 = fn_8268AF70(((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) & 0xfffffffc) + 8,
                       *(unsigned int *)(*(unsigned int *)(param_1 + 0x3c) & 0xfffffffc) & 0x7fffffff,0x1505);
  return uVar2 ^ uVar1 ^ uVar4;
}

