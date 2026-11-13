typedef struct { char data[8]; } Iter_82BE7220;
typedef struct {
  char pad0[0x14];
  Iter_82BE7220 requests;
  void *owner;
  char pad20[0xc];
  char lock[4];
} Manager_82BE7220;

extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern void fn_82BE5340(Iter_82BE7220 *it);
extern void fn_82BE5350(Iter_82BE7220 *it);
extern void *fn_82BE5378(Iter_82BE7220 *it);
extern void fn_82BE5398(Iter_82BE7220 *it, void *owner, int flag);

int fn_82BE7220(Manager_82BE7220 *self, void *request)
{
  void *cur;
  if (fn_82BEA200(self->lock, "CRequestManager::RemoveRequest") == 0)
    return 0x2c0;
  fn_82BE5340(&self->requests);
  while ((cur = fn_82BE5378(&self->requests)) != 0) {
    if (cur == request) {
      fn_82BE5398(&self->requests, self->owner, 1);
      fn_82BEA230(self->lock, "CRequestManager::RemoveRequest");
      return 0;
    }
    fn_82BE5350(&self->requests);
  }
  fn_82BEA230(self->lock, "CRequestManager::RemoveRequest");
  return 0x2bf;
}
