extern void fn_82827910(void *p, int a, int b, int c);
extern int fn_82827980(void *p, int a, int b);
extern int fn_82828380(void *p, int a);

void fn_82826518(void *p, int a, int b, int c)
{
  fn_82827910(p, fn_82828380(p, a), fn_82827980(p, b, 0), c);
}
