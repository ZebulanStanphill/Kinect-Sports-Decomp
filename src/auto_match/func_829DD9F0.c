typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82A1EFC0();
extern V16 vectorSplatImmediateSignedWord128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_829DD9F0(int param_1)

{
  int in_r0;
  __int64 lVar1;
  int iVar2;
  unsigned char auVar3 [16];{ V16 _vt0 = vectorSplatImmediateSignedWord128(0); memcpy(auVar3, &_vt0, 16); }
  iVar2 = param_1 + 0x1c;
  *(unsigned int *)(param_1 + 0x10) = 0;
  lVar1 = 8;
  *(unsigned int *)(param_1 + 0x14) = 0;
  memcpy((void *)((const void *)(in_r0 + param_1 & 0xfffffff0)), auVar3, 16);
  do {
    *(unsigned int *)(iVar2 + 600) = 0;
    *(unsigned int *)(iVar2 + -4) = 0;
    fn_82A1EFC0(iVar2,0,600);
    lVar1 = lVar1 + -1;
    iVar2 = iVar2 + 0x260;
  } while (lVar1 != 0);
  return;
}
