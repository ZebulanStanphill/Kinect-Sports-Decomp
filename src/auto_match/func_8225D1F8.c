extern int fn_822750C8(void);
extern unsigned int fn_823AB478(void *);
extern void fn_825123E8(void);
extern void fn_82A1C0C8(int, int);

struct G { void *p; char pad[0x48]; unsigned char flag; };
extern struct G lbl_83265988;

void fn_8225D1F8(char *param_1, unsigned int param_2)
{
  if (param_2 < 8) {
    if (lbl_83265988.p == 0 || fn_823AB478(lbl_83265988.p) != param_2) {
      *(unsigned int *)(param_1 + 0x58) = param_2;
      fn_825123E8();
    }
  }
  else {
    fn_825123E8();
    lbl_83265988.flag = 1;
    fn_82A1C0C8(fn_822750C8(), 0x80000);
    *(unsigned int *)(param_1 + 0x58) = 0xff;
  }
}
