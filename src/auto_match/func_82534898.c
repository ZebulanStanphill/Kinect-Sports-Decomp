extern unsigned int *auStack_20;
extern int fn_82536E90();
extern int fn_8265CA20();
extern unsigned int lbl_821C3F68;


void fn_82534898(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned char auStack_20 [8];
  
  lVar1 = 6;
  *param_1 = &lbl_821C3F68;
  puVar2 = param_1 + 0x1d;
  do {
    fn_82536E90(auStack_20,puVar2 + -4,*(unsigned int *)puVar2[-3]);
    fn_8265CA20(puVar2[-3]);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -4;
  } while (-1 < lVar1);
  return;
}

