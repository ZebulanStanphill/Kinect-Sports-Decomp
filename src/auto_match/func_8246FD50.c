extern int fn_825200A8(void *a, void *b);
extern void fn_82837D98(int key, int flags, unsigned *out);
extern void fn_82469C10(int listener, unsigned owner);
extern void fn_82469CD8(int listener, unsigned owner);

typedef struct Res_8246FD50 { char pad[0x14]; int key; } Res_8246FD50;
typedef struct Node_8246FD50 {
  struct Node_8246FD50 *next;
  int pad4;
  int handle;
  Res_8246FD50 *res;
} Node_8246FD50;
typedef struct { unsigned owner; Node_8246FD50 *head; int pad[2]; int handle; } Group_8246FD50;
typedef struct {
  char pad0[0x90];
  Group_8246FD50 *groups;      /* 0x90 */
  char pad94[0x310 - 0x94];
  int listener;              /* 0x310 */
} Self_8246FD50;

static __forceinline int Valid(int *handle)
{
  if (handle == 0) return 0;
  return *handle != 0;
}

void fn_8246FD50(Self_8246FD50 *self, unsigned int which, int *handle)
{
  Group_8246FD50 *groups = self->groups;
  Group_8246FD50 *g;
  Node_8246FD50 *n;
  unsigned owner;

  if (Valid(handle)) {
    g = &groups[which];
    if (fn_825200A8(handle, &g->handle) == 0) {
      for (n = g->head->next; n != g->head; n = n->next) {
        if (fn_825200A8(&n->handle, handle) != 0) {
          g->handle = *handle;
          fn_82837D98(n->res->key, 0, &owner);
          g->owner = owner;
          break;
        }
      }
      if (self->listener != 0) {
        if (which == 0)
          fn_82469C10(self->listener, self->groups[0].owner);
        else
          fn_82469CD8(self->listener, self->groups[1].owner);
      }
    }
  }
}
