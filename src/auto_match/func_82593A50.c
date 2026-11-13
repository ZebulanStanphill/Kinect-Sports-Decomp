extern int fn_823AB478();
extern int fn_82512610();
extern int fn_825269D0();
extern int fn_828EA610();
extern int fn_828EB518();
extern int fn_82AB8588();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8327F644[];


void fn_82593A50(unsigned __int64 param_1)

{
  unsigned char cVar3;
  unsigned int iVar2;
  unsigned int uVar1;
  
  cVar3 = fn_828EA610();
  fn_82512610(param_1,0,cVar3 == '\0',0);
  lbl_8327F644[9] = fn_823AB478(param_1);
  cVar3 = fn_828EA610(param_1);
  if (cVar3 != '\0') {
    iVar2 = fn_82AB8588(lbl_83265988);
    if (iVar2 == 0xff) {
      uVar1 = (unsigned __int64)lbl_83265988;
    }
    else {
      uVar1 = fn_828EB518();
    }
    fn_82512610(uVar1,1,0,0);
  }
  fn_825269D0(0x3e,0);
  return;
}

