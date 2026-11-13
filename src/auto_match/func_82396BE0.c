extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_8219250C;
extern float lbl_82192F70;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82396BE0(int param_1)

{
  unsigned int auStack_50 [4];
  unsigned char auStack_40 [48];
  
  if (*(int *)(param_1 + 0x2d0) == 0) {
    fn_82864988(auStack_40,0xffffffff821b4a88);
    auStack_50[0] = fn_828647D8();
    fn_82864898(auStack_40);
    fn_82536590(auStack_50,0);
    *(unsigned int *)(param_1 + 0x2d0) = 1;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(float *)(param_1 + 0x868) =
         ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192F70 +
         lbl_8219250C;
  }
  return;
}

