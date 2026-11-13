#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define _uStack_20 ((*(unsigned __int64*)&uStack_20))
extern int fn_8225F6D0();
extern int fn_8245AE18();
extern int fn_8245B168();
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;
extern unsigned int uStack_1e;
extern unsigned int uStack_20;


void fn_824B70F0(void)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned short uVar3;
  unsigned short uStack_20;
  unsigned short uStack_1e;
  
  if (lbl_832760AA == '\0') {
    lbl_832760B8 = 0;
    lbl_832760BC = 0;
    uVar1 = uStack_1e;
    uVar3 = uStack_1e;
  }
  else {
    if (lbl_832760AB == '\0') {
      fn_8225F6D0();
    }
    uVar1 = (short)lbl_832760B8;
    uVar3 = (short)lbl_832760BC;
  }
  uVar2 = fn_8245AE18();
  _uStack_20 = CONCAT22(uVar1,uStack_1e);
  fn_8245B168(uVar2,&uStack_20,2);
  _uStack_20 = CONCAT22(uVar3,uStack_1e);
  fn_8245B168(uVar2,&uStack_20,2);
  return;
}

