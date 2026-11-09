extern "C" {
void add_huff_table(void *, void *, char *, char *);
extern char lbl_82017AC4[];
extern char lbl_82017A00[];
extern char lbl_82017A0C[];
extern char lbl_82017A20[];
extern char lbl_820179EC[];
extern char lbl_82017930[];
extern char lbl_82017948[];
}
namespace v2 { extern "C" char lbl_82017A00[]; }

extern "C" void fn_827BEA30(char *p)
{
  add_huff_table(p, p + 0x58, lbl_82017AC4, lbl_82017A00);
  add_huff_table(p, p + 0x68, lbl_82017A0C, lbl_82017A20);
  add_huff_table(p, p + 0x5c, lbl_820179EC, v2::lbl_82017A00);
  add_huff_table(p, p + 0x6c, lbl_82017930, lbl_82017948);
}
