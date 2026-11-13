extern int fn_82B40728();
extern unsigned char lbl_83223DF0;


extern char lbl_83223CF0[];
void fn_82B414D0(void)

{
  if (lbl_83223DF0 == '\0') {
    fn_82B40728(lbl_83223CF0,0x18,0x1a,5,0,0,0);
    fn_82B40728(lbl_83223CF0 + 0x80,0x17,0x1a,5,0,0,0);
    lbl_83223DF0 = '\x01';
  }
  return;
}

