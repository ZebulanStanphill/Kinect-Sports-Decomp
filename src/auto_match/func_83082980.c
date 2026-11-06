typedef struct Info_83082980 { char pad[0x10]; int id; } Info_83082980;
extern int fn_82CEA280(void *ctx, void *node, int a);
extern Info_83082980 *fn_82CE5410(void);
extern void fn_82CEA160(void *ctx, int id, void *node, int flags);
extern int fn_82CEAF18(void *node);
extern void *fn_82CEAF20(void *node, int i);
extern void *fn_82CFD5B0(void *child);
extern void *fn_82CEAC30(void *node);

void fn_83082980(void *node, void *ctx, int mask, void (*cb)(void *))
{
  int flags;
  Info_83082980 *info;
  int i;
  void *child;
  void *sub;
  flags = fn_82CEA280(ctx, node, 0);
  if ((flags & mask) != 0)
    return;
  info = fn_82CE5410();
  fn_82CEA160(ctx, info->id, node, flags | mask);
  for (i = 0; i < fn_82CEAF18(node); i++) {
    child = fn_82CEAF20(node, i);
    sub = fn_82CFD5B0(child);
    if (sub != 0)
      fn_83082980(sub, ctx, mask, cb);
    cb(child);
  }
  if (fn_82CEAC30(node) != 0)
    fn_83082980(fn_82CEAC30(node), ctx, mask, cb);
}
