extern void fn_82EE9D60(void *p, int a);
extern void fn_82EEA560(void *p, int *hr);
extern void *fn_8306C5D0(int a, int b, int c, int d);
extern void RtlInitializeCriticalSection(void *cs);
extern char lbl_8215FFD0[];

typedef struct ListEntry { struct ListEntry *Flink; struct ListEntry *Blink; } ListEntry;

typedef struct {
  int count;
  ListEntry head;
} List;

typedef struct {
  void *vtbl;
  char pad04[0x4c];
  char cs[0x1c];
  int m6c;
  void *handle;
  int m74;
  char sub[0x1098 - 0x78];
  List list;
  int a4;
  int a8;
  int ac;
} Obj;

Obj *fn_82EE9568(Obj *param_1, int param_2, int *param_3)
{
  List *l;

  fn_82EEA560(param_1, param_3);
  param_1->m6c = 0;
  param_1->vtbl = lbl_8215FFD0;
  param_1->handle = 0;
  fn_82EE9D60(param_1->sub, param_2);
  l = &param_1->list;
  l->count = 0;
  l->head.Blink = &l->head;
  l->head.Flink = &l->head;
  param_1->a4 = 1;
  param_1->a8 = 10;
  param_1->ac = 0;
  RtlInitializeCriticalSection(param_1->cs);
  param_1->handle = fn_8306C5D0(-1, 0, 0, param_1->m6c);
  if (param_1->handle == 0) {
    *param_3 = 0x8000ffff;
  }
  param_1->m74 = param_2;
  return param_1;
}
