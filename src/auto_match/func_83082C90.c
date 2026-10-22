extern void fn_83082890(void);
extern void fn_830828C0(void);
extern void fn_83082A80(void *a, void *b);
extern void fn_83082BF0(void *a, void *b);
extern void fn_83082980(void *a, void *b, int n, void (*f)(void));

void fn_83082C90(void *a, void *b, int level)
{
  if (level == 1) {
    fn_83082A80(a, b);
    fn_83082BF0(a, b);
  }
  if (level == 1 || level < 4) fn_83082980(a, b, 2, fn_83082890);
  if (level < 5) {
    fn_83082980(a, b, 8, fn_830828C0);
  }
}
