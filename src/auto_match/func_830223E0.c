extern int fn_82FA5190();
extern unsigned int lbl_831BC770;


void fn_830223E0(int param_1)

{
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_82FA5190(lbl_831BC770);
    *(unsigned int *)(param_1 + 0x34) = 0;
  }
  return;
}

