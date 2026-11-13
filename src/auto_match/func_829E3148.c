extern int fn_829DB740();
extern int fn_829E3820();
extern int fn_829E53C0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8315C704;


unsigned __int64 fn_829E3148(int param_1)

{
  float fVar1;
  unsigned __int64 uVar2;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    uVar2 = 0xffffffff8000ffff;
  }
  else {
    fn_829E53C0((double)lbl_82005748,(double)*(float *)(param_1 + 0x54),(double)lbl_8315C704,
                 param_1 + 0x40);
    fn_829DB740();
    uVar2 = fn_829E3820((double)lbl_82005748,param_1 + 0x40);
    fVar1 = lbl_82005748;
    if (-1 < (int)uVar2) {
      *(float *)(param_1 + 0x60) = lbl_82005748;
      uVar2 = 0;
      *(float *)(param_1 + 0x10) = fVar1;
      *(unsigned char *)(param_1 + 0x6d) = 1;
    }
  }
  return uVar2;
}

