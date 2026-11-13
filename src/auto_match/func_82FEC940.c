typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8300D748();
extern int fn_8300D8E8();
extern int fn_83023550();
extern int fn_83023558();
extern unsigned int lbl_832642E4;
extern unsigned int lbl_832643B0;
extern unsigned int lbl_832643E4;
extern unsigned int lbl_832643F0;


void fn_82FEC940(void)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = fn_83023550(lbl_832643B0);
  if (cVar2 == '\x01') {
    fn_83023558(lbl_832643B0);
    if ((lbl_832643E4 == 0) || (8 < (unsigned int)(*(int *)(lbl_832642E4 + 0x90) - lbl_832643E4))) {
      lbl_832643E4 = *(int *)(lbl_832642E4 + 0x90);
    }
  }
  if (lbl_832643F0 != 0) {
    cVar2 = fn_8300D8E8();
    bVar1 = true;
    if (cVar2 != '\0') goto LAB_82fec9c8;
  }
  bVar1 = false;
LAB_82fec9c8:
  if (bVar1) {
    fn_8300D748(lbl_832643F0);
  }
  return;
}

