extern unsigned int lbl_82194E48;
extern unsigned int lbl_825474F8;


void fn_825474D0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x825474f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(&lbl_825474F8 + (unsigned int)(unsigned char)(&lbl_82194E48)[param_1] * 4))();
  return;
}

