extern void fn_82547C80(void *, int, int);
extern int fn_827F6458(void *);
extern double fn_827F64C8(void *, int);
extern double __fctid(double);
extern double __fcfid(double);

typedef struct { char pad[0x114]; void *m114; unsigned m118[17]; int m15c; } Item_82554B28;
typedef struct { char pad[0x18c]; unsigned count; Item_82554B28 **items; } Obj_82554B28;

void fn_82554B28(Obj_82554B28 *param_1, char *param_2)
{
  unsigned i;
  int j;
  int n;
  Item_82554B28 *it;
  void *h;
  unsigned *p;
  unsigned c;

  for (i = 0; i < param_1->count; i++) {
    it = param_1->items[i];
    h = it->m114;
    if (h != 0) {
      p = &it->m118[1];
      if (it->m15c != 0) {
        n = fn_827F6458(h);
        for (j = 0; j < n; j++) {
          c = *p++;
          fn_82547C80(param_2 + 0xd0, c & 0xff, (int)(float)__fcfid(__fctid(fn_827F64C8(h, j))) & 0xff);
        }
      }
    }
  }
}
