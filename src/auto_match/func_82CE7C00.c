extern unsigned int *auStack_224;
extern int fn_82CE3E48();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_8323B468;
extern unsigned int uStack_228;
extern unsigned int uStack_22c;


void fn_82CE7C00(void)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned char *puStack_230;
  unsigned int uStack_22c;
  unsigned int uStack_228;
  unsigned char auStack_224 [500];
  
  puStack_230 = auStack_224;
  uStack_22c = 0;
  lVar3 = 0;
  uStack_228 = 0x80000080;
  for (iVar2 = lbl_8323B468; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    iVar1 = fn_82CE5410();
    if (uStack_22c == (uStack_228 & 0x3fffffff)) {
      fn_82CE63B0(*(unsigned int *)(iVar1 + 0x10),&puStack_230,4);
    }
    *(int *)(puStack_230 + uStack_22c * 4) = iVar2;
    lVar3 = (unsigned __int64)uStack_22c + 1;
    uStack_22c = (unsigned int)lVar3;
  }
  uVar4 = lVar3 - 1;
  if (-1 < (__int64)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      if (**(int **)(*(int *)(puStack_230 + (int)lVar3) + 0xc) != 0) {
        fn_82CE3E48();
        **(unsigned int **)(*(int *)(puStack_230 + (int)lVar3) + 0xc) = 0;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar4);
  }
  iVar2 = fn_82CE5410();
  uStack_22c = 0;
  if ((uStack_228 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),puStack_230,uStack_228 & 0x3fffffff,4);
  }
  return;
}

