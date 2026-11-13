typedef struct { unsigned short len; unsigned short max; char *buf; } Ansi_82A2B528;
typedef struct { unsigned short len; unsigned short max; unsigned short *buf; } Uni_82A2B528;
extern int fn_82A1F2B8(char *);
extern char lbl_82196582[];

void fn_82A2B528(unsigned short *param_1)
{
  int st;
  Ansi_82A2B528 as;
  Uni_82A2B528 us;

  RtlInitUnicodeString(&us, param_1);
  st = RtlUnicodeStringToAnsiString(&as, &us, 1);
  if (st < 0) {
    as.buf = lbl_82196582;
  }
  fn_82A1F2B8(as.buf);
  if (st >= 0) {
    RtlFreeAnsiString(&as);
  }
}
