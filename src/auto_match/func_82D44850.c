typedef struct Sub_82D44850 Sub_82D44850;
struct Sub_82D44850 {
  struct { int pad; char *(*f4)(char *, Sub_82D44850 *, int, int); } *vt;
};
typedef struct Item_82D44850 {
  int pad[5];
  Sub_82D44850 sub;
} Item_82D44850;
typedef struct Obj_82D44850 {
  int pad[7];
  Item_82D44850 **items;
  int count;
} Obj_82D44850;

char *fn_82D44850(char *param_1, Obj_82D44850 *param_2, int param_3, int param_4)
{
  char tmp[1];
  int i;
  for (i = param_2->count - 1; i >= 0; i--) {
    Item_82D44850 *it = param_2->items[i];
    if (*it->sub.vt->f4(tmp, &it->sub, param_3, param_4) == 0) {
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 1;
  return param_1;
}
