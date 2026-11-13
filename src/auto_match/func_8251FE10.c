extern unsigned int *auStack_1f0;
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_828EA610();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


unsigned __int64 fn_8251FE10(int *param_1)

{
  char cVar1;
  int in_r7;
  unsigned char auStack_1f0 [496];
  
  if (*param_1 != 0) {
    fn_825200F0(auStack_1f0,param_1);
    if (lbl_832659CD != '\0') {
      if (in_r7 == 0) {
        in_r7 = lbl_83265988;
      }
      if (((*(char *)(in_r7 + 0xd8) == '\0') && (cVar1 = fn_828EA610(in_r7), cVar1 == '\0')) &&
         (*(int *)(in_r7 + 0x120) != -1)) {
                    /* WARNING: Subroutine does not return */
        fn_82522D98(0x148);
      }
    }
  }
  return 0;
}

