typedef struct {
  int f0;
  int (*check)(void *ctx, void *arg);
} Info;
typedef struct {
  int f0;
  int parent;
  Info *(*info)(void);
} Class;
extern Class *fn_82587B68(void *obj);
extern void fn_82529CC0(void *ctx, void *obj, int f);

int fn_82529BF0(void *ctx, void *obj, void *arg, int flag)
{
  int result;
  Info *info;
  int parent;
  int (*pcheck)(void *ctx, void *arg);
  int (*check)(void *ctx, void *arg);

  result = 1;
  info = fn_82587B68(obj)->info();
  parent = fn_82587B68(obj)->parent;
  if (parent != 0) {
    if (fn_82529BF0(ctx, (void *)parent, arg, 0) == 0) {
      return 0;
    }
    pcheck = fn_82587B68((void *)parent)->info()->check;
  } else {
    pcheck = 0;
  }
  check = info->check;
  if (check != 0 && pcheck != check && check(ctx, arg) == 0) {
    fn_82529CC0(ctx, obj, 0);
    result = 0;
  }
  return result;
}
