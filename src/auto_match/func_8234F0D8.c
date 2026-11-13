extern int fn_8234F188();
extern int fn_82560010();
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8234F0D8(unsigned int *param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = fn_82560010(*(unsigned int *)*param_1);
  dVar2 = (double)*(float *)(iVar1 + 0x4c);
  if (dVar2 == (double)lbl_821954E8) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    dVar2 = (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460);
  }
  fn_8234F188(dVar2,(double)*(float *)(iVar1 + 0x48),(double)*(float *)(iVar1 + 0x50),
                    (double)*(float *)(iVar1 + 0x54),param_1,iVar1 + 0x40,iVar1 + 0x44);
  return;
}

