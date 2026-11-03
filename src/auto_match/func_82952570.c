typedef struct { unsigned f0; unsigned f4; unsigned f8; unsigned fc; unsigned f10; char pad14[0x24]; unsigned f38; unsigned f3c; } Cell;
typedef struct { unsigned flags; unsigned f4; unsigned *a8; unsigned cnt; unsigned *a10; } Item;
typedef struct { char pad0[0xc]; unsigned n; char pad10[4]; Cell **tbl; Item **items; } Obj;
extern int fn_82963618();
extern int fn_82963678();

int fn_82952570(Obj *o)
{
  int changed;
  int ok;
  unsigned i;
  unsigned j;
  unsigned k;
  unsigned m;
  Item *p;
  Cell *a;
  Cell *b;
  do {
    changed = 0;
    for (i = 0; i < o->n; i++) {
      if (fn_82963618(o->items[i]) != 0) {
        j = i + 1;
        ok = 1;
        if (j < o->n) {
          do {
            p = o->items[j];
            if (fn_82963678(p) != 0) {
              break;
            }
            if ((p->flags & 0xfff00000) != 0x10000000) {
              ok = 0;
              break;
            }
            for (k = 0; k < p->cnt; k++) {
              a = o->tbl[p->a10[k]];
              b = o->tbl[p->a8[k]];
              if (a->f38 != b->f38 || a->f3c != b->f3c || a->f4 != b->f4 ||
                  a->fc != b->fc || a->f8 != b->f8 || a->f10 != b->f10) {
                ok = 0;
              }
            }
            j++;
          } while (j < o->n);
        }
        if (ok != 0) {
          changed = 1;
          m = i;
          j = i;
          if (m < o->n) {
            do {
              if (fn_82963678(o->items[j]) != 0) {
                break;
              }
              m++;
              o->items[j]->flags = 0;
              j++;
            } while (m < o->n);
          }
        }
      }
    }
  } while (changed != 0);
  return 0;
}
