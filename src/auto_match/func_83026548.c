extern int fn_83037590();


extern char lbl_831BC7FC[];
void fn_83026548(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 4))(piVar1,lbl_831BC7FC);
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    fn_83037590(*(unsigned int *)(param_1 + 0x20));
    *(unsigned char *)(param_1 + 0x16) = 0;
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  return;
}

