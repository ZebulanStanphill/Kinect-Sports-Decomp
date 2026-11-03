extern int fn_82381BC0(void *);
extern void *fn_8265C9E0(int);
extern int fn_82886518(void *, int, int);
extern int fn_82897BD0(int);
extern int fn_828BDDA0(void *);
extern int fn_828BE158(int, void *, int, int);
extern int fn_828D2DB8(int, int);
extern char lbl_82025900[];
extern char lbl_82025908[];
typedef struct Node { struct Node *next; int p1, p2, p3; int a; } Node_828DAF10;
typedef struct { int pad[0x84]; Node_828DAF10 *list; } Inner_828DAF10;
void fn_828DAF10(int param_1)
{
  Node_828DAF10 *it;
  Node_828DAF10 *end;
  int *o;
  void *mem;
  int uVar2;
  int uVar3;
  end = ((Inner_828DAF10 *)*(int *)(param_1 + 8))->list;
  it = end->next;
  if (it != end) {
    do {
      uVar2 = it->a;
      mem = fn_8265C9E0(0x98);
      if (mem != 0) { fn_828BDDA0(mem); o = (int *)mem; o[0] = (int)lbl_82025908; o[0x14] = (int)lbl_82025900; o[0x20] = 2; } else o = 0;
      fn_82886518(o, -1, -1);
      fn_828BE158(*(int *)(param_1 + 8), o, fn_82897BD0(uVar2), 0);
      fn_82381BC0(&it);
    } while (it != ((Inner_828DAF10 *)*(int *)(param_1 + 8))->list);
  }
  fn_828D2DB8(param_1, 9);
}
