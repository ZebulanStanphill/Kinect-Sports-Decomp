extern int fn_825580C0();
extern int fn_828EB518();
extern unsigned int lbl_83265988;


unsigned __int64 fn_8260E070(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = fn_825580C0(uVar2);
    if ((int)uVar1 != 0) {
      if ((uVar2 & 0xffffffff) == 0xff) {
        return (unsigned __int64)lbl_83265988;
      }
      uVar2 = fn_828EB518(uVar2);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return uVar1;
}

