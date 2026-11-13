typedef struct { unsigned __int64 lo, hi; } V16_8281F3D0;
extern unsigned char fn_82812748();
extern int fn_82812B80();
extern unsigned char fn_82813A78();
extern int fn_82A1E300();


void fn_8281F3D0(int param_1)

{
  unsigned char cVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    cVar1 = fn_82813A78(param_1);
    if (cVar1 != '\0') {
      fn_82812B80(param_1);
    }
    while (*(int *)(param_1 + 4) == 0) {
      cVar1 = fn_82812748(*(unsigned int *)(param_1 + 0xc));
      if (cVar1 == '\0') {
        fn_82A1E300();
      }
    }
    __emit(0x7C2004AC);
  }
  return;
}

