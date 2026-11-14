extern int fn_82CFF8D0(int a, int b);

struct Sink_82DFA2F8;
typedef struct SinkVt_82DFA2F8 {
  void *slots[5];
  void (*Write)(struct Sink_82DFA2F8 *, int, const char *, int, int, int);
} SinkVt_82DFA2F8;
typedef struct Sink_82DFA2F8 { SinkVt_82DFA2F8 *vt; } Sink_82DFA2F8;
typedef struct Item_82DFA2F8 {
  char pad[0x10];
  int data;
  int n;
  int flags;
} Item_82DFA2F8;
typedef struct Self_82DFA2F8 {
  char pad[0x10];
  Item_82DFA2F8 **arr;
  int count;
} Self_82DFA2F8;

void fn_82DFA2F8(Self_82DFA2F8 *param_1, Sink_82DFA2F8 *param_2)
{
  Item_82DFA2F8 *it;
  int r;
  int i;
  int off;

  i = 0;
  if (0 < param_1->count) {
    off = 0;
    do {
      it = *(Item_82DFA2F8 **)(off + (int)param_1->arr);
      if ((it->flags & (int)0x80000000) == 0) {
        r = fn_82CFF8D0(it->data, it->flags << 5);
        param_2->vt->Write(param_2, 3, "Points", it->data, it->n << 5, r);
      }
      i++;
      off += 4;
    } while (i < param_1->count);
  }
}
