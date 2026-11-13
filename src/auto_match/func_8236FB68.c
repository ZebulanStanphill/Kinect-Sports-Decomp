extern unsigned int lbl_82194BB8;
extern unsigned int lbl_8236FB94;


void fn_8236FB68(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x8236fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(&lbl_8236FB94 + (unsigned int)(unsigned char)(&lbl_82194BB8)[param_1] * 4))();
  return;
}

