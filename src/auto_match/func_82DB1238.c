extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA2F0();

struct Key { char pad[0x18]; char flag; };
struct Item { char pad[0x10]; struct Key key; };
struct List { char pad[0x48]; struct Item **items; int count; };
struct Outer { char pad[0x50]; char map[4]; };

void fn_82DB1238(char *self, struct List *param_2)
{
  int i;
  struct Key *key;
  int r;
  struct Outer *o;
  char auStack_40 [8];

  if (*(self + 8) != 0) {
    *(self + 0x4c) = 0;
    *(self + 0x4d) = 1;
    for (i = 0; i < param_2->count; i++) {
      key = &param_2->items[i]->key;
      if (key->flag == 1) {
        o = (struct Outer *)(self - 0x1c);
        if (fn_82CEA2F0(o->map, key, auStack_40) != 0) {
          r = fn_82CE5410();
          fn_82CEA160(o->map, *(int *)(r + 0x10), key, 1);
        }
      }
    }
  }
}
