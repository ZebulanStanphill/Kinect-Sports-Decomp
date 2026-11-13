extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_82240378();
extern int fn_822BD338();


unsigned __int64 fn_822FC130(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  char cVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [64];
  
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x28);
  if (uVar1 == 0) {
    uVar2 = fn_82230110(auStack_60,0xffffffff82196582);
  }
  else {
    uVar2 = fn_8223B688(auStack_40,(unsigned __int64)uVar1 + 4);
  }
  fn_82240378(auStack_80,uVar2);
  if (uVar1 == 0) {
    fn_82230300(auStack_60,1,0);
  }
  else {
    fn_82230300(auStack_40,1,0);
  }
  uVar4 = 0;
  puVar5 = (unsigned int *)0x831cb86c;
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20);
  while ((cVar3 = fn_822BD338(auStack_80,*puVar5), cVar3 == '\0' &&
         (cVar3 = fn_822BD338((unsigned __int64)uVar1 + 4,*puVar5), cVar3 == '\0'))) {
    uVar4 = uVar4 + 0xc;
    puVar5 = puVar5 + 3;
    if (0x3b < uVar4) {
      uVar2 = 0;
LAB_822fc220:
      fn_82230300(auStack_80,1,0);
      return uVar2;
    }
  }
  uVar2 = 1;
  goto LAB_822fc220;
}

