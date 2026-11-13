extern int fn_826944C8();
extern int fn_82694610();


extern unsigned int strlen(const char *s);
typedef struct Rc_82694B60 { int a; int b; int rc; } Rc_82694B60;
typedef struct Hd_82694B60 { void *p; } Hd_82694B60;

void fn_82694B60(Rc_82694B60 **param_1,char *param_2)
{
  Rc_82694B60 *r;
  Rc_82694B60 *n;
  r = (Rc_82694B60 *)fn_82694610(*(unsigned int *)((unsigned int)*param_1 & 0xfffffc00),param_2,strlen(param_2));
  r->rc++;
  n = *param_1;
  if (--n->rc == 0) {
    fn_826944C8(n);
  }
  *param_1 = r;
}
