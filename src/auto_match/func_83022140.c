extern int fn_82FA52E0();
extern unsigned int lbl_831BC770;


void fn_83022140(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    fn_82FA52E0(lbl_831BC770, *(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  return;
}

