extern int fn_8267C4F0();
extern int fn_826959C8();
extern int fn_826A7398();


void fn_8274BE60(int param_1)

{
  unsigned char *puVar1;
  int iVar2; int *iface;
  int *piVar3;
  unsigned char uVar4;
  
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    iVar2 = fn_826A7398(*(unsigned *)(param_1+0x18));
    iface = (int *)(iVar2+8);
    piVar3 = (int *)(*(int (**)())(*iface+0xc))(iface,0x1b);
    if (piVar3 != (int *)0x0) {
      uVar4 = (*(int (**)())(*piVar3 + 0x10))(piVar3);
      puVar1 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar1);
      puVar1[4] = uVar4;
      *puVar1 = 2;
      fn_8267C4F0(piVar3);
    }
  }
  return;
}

