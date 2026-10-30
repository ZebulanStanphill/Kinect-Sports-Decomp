typedef struct Ptr_824E3DF0 { char pad[4]; void *f4; } Ptr_824E3DF0;
typedef struct GA_824E3DF0 { char pad[0xec]; Ptr_824E3DF0 *p; } GA_824E3DF0;
typedef struct GB_824E3DF0 { char pad[0x18]; int flag; } GB_824E3DF0;
extern GA_824E3DF0 lbl_832960A0;
extern GB_824E3DF0 lbl_8327FBC0;
extern int *fn_824E3740(void);
extern int *fn_82526930(void);

void fn_824E3DF0(void)
{
  int *p;
  void *x;

  x = lbl_832960A0.p ? lbl_832960A0.p->f4 : 0;
  if (x != 0 && lbl_8327FBC0.flag == 0) {
    p = fn_824E3740();
    if (*p == 0) {
      if (p[1] == 0) {
        p = fn_82526930();
      }
      *p = 1;
      p[1] = 0;
    }
  }
}
