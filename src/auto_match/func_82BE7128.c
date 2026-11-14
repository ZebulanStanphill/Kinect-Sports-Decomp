typedef struct { char data[8]; } Iter_82BE7128;
typedef struct {
  char pad0[0x14];
  int type;
} Request_82BE7128;
typedef struct {
  char pad0[0x14];
  Iter_82BE7128 requests;
  int count;
  char pad20[4];
  int shutdown;
  char pad28[4];
  char lock[4];
} Manager_82BE7128;

extern int fn_82BEA200(void *lock, const char *name);
extern void fn_82BEA230(void *lock, const char *name);
extern void fn_82BE5340(Iter_82BE7128 *it);
extern void fn_82BE5350(Iter_82BE7128 *it);
extern Request_82BE7128 *fn_82BE5378(Iter_82BE7128 *it);
extern void fn_82BE66A0(Request_82BE7128 *request);

int fn_82BE7128(Manager_82BE7128 *self)
{
  Request_82BE7128 *cur;
  self->shutdown = 0;
  if (fn_82BEA200(self->lock, "CRequestManager::PrepareForShutdown") == 0)
    return 0x2c0;
  fn_82BE5340(&self->requests);
  while (self->count != 0) {
    cur = fn_82BE5378(&self->requests);
    if (cur->type == 0x1065 || cur->type == 0x1073) {
      fn_82BE5350(&self->requests);
    } else {
      fn_82BE66A0(cur);
      fn_82BE5340(&self->requests);
    }
  }
  fn_82BEA230(self->lock, "CRequestManager::PrepareForShutdown");
  return 0;
}
