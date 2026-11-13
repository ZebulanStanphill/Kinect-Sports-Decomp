extern int fn_82FA5190();
extern int fn_83022140();
extern unsigned int lbl_831BC768;


void fn_830279A8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    fn_83022140(*(int *)(param_1 + 0x14));
    (*(int (**)())**(unsigned int **)(param_1 + 0x14))(*(unsigned int **)(param_1 + 0x14),0);
    fn_82FA5190(lbl_831BC768,*(unsigned int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

