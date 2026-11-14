typedef struct Obj_82610EF8 {
  int pad0[3];
  char *res;     /* 0x0c */
  int x10;       /* 0x10 */
  int active;    /* 0x14 */
  int x18;       /* 0x18 */
} Obj_82610EF8;

extern void *lbl_8326B7C8;
extern int fn_827D9698(char *p);
extern int fn_827D9ED8(char *p);
extern void fn_827DBA00(void *mgr, int id, int flag, int offset, int a, int b, int c, int d, int e, int f, int g, int h);

void fn_82610EF8(Obj_82610EF8 *self, int offset, int a, int b, int c, int d, int f, int g)
{
  if (self->active != 0) {
    char *res = self->res;
    int flag = 1;
    if (fn_827D9698(res + 0x70) == 0x36)
      flag = 0;
    fn_827DBA00(lbl_8326B7C8, self->x18, flag, fn_827D9ED8(res) + offset, a, b, c, d, self->x10, f, g, 0);
  }
}
