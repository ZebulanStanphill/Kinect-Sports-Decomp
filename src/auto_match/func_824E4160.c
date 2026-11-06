typedef struct Inner_824E4160 { int pad0; int *q; } Inner_824E4160;
typedef struct Glob_824E4160 { char pad[0xec]; Inner_824E4160 *p; } Glob_824E4160;
typedef struct Tbl_824E4160 { char pad[0x51]; unsigned char flag; } Tbl_824E4160;
typedef struct Res_824E4160 { char pad[8]; int mode; } Res_824E4160;

extern Glob_824E4160 lbl_832960A0;
extern Tbl_824E4160 lbl_8326597C;
extern int fn_825200A8(Tbl_824E4160 *t, int *x);
extern Res_824E4160 *fn_8249ABC0(void);
extern unsigned int fn_8225C590(void);
extern int fn_8225CDB0(unsigned int a, int b);

void fn_824E4160(void)
{
  int *q;
  int x;
  Res_824E4160 *r;

  if (lbl_832960A0.p != 0) {
    q = lbl_832960A0.p->q;
  } else {
    q = 0;
  }
  x = *q;
  if (lbl_8326597C.flag == 0) {
    if (fn_825200A8(&lbl_8326597C, &x) == 0) {
      r = fn_8249ABC0();
      if (r->mode != 2 && r->mode != 1) {
        fn_8225CDB0(fn_8225C590(), 0);
      }
    }
  }
}
