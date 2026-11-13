extern int fn_822315A0();
extern int fn_82376640();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0DB8;


void fn_823AB500(int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puStack_40;
  unsigned int *puStack_3c;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0xc);
  puStack_3c = (unsigned int *)fn_8265C9E0(0x10);
  if (puStack_3c == (unsigned int *)0x0) {
    puStack_3c = (unsigned int *)0x0;
  }
  else {
    puStack_3c[3] = puVar1;
    puStack_3c[1] = 1;
    puStack_3c[2] = 1;
    *puStack_3c = &lbl_821C0DB8;
  }
  *puVar1 = param_2;
  puStack_40 = puVar1;
  uVar2 = (**(int (***)())(*param_1 + 4))(param_1);
  puVar1[1] = uVar2;
  *(unsigned char *)(puVar1 + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  *(unsigned char *)((int)puVar1 + 10) = 0;
  fn_82376640(param_1 + 0x1b,&puStack_40);
  param_1[1] = 1;
  param_1[0x1a] = param_1[0x1a] + 1;
  if (puStack_3c != (unsigned int *)0x0) {
    fn_822315A0();
  }
  return;
}

