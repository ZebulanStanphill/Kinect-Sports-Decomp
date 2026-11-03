extern void fn_82627DB0(void *, void *);
extern void fn_82627E18(void *, void *);

typedef struct Sl_82599A38 {
  char pad[0xa2]; unsigned short kind;
} Sl_82599A38;
typedef struct En_82599A38 {
  char pad[6]; short count;
} En_82599A38;
typedef struct Li_82599A38 { int count; En_82599A38 **items; } Li_82599A38;

void fn_82599A38(Li_82599A38 **self, unsigned filter)
{
  Li_82599A38 **pl;
  int n;
  pl = self;
  n = 6;
  do {
    Li_82599A38 *l = *pl;
    int i = 0;
    void *ctx = ((void **)self)[7];
    if (l->count > 0) {
      int off = 0;
      do {
        En_82599A38 *e = *(En_82599A38 **)((char *)l->items + off);
        if (e != 0) {
          if (e->count > 0) {
            unsigned short j = 0;
            do {
              char *b = (char *)e + j * 0x1d0;
              unsigned owner = *(unsigned *)(b + 0x2d0);
              Sl_82599A38 *s = (Sl_82599A38 *)(b + 0x2a0);
              if (owner != 0 && (filter == 0 || owner == filter)) {
                if (s->kind == 0xfffe) fn_82627DB0(e, s);
                else fn_82627E18(ctx, s);
              }
              j = j + 1;
            } while (j < e->count);
          }
        }
        i++;
        off += 4;
      } while (i < l->count);
    }
    pl++;
    n--;
  } while (n != 0);
}
