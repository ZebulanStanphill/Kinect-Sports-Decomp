typedef struct Target_82582228 { char pad[0x54]; unsigned char flag; } Target_82582228;
typedef struct Node_82582228 {
  Target_82582228 *target;
  int pad4[2];
  unsigned char a, b, c;
  struct Node_82582228 *next;
} Node_82582228;
typedef struct Obj_82582228 {
  char pad0[0xe0];
  Node_82582228 *head;
} Obj_82582228;

extern int fn_82544528(void);
extern void fn_8263CBB0(unsigned int a, int b, int c, int d);
extern void fn_825D8490(Target_82582228 *t, float v, int b, int c);
extern unsigned int lbl_8320A898;

void fn_82582228(Obj_82582228 *o, float v, int b)
{
  Node_82582228 *n = o->head;
  int r = fn_82544528();
  fn_8263CBB0(lbl_8320A898, 1, r, 0x40000000);
  for (; n != 0; n = n->next) {
    if (n->a == 0 && n->b == 0 && n->c != 0) {
      n->target->flag = 0;
      fn_825D8490(n->target, v, b, 0);
    }
  }
  fn_8263CBB0(lbl_8320A898, 1, 0, 0x40000000);
}
