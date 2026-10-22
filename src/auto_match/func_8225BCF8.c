extern void fn_822315A0(void *);
extern int fn_827D5070(void *);
extern int fn_827D5088(void *);
extern void *fn_827D50B8(void *);
/* The XDK's ppcintrinsics.h defines __lwsync() as this __emit. */
void __emit(unsigned int opcode);
#define __lwsync() __emit(0x7C2004AC)

struct P1 { void *h; void *ev; };
struct P2 { int done; int pad; int a; int b; int pad2[3]; void *res; };

void fn_8225BCF8(struct P1 *param_1, struct P2 *param_2)
{
  void *r;
  r = fn_827D50B8(param_1->h);
  param_2->res = r;
  if (r == 0) {
    param_2->a = fn_827D5070(param_1->h);
    param_2->b = fn_827D5088(param_1->h);
  }
  else {
    param_2->a = 0;
    param_2->b = 0;
  }
  __lwsync();
  param_2->done = 1;
  if (param_1->ev != 0) {
    fn_822315A0(param_1->ev);
  }
}
