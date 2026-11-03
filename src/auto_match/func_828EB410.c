typedef struct O_828EB410 { char p0[8]; unsigned char f8; char p9[0x4b]; int f54; unsigned char f58; unsigned char f59; char p5a[0x2e]; unsigned char f88; char p89[7]; int f90; } O_828EB410;
extern void *fn_828EB388(void);
extern void *fn_828EB278(void);
extern void *fn_828EB300(void);
extern void fn_8289F160(int *, void *, int *);
extern void fn_828EAB70(int *, void *, int);
extern unsigned char lbl_832144F6;
void fn_828EB410(O_828EB410 *o)
{
  int v;
  void *r;
  struct { int a, b; } L;
  if (--o->f90 == 0) {
    if (o->f8 != 0 && o->f88 != 0) lbl_832144F6 = 1;
    if (o->f8 != 0) {
      if (o->f59 != 0) {
        r = fn_828EB388();
        L.a = o->f54;
        fn_8289F160(&L.b, r, &L.a);
        v = L.b;
        r = fn_828EB388();
      } else {
        r = fn_828EB278();
        L.b = o->f54;
        fn_8289F160(&L.a, r, &L.b);
        v = L.a;
        r = fn_828EB278();
      }
    } else {
      r = fn_828EB300();
      L.b = o->f54;
      fn_8289F160(&L.a, r, &L.b);
      v = L.a;
      r = fn_828EB300();
    }
    fn_828EAB70(&L.b, r, v);
    o->f58 = 0;
  }
}
