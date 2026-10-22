extern unsigned char fn_828ACCE8(void *);
extern unsigned char fn_828B30D8(void *);
extern void fn_828D2DB8(void *, int);
extern void fn_828D2F28(void *);

typedef struct {
  int a;
  int b;
  void *c;
} S;

void fn_828DA9D8(S *p)
{
  if (!fn_828ACCE8(p->c)) {
    fn_828D2F28(p);
    return;
  }
  if (!fn_828B30D8(p->c)) {
    fn_828D2DB8(p, 8);
  }
}
