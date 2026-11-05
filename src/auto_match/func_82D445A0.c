typedef struct Sub_82D445A0 Sub_82D445A0;
struct Sub_82D445A0 {
  struct { int pad; char *(*f4)(char *, Sub_82D445A0 *, int, int); } *vt;
};
typedef struct Item_82D445A0 {
  int pad[2];
  Sub_82D445A0 sub;
} Item_82D445A0;
typedef struct Obj_82D445A0 {
  int pad[10];
  Item_82D445A0 **items;
  int count;
} Obj_82D445A0;

char *fn_82D445A0(char *param_1, Obj_82D445A0 *param_2, int param_3, int param_4)
{
  char tmp[1];
  int i;
  for (i = param_2->count - 1; i >= 0; i--) {
    Item_82D445A0 *it = param_2->items[i];
    if (*it->sub.vt->f4(tmp, &it->sub, param_3, param_4) == 0) {
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 1;
  return param_1;
}
