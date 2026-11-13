extern int fn_8265CA20();
extern int fn_83066120();
extern unsigned int lbl_83265080;


void fn_83065DB0(void)

{
  if (lbl_83265080 != 0) {
    if (*(unsigned int *)(lbl_83265080 + 0x10) != 0) {
      fn_83066120(*(unsigned int *)(lbl_83265080 + 0x10),1);
    }
    if (*(unsigned int *)(lbl_83265080 + 0x14) != 0) {
      fn_83066120(*(unsigned int *)(lbl_83265080 + 0x14),1);
    }
    if (*(unsigned int *)(lbl_83265080 + 0x18) != 0) {
      fn_83066120(*(unsigned int *)(lbl_83265080 + 0x18),1);
    }
    fn_8265CA20(*(unsigned int *)(lbl_83265080 + 8));
    fn_8265CA20(*(unsigned int *)(lbl_83265080 + 0xc));
    fn_8265CA20(lbl_83265080);
    lbl_83265080 = 0;
  }
  return;
}

