extern unsigned int lbl_82194B10;
extern unsigned int lbl_82485380;


void fn_82485358(unsigned __int64 param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x8248537c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(&lbl_82485380 + *(unsigned short *)(&lbl_82194B10 + param_2 * 2)))();
  return;
}

