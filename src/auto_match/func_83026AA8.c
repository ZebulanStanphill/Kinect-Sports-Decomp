extern int fn_82FA5190();
extern int fn_8303A200();
extern unsigned int lbl_831BC770;


void fn_83026AA8(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x88) != 0) {
    if (*(unsigned int *)(param_1 + 0x9c) != 0) {
      fn_82FA5190(lbl_831BC770,*(unsigned int *)(param_1 + 0x9c));
      *(unsigned int *)(param_1 + 0x9c) = 0;
    }
    fn_82FA5190(lbl_831BC770,*(unsigned int *)(param_1 + 0x88));
    *(unsigned int *)(param_1 + 0x88) = 0;
    *(unsigned short *)(param_1 + 0x94) = 0;
    *(unsigned short *)(param_1 + 0x96) = 0;
    *(unsigned int *)(param_1 + 0x8c) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x74) != 0) {
    fn_82FA5190(lbl_831BC770,*(unsigned int *)(param_1 + 0x74));
    *(unsigned int *)(param_1 + 0x74) = 0;
    *(unsigned short *)(param_1 + 0x70) = 0;
  }
  fn_8303A200(param_1 + 0x10);
  return;
}

