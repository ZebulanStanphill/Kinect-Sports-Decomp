extern struct { char pad[0xec]; unsigned int obj; } lbl_832960A0;
extern struct { int a; int b; int state; } lbl_8326C2AC;
extern void fn_82598D50(unsigned int, unsigned int *, unsigned int *);
extern int *fn_82512C30(void);

static __forceinline unsigned int Get(void) { return lbl_832960A0.obj != 0 ? *(unsigned int *)(lbl_832960A0.obj + 4) : 0; }
int fn_82593E80(void)
{
  if (Get() != 0) {
    unsigned int a, b;
    fn_82598D50(Get(), &a, &b);
    if (a != 0) {
      if (b != 0) {
        lbl_8326C2AC.state = 0;
        return 0;
      }
    } else if (b == 0) {
      lbl_8326C2AC.state = 1;
      return 1;
    }
    lbl_8326C2AC.state = 1;
    return 0;
  }
  return *fn_82512C30() == 0;
}
