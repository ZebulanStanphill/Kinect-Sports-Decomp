extern int fn_82FA52E0();
extern int fn_8307DE78();
extern int fn_8307E5A8();
extern int fn_8307E6E0();
extern unsigned int lbl_831BC770;


void fn_8304A420(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_8307DE78(*(int *)(param_1 + 0x28));
    fn_8307E6E0(*(unsigned int *)(param_1 + 0x28));
    fn_8307E5A8(*(unsigned int *)(param_1 + 0x28));
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    fn_82FA52E0(lbl_831BC770);
    *(unsigned int *)(param_1 + 0x70) = 0;
  }
  return;
}

