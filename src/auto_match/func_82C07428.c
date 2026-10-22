typedef struct Ops Ops;
struct Ops {
  void *f0[6];
  int (*fn18)(Ops *self, unsigned __int64 v, unsigned char b, int c);
};

typedef struct Item {
  int f0;
  int state;
  int f8;
  int fc;
  int f10;
  unsigned char f14;
  int f18;
  int f1c;
  char pad20[0x50 - 0x20];
  unsigned int f50;
} Item;

typedef struct Obj {
  Ops *ops;
  char pad4[0x214 - 4];
  int f214;
  int f218;
  char pad21c[0x22c - 0x21c];
  int f22c;
  char pad230[0x238 - 0x230];
  void *list238;
  void *list23c;
  char pad240[0x24c - 0x240];
  int f24c;
  unsigned char f250;
  unsigned int f254;
} Obj;

extern int fn_82C10F68(void *list, int *iter, void *out, unsigned char *key);
extern int fn_82C10FD0(void *list, int iter, void *out, unsigned char *key);
extern void fn_82C11038(void *list, int iter);
extern int fn_82C11AE0(int v);

void fn_82C07428(Obj *o, unsigned char key, int c)
{
  int hr;
  unsigned char k;
  Item *item;
  int iter;
  int *pp;
  unsigned int found;

  iter = 0;
  item = 0;
  k = 0;
  pp = 0;
  found = 0;
  hr = fn_82C10F68(o->list23c, &iter, &pp, &k);
  if (hr != 0x80500016) {
    if (hr < 0) return;
    do {
      if (hr < 0) return;
      hr = fn_82C11AE0(*pp);
      if (hr < 0) return;
      hr = fn_82C10FD0(o->list23c, iter, &pp, &k);
    } while (hr != 0x80500016);
  }
  fn_82C11038(o->list23c, iter);
  hr = fn_82C10F68(o->list238, &iter, &item, &k);
  if (hr != 0x80500016) {
    if (hr < 0) return;
    do {
      if (hr < 0) return;
      if (item->state == 3) {
        item->state = 1;
      }
      else if (item->state == 2) {
        item->state = 0;
      }
      item->f10 = 0;
      item->f14 = 0;
      item->f8 = 0;
      item->fc = 0;
      item->f18 = 0;
      item->f1c = 0;
      if (k == key) {
        found = item->f50;
      }
      hr = fn_82C10FD0(o->list238, iter, &item, &k);
    } while (hr != 0x80500016);
  }
  fn_82C11038(o->list238, iter);
  hr = o->ops->fn18(o->ops, found, key, c);
  if (hr >= 0) {
    o->f254 = found;
    o->f250 = key;
    o->f218 = 0;
    o->f214 = 2;
    o->f22c = 1;
    o->f24c = 0;
  }
}
