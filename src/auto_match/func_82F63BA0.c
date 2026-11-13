extern int (*lbl_83263380)();


void fn_82F63BA0(void)

{
  unsigned __int64 in_r0;
  
  if (lbl_83263380 != (int (**)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x82f63bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*lbl_83263380)(0,0,0,0,0);
    return;
  }
  trapWord(0x1f,in_r0,0x16);
  return;
}

