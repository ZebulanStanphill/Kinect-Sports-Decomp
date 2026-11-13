extern unsigned int lbl_82194AF0;
extern unsigned int lbl_82606E50;


void fn_82606E28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x82606e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(&lbl_82606E50 + (unsigned char)(&lbl_82194AF0)[param_1]))();
  return;
}

