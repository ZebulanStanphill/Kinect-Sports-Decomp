typedef struct Obj_828D4028 { int pad; int a[4]; int b[4]; } Obj_828D4028;
extern unsigned char fn_828AD740(int);
extern unsigned char fn_828D34E0(void *, int);
extern void fn_828D38C0(void *);
extern void fn_828D3FC8(void *);

void fn_828D4028(char *p)
{
  if (fn_828AD740(*(int *)(p + 0x24)) != 0) {
    fn_828D3FC8(p + 4);
  } else {
    fn_828D3FC8(p + 4);
    if (fn_828D34E0(p, 1) == 0) {
      return;
    }
  }
  fn_828D38C0(p + 0x14);
}
