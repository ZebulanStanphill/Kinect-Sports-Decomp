typedef struct { void *event; } Waiter_82FE72A0;
typedef struct { int a; int b; Waiter_82FE72A0 *waiter; } Req_82FE72A0;
extern void fn_82A1E810(void *event);

void fn_82FE72A0(void *self, int a, int b, Req_82FE72A0 *req)
{
  if (req != 0) {
    req->a = a;
    req->b = b;
    fn_82A1E810(req->waiter->event);
  }
}
