extern unsigned int *auStack_30;
extern int fn_8223F5A0();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int free();


void fn_82F62870(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_30 [48];
  
  fn_82F62680(auStack_30,0);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    iVar4 = iVar3 << 2;
    do {
      iVar4 = iVar4 + -4;
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar4);
      if ((iVar1 != 0) &&
         (puVar2 = (unsigned int *)fn_8223F5A0(iVar1), puVar2 != (unsigned int *)0x0)) {
        (**(int (***)())*puVar2)(puVar2,1);
      }
    } while (iVar3 != 0);
  }
  free(*(unsigned int *)(param_1 + 8));
  fn_82F626D0(auStack_30);
  return;
}

