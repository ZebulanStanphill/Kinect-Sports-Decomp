extern int fn_8265C990();
extern int fn_829DBB38();
extern int fn_829DFC38();
extern int fn_829E0300();
extern int fn_82A1E658();
extern int fn_82A27148();
extern unsigned int lbl_832179FC;


void fn_829D4F90(void)

{
  fn_829DBB38();
  if (lbl_832179FC != 0) {
    if (*(int *)(lbl_832179FC + 0x8f4c4) != 0) {
      ObDereferenceObject(*(unsigned int *)(lbl_832179FC + 0x8f4c4));
      *(unsigned int *)(lbl_832179FC + 0x8f4c4) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4c8) != 0) {
      ObDereferenceObject(*(unsigned int *)(lbl_832179FC + 0x8f4c8));
      *(unsigned int *)(lbl_832179FC + 0x8f4c8) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4b8) != 0) {
      fn_82A1E658(*(unsigned int *)(lbl_832179FC + 0x8f4b8));
      *(unsigned int *)(lbl_832179FC + 0x8f4b8) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4bc) != 0) {
      fn_82A1E658(*(unsigned int *)(lbl_832179FC + 0x8f4bc));
      *(unsigned int *)(lbl_832179FC + 0x8f4bc) = 0;
    }
    if (*(int *)(lbl_832179FC + 0x8f4c0) != 0) {
      fn_82A1E658(*(int *)(lbl_832179FC + 0x8f4c0));
      *(unsigned int *)(lbl_832179FC + 0x8f4c0) = 0;
    }
    fn_829DFC38();
    fn_829E0300(lbl_832179FC + 0x8fd08);
    if (*(int *)(lbl_832179FC + 0x8f4cc) != 0) {
      fn_82A27148(*(int *)(lbl_832179FC + 0x8f4cc));
    }
    if (*(int *)(lbl_832179FC + 0x8f4d0) != 0) {
      fn_8265C990(*(unsigned int *)(lbl_832179FC + 0x8f4d0),0x209d0000);
      *(unsigned int *)(lbl_832179FC + 0x8f4d0) = 0;
    }
    if (lbl_832179FC != 0) {
      fn_8265C990(lbl_832179FC,0x209d0000);
      lbl_832179FC = 0;
    }
  }
  return;
}

