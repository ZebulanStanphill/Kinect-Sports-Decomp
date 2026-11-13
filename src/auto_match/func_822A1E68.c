typedef unsigned char bool;
extern int fn_8226D970();
extern int fn_82292AE8();
extern int fn_822931D8();
extern int fn_822A22C8();
extern int fn_822A23A8();
extern int fn_822A2468();
extern int fn_822A2938();
extern int fn_82460420();
extern int fn_82512B08();
extern int fn_82512B70();
extern unsigned int lbl_831D12B0;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12C4;
extern unsigned int lbl_832765BC;
extern unsigned int lbl_8327FC0C;


void fn_822A1E68(unsigned __int64 param_1)

{
  bool bVar1;
  int iVar2;
  
  if (lbl_831D12C4 == '\0') {
    lbl_831D12C4 = 1;
    if (lbl_831D12B8 == 0) {
      fn_822A2468();
    }
    else {
      fn_822A23A8();
    }
    iVar2 = fn_822A22C8();
    if (iVar2 == 0) {
      if (lbl_831D12B0 == 0) {
        lbl_831D12B0 = fn_82512B08(1,lbl_831D12B8 == 0);
      }
    }
    else if (lbl_831D12B0 != 0) {
      fn_82512B70();
      lbl_831D12B0 = 0;
    }
    bVar1 = lbl_8327FC0C == 0;
    iVar2 = fn_82292AE8();
    *(bool *)(iVar2 + 0x4c) = bVar1;
    fn_82292AE8();
    fn_822931D8();
    lbl_831D12C4 = '\0';
    fn_8226D970();
    if (lbl_832765BC != 0) {
      fn_82460420(param_1);
    }
    fn_822A2938(param_1);
  }
  return;
}

