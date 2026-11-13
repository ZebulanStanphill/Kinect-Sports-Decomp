extern int fn_82FECEE8();
extern int fn_82FF53E8();
extern int fn_8301B4D8();
extern unsigned int lbl_832642F4;
extern unsigned int lbl_832642F8;


extern char lbl_83264558[];
unsigned __int64 fn_82FF0198(int param_1)

{
  RtlEnterCriticalSection(lbl_83264558);
  if (((*(unsigned char *)(param_1 + 0xd9) & 2) == 0) && ((*(unsigned char *)(param_1 + 0xda) & 0x80) == 0x80)) {
    unsigned int a = *(unsigned int *)(param_1 + 0x17c);
    unsigned int b;
    if (a != 0) {
      fn_8301B4D8(lbl_832642F8, a);
    }
    *(unsigned char *)(param_1 + 0xda) = *(unsigned char *)(param_1 + 0xda) & 0x7f;
    fn_82FECEE8(4,param_1);
    b = *(unsigned int *)(param_1 + 0x58);
    if (b != 0) {
      fn_82FF53E8(lbl_832642F4, b);
    }
  }
  RtlLeaveCriticalSection(lbl_83264558);
  return 1;
}

