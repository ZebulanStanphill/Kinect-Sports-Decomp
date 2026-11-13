extern int fn_8287CBD0();


typedef struct It_828A2988 { unsigned int *p; unsigned int b; unsigned int n; } It_828A2988;

It_828A2988 *fn_828A2988(It_828A2988 *param_1,It_828A2988 *param_2,It_828A2988 *param_3,It_828A2988 *param_4)
{
  unsigned int *pa;
  unsigned int *pb;
  unsigned int **pp;
  unsigned int *q;
  {
    while (param_2->n != param_3->n) {
      param_3->n = param_3->n - 1;
      pa = (unsigned int *)fn_8287CBD0(param_3);
      param_4->n = param_4->n - 1;
      pb = (unsigned int *)fn_8287CBD0(param_4);
      *pb = *pa;
    }
  }
  pp = (unsigned int **)param_4->p;
  param_1->p = 0;
  param_1->b = 0;
  if (pp != 0 && (q = *pp, q != 0)) {
    param_1->p = (unsigned int *)*q;
  }
  param_1->n = param_4->n;
  return param_1;
}
