typedef struct Owner_82BE6590 {
  char pad[0x24];
  int flags;
} Owner_82BE6590;

typedef struct Request_82BE6590 {
  char pad[0x18];
  int status;
  char pad1c[0x10];
  Owner_82BE6590 *owner;
} Request_82BE6590;

extern void *lbl_8322B1D8;
extern void fn_82BE64E0(Request_82BE6590 *r, int flags);
extern int fn_82BE73C8(void *manager, Request_82BE6590 *r);
extern int fn_82BE5240();

int fn_82BE6590(Request_82BE6590 *r)
{
  int result;

  if (r->status != 2) {
    return fn_82BE5240(r, 0x44e, "Could not be submitted to RequestManager. Bad request status(%d).", r->status);
  }
  fn_82BE64E0(r, r->owner->flags);
  result = 0;
  if (lbl_8322B1D8 != 0) {
    result = fn_82BE73C8(lbl_8322B1D8, r);
    if (result == 0) {
      return 0;
    }
  }
  fn_82BE64E0(r, 0x2000);
  return fn_82BE5240(r, result, "Could not be submitted to RequestManager.");
}
