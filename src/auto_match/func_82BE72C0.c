typedef struct { char data[8]; } Iter_82BE72C0;
typedef struct {
  char pad0[0x14];
  Iter_82BE72C0 requests; /* 0x14 */
  void *owner;            /* 0x1c */
  char pad20[0x8];
  int paused;             /* 0x28 */
  char lock[4];           /* 0x2c */
} Manager_82BE72C0;

extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern void fn_82BE5340(Iter_82BE72C0 *it);
extern void fn_82BE5350(Iter_82BE72C0 *it);
extern void *fn_82BE5378(Iter_82BE72C0 *it);
extern void fn_82BE5398(Iter_82BE72C0 *it, void *owner, int flag);
extern int fn_82BE5B58(void *request);
extern void fn_82BE64E0(void *request, int state);

void *fn_82BE72C0(Manager_82BE72C0 *self)
{
  void *cur;
  if (fn_82BEA200(self->lock, "CRequestManager::GetNextRequest") == 0)
    return 0;
  if (self->paused != 0) {
    fn_82BEA230(self->lock, "CRequestManager::GetNextRequest");
    return 0;
  }
  fn_82BE5340(&self->requests);
  while ((cur = fn_82BE5378(&self->requests)) != 0) {
    if (fn_82BE5B58(cur) != 0) {
      fn_82BE5398(&self->requests, self->owner, 1);
      fn_82BE64E0(cur, 0x100);
      fn_82BEA230(self->lock, "CRequestManager::GetNextRequest");
      return cur;
    }
    fn_82BE5350(&self->requests);
  }
  fn_82BEA230(self->lock, "CRequestManager::GetNextRequest");
  return 0;
}
