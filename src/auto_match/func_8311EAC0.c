typedef struct Slot_8311EAC0 { int a; int b; } Slot_8311EAC0;
extern Slot_8311EAC0 lbl_83292B90[];
extern void fn_82F51A50(Slot_8311EAC0 *s, int v);
extern void fn_8313E4A0(void);
extern int atexit(void (*f)(void));

void fn_8311EAC0(void)
{
  int i = 5;
  Slot_8311EAC0 *p = lbl_83292B90;
  do {
    fn_82F51A50(p, 0);
    i--;
    p++;
  } while (i >= 0);
  atexit(fn_8313E4A0);
}
