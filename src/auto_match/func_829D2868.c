extern unsigned int lbl_83215A40;
extern unsigned int lbl_83215A54;
extern unsigned int lbl_83215A58;
extern unsigned int lbl_83215A5C;
extern unsigned int lbl_83215A60;


void fn_829D2868(int param_1)

{
  RtlEnterCriticalSection(0xffffffff8315c454);
  if (lbl_83215A40 == 1) {
    if (param_1 == 0) {
      if ((lbl_83215A58 & 1) != 0) goto LAB_829d28ec;
    }
    else {
      lbl_83215A60 = lbl_83215A5C;
      sync(0);
    }
    KeSetEvent(0xffffffff83215a44,1,0);
    if (lbl_83215A54 != 0) {
      KeSetEvent(lbl_83215A54,1,0);
    }
  }
LAB_829d28ec:
  RtlLeaveCriticalSection(0xffffffff8315c454);
  return;
}

