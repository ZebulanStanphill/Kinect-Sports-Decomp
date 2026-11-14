extern int fn_8251FA58(void *obj);
extern int fn_825200A8(void *a, void *b);
extern void fn_82837D98(int key, int flags, unsigned *out);

typedef struct Res_8246BB70 { char pad[0x14]; int key; } Res_8246BB70;
typedef struct Node_8246BB70 {
  struct Node_8246BB70 *next;
  int pad4[2];
  Res_8246BB70 *res;
  int pad10[2];
  int handle;
  Res_8246BB70 *res2;
} Node_8246BB70;
typedef struct { unsigned owner; Node_8246BB70 *head; int pad[3]; } Group_8246BB70;
typedef struct {
  Group_8246BB70 groups[2];
  int h28;
  int h2c;
  int active;
  int h34;
} Mgr_8246BB70;

void fn_8246BB70(Mgr_8246BB70 *self)
{
  Group_8246BB70 *g;
  Node_8246BB70 *n;
  int i;
  unsigned owner;

  for (i = 0, g = self->groups; i < 2; i++, g++) {
    for (n = g->head->next; n != g->head; n = n->next) {
      if (self->active != 0
          && fn_825200A8(&self->h28, &n->handle) == 0
          && fn_825200A8(&self->h2c, &n->handle) == 0
          && fn_825200A8(&self->h34, &n->handle) == 0) {
        fn_82837D98(n->res->key, 0, &owner);
        if (g->owner != owner) {
          if (n->res != 0) {
            fn_8251FA58(n->res);
            n->res = 0;
          }
          if (n->res2 != 0) {
            fn_8251FA58(n->res2);
            n->res2 = 0;
          }
        }
      }
    }
  }
}
