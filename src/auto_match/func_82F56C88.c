typedef struct Callable_82F56C88 Callable_82F56C88;
typedef struct {
  void *slot0;
  void (*call)(Callable_82F56C88 *self, float dt);
} CallableVt_82F56C88;
struct Callable_82F56C88 { CallableVt_82F56C88 *vt; };
typedef struct {
  char pad[0x10];
  Callable_82F56C88 *impl;  /* 0x10 */
} Function_82F56C88;
typedef struct InnerNode_82F56C88 {
  struct InnerNode_82F56C88 *left;
  char pad[0x2c];
  Function_82F56C88 fn;     /* 0x30 */
} InnerNode_82F56C88;
typedef struct OuterNode_82F56C88 {
  struct OuterNode_82F56C88 *left;
  char pad[0x10];
  InnerNode_82F56C88 *innerHead;  /* 0x14 */
} OuterNode_82F56C88;
typedef struct { int pad; OuterNode_82F56C88 *head; } Map_82F56C88;
extern __declspec(noreturn) void fn_82F63108(void);
extern void fn_822509A0(InnerNode_82F56C88 **it);
extern void fn_82518FF0(OuterNode_82F56C88 **it);

void fn_82F56C88(Map_82F56C88 *self, float dt)
{
  OuterNode_82F56C88 *head = self->head;
  OuterNode_82F56C88 *it = head->left;
  OuterNode_82F56C88 *cur = it;
  while (cur != head) {
    InnerNode_82F56C88 *ihead = cur->innerHead;
    InnerNode_82F56C88 *jt = ihead->left;
    while (jt != ihead) {
      Function_82F56C88 *f = &jt->fn;
      if (f->impl == 0) fn_82F63108();
      f->impl->vt->call(f->impl, dt);
      fn_822509A0(&jt);
      ihead = cur->innerHead;
    }
    fn_82518FF0(&it);
    head = self->head;
    cur = it;
  }
}
