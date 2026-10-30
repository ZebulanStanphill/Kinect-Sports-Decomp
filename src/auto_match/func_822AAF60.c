__declspec(noreturn) extern void fn_82F63108(void);
extern void *fn_822C5B18(void *, void *);
extern void fn_82359C18(void *);
extern void fn_82381BC0(void *);

struct Sink_822AAF60;
typedef struct SinkVt_822AAF60 {
  int pad;
  void (*f4)(struct Sink_822AAF60 *, unsigned int);
} SinkVt_822AAF60;
typedef struct Sink_822AAF60 {
  SinkVt_822AAF60 *vt;
} Sink_822AAF60;
typedef struct Wrap_822AAF60 {
  int pad[4];
  Sink_822AAF60 *sink;
} Wrap_822AAF60;
typedef struct LNode_822AAF60 {
  struct LNode_822AAF60 *next;
  struct LNode_822AAF60 *prev;
  int pad[2];
  unsigned int value;
} LNode_822AAF60;
typedef struct Group_822AAF60 {
  int pad;
  LNode_822AAF60 *list;
} Group_822AAF60;
typedef struct It_822AAF60 {
  LNode_822AAF60 *p;
} It_822AAF60;
typedef struct Vec_822AAF60 {
  Group_822AAF60 **first;
  Group_822AAF60 **last;
} Vec_822AAF60;

void fn_822AAF60(Vec_822AAF60 *v, void *arg)
{
  Group_822AAF60 **g;
  Group_822AAF60 **end;
  Wrap_822AAF60 *w;
  LNode_822AAF60 *head;
  It_822AAF60 it;
  char buf[0x20];
  g = v->first;
  end = v->last;
  for (; g != end; g++) {
    Group_822AAF60 *grp = *g;
    w = (Wrap_822AAF60 *)fn_822C5B18(buf, arg);
    head = grp->list;
    for (it.p = head->next; it.p != head; fn_82381BC0(&it)) {
      if (w->sink == 0) {
        fn_82F63108();
      }
      w->sink->vt->f4(w->sink, it.p->value);
    }
    fn_82359C18(w);
  }
  fn_82359C18(arg);
}
