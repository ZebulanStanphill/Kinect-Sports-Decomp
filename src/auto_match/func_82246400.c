extern int fn_82517D50();
extern int fn_8265C9E0();
extern int fn_828904D8();
extern int fn_828AD740();
extern unsigned int lbl_82197950;
extern unsigned int lbl_82197990;


void fn_82246400(int param_1,unsigned __int64 param_2,int param_3)

{
  char cVar2;
  unsigned int *puVar1;
  
  (**(int (***)())(**(int **)(param_1 + 0x18) + 0x10))();
  if (param_3 == 0) {
    *(unsigned char *)(param_1 + 0x3c) = 0;
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  else if (param_3 == 2) {
    cVar2 = fn_828AD740(*(unsigned int *)(param_1 + 8));
    if (cVar2 != '\0') {
      puVar1 = (unsigned int *)fn_8265C9E0(0x88);
      if (puVar1 == (unsigned int *)0x0) {
        puVar1 = (unsigned int *)0x0;
      }
      else {
        fn_82517D50(puVar1,*(unsigned int *)(param_1 + 8),6);
        *(unsigned char *)(puVar1 + 0x20) = 0;
        *puVar1 = &lbl_82197950;
        puVar1[0x1a] = &lbl_82197990;
        puVar1[0x21] = 0;
      }
      *(unsigned int **)(param_1 + 0x38) = puVar1;
      fn_828904D8();
    }
  }
  else if (param_3 == 3) {
    *(unsigned char *)(param_1 + 0x44) = 0;
  }
  return;
}

