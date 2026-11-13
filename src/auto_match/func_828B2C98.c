extern int fn_828B25C8();
extern int fn_828B2BF8();
extern unsigned char fn_828B2DE0();
extern unsigned char fn_828EA628();
extern int fn_828EA638();


void fn_828B2C98(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned char cVar3;
  
  cVar3 = fn_828EA628();
  if (cVar3 != '\0') {
    fn_828B2BF8();
    fn_828B25C8();
    fn_828EA638();
  }
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  if (piVar1 != *(int **)(param_1 + 0xc)) {
    do {
      piVar2 = (int *)piVar1[2];
      cVar3 = fn_828B2DE0(piVar2);
      if (cVar3 != '\0') {
        (*(int (**)())(*piVar2 + 0x14))(piVar2);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xc));
  }
  return;
}

