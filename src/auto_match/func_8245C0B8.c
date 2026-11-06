typedef struct Item_8245C0B8 Item_8245C0B8;
typedef struct ItemVtbl_8245C0B8 {
  void *f0;
  void *f4;
  void *f8;
  int (*Check)(Item_8245C0B8 *);
} ItemVtbl_8245C0B8;
struct Item_8245C0B8 {
  ItemVtbl_8245C0B8 *vt;
};

extern double fn_82522FF0(void);

int fn_8245C0B8(int param_1)
{
  int a;
  int b;
  int found;
  int expired;
  int i;

  if (*(int *)(param_1 + 0x588) != 0 || *(int *)(param_1 + 0x584) != 0) {
    int c4 = *(int *)(param_1 + 0xc4);
    a = *(int *)(param_1 + 0x58c) != 0 && *(int *)(param_1 + 0x574) != 0;
    b = c4 != 0 || *(int *)(param_1 + 0x584) != 0 || a;
    if (*(int *)(param_1 + 0x574) == 0) {
      found = 0;
      for (i = 0; i < 2; i++) {
        Item_8245C0B8 *it = ((Item_8245C0B8 **)(param_1 + 0x568))[i];
        if (it->vt->Check(it) != 0) {
          found = 1;
          break;
        }
      }
      expired = fn_82522FF0() - *(double *)(param_1 + 0x688) >= *(double *)(param_1 + 0x680);
      if ((!found || !expired) && !b && *(int *)(param_1 + 0x6a4) == 3) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x57c) != 0) {
      return 1;
    }
  }
  return 0;
}
