extern unsigned int *auStack_30;
extern int fn_82C0B638();


unsigned __int64 fn_82C033B8(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puStack00000024;
  unsigned char auStack_30 [48];
  
  *(unsigned int *)(param_1 + 0x298) = 0;
  *(unsigned int *)(param_1 + 0x29c) = 0;
  puStack00000024 = param_3;
  lVar1 = fn_82C0B638(*(unsigned int *)(param_1 + 0x2a0),param_2,auStack_30);
  uVar2 = -(unsigned __int64)(lVar1 != 0) & 0xffffffff80004005;
  if (-1 < (int)uVar2) {
    *(unsigned int *)(param_1 + 0x2a4) = 0;
  }
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = 0;
  }
  return uVar2;
}

