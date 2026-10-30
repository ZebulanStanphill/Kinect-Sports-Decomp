extern int fn_822315A0();
typedef struct Ref { unsigned int *p; unsigned int *rep; } Ref;
typedef struct Host { int p0; Ref *(*f)(Ref *, int, int); } Host;

static void swap(unsigned int *a, unsigned int *b) { unsigned int t = *a; *a = *b; *b = t; }

Ref *fn_82519D28(Ref *param_1, Host *param_2, int param_3, int param_4)
{
  Ref tmp;
  Ref *q;
  q = param_2->f(&tmp, param_3, param_4);
  param_1->p = 0;
  param_1->rep = 0;
  if (param_1 != q) {
    swap((unsigned int *)&param_1->rep, (unsigned int *)&q->rep);
    swap((unsigned int *)&param_1->p, (unsigned int *)&q->p);
  }
  if (tmp.rep != 0) fn_822315A0(tmp.rep);
  return param_1;
}
