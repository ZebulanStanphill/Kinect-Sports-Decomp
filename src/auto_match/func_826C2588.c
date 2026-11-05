extern int fn_82694D70(int *);
extern int fn_826C1078(void *, int **);
extern int fn_826C1860(void *, int *);

void fn_826C2588(void *self, int *p, unsigned char flag)
{
  int *a;
  if (flag != 0) {
    fn_826C1860(self, p);
  } else {
    a = p;
    if (*(unsigned int *)(*p + 4) == 0)
      fn_82694D70((int *)*p);
    fn_826C1078(self, &a);
  }
}
