typedef struct Entry {
  int pad0;
  int a;
  int b;
  int pad1;
  int c;
  int d;
  int pad2;
  int e;
  unsigned char f;
  int g;
  int h;
  int pad3[8];
  int i;
  int active;
  unsigned int mask[8];
} Entry;

typedef struct Ctx {
  char pad[0x94];
  int list;
} Ctx;

typedef struct Obj {
  char pad[0x1c];
  Ctx *ctx;
} Obj;

extern unsigned int fn_82C10F68(int list, int *handle, Entry **e, unsigned char *flag);
extern unsigned int fn_82C10FD0(int list, int handle, Entry **e, unsigned char *flag);
extern unsigned int fn_82C11038(int list, int handle);

unsigned int fn_82C24220(Obj *param_1, unsigned char param_2, int param_3)
{
  Ctx *ctx;
  unsigned int hr;
  unsigned int bit;
  unsigned char flag;
  Entry *e;
  int handle;

  e = 0;
  handle = 0;
  flag = 0;
  if (param_1 == 0) {
    return 0x80070057;
  }
  ctx = param_1->ctx;
  if (fn_82C10F68(ctx->list, &handle, &e, &flag) == 0x80500016) {
    fn_82C11038(ctx->list, handle);
    goto ok;
  }
  do {
      if (e->active != 0) {
        bit = 1 << param_2;
        if ((e->mask[param_2 >> 5] & bit) == bit) {
          if (param_3 == 0 || param_3 == 3) {
            e->a = 0;
          } else {
            e->a = 1;
          }
          e->b = 0;
          e->c = 0;
          e->d = 0;
          e->e = 0;
          e->f = 0;
          e->g = 0;
          e->h = 0;
          e->i = 1;
        }
      }
  } while (fn_82C10FD0(ctx->list, handle, &e, &flag) != 0x80500016);
  hr = fn_82C11038(ctx->list, handle);
  if (hr != 0x80500016) {
    return hr;
  }
ok:
  return 0;
}
