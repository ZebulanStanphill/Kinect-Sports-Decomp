typedef struct Pool_822AA940 { unsigned first; } Pool_822AA940;
typedef struct Picker_822AA940 {
  char pad0[0x4c];
  unsigned defaults[4];      /* 0x4c */
  Pool_822AA940 pools[4];        /* 0x5c */
  int enabled;               /* 0x6c */
  unsigned slots[7];         /* 0x70 */
  int count;                 /* 0x8c */
} Picker_822AA940;
typedef union Bits_822AA940 { unsigned u; float f; } Bits_822AA940;
extern unsigned **fn_8251F720(Pool_822AA940 *pool, int n);
extern void fn_8251FA58(unsigned **list);
extern int fn_825200A8(unsigned *slot, unsigned **pick);
extern unsigned lbl_83265A28;
extern float lbl_821CA45C[];

static __forceinline int Valid(Pool_822AA940 *pool)
{
  if (pool == 0) return 0;
  return pool->first != 0;
}

/* Picks a random entry of pools[0] that is not in slots yet and appends it. */
unsigned *fn_822AA940(Picker_822AA940 *o)
{
  unsigned **list;
  unsigned **pick;
  unsigned **p;
  int n;
  int i;
  float count;
  Bits_822AA940 r;

  if (o->enabled != 0) {
    if (Valid(&o->pools[0])) {
      if (o->count < 7) {
        list = fn_8251F720(&o->pools[0], 1);
        n = 0;
        p = list;
        while (p != 0 && *p != 0) {
          n++;
          p = p[1] != 0 ? p + 1 : 0;
        }
        count = (float)n;
        do {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          r.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
          pick = list + (int)((r.f - lbl_821CA45C[1]) * count);
          for (i = 0; i < o->count; i++) {
            if (fn_825200A8(&o->slots[i], pick) != 0) {
              pick = 0;
              break;
            }
          }
        } while (pick == 0);
        o->slots[o->count] = (unsigned)*pick;
        fn_8251FA58(list);
        return &o->slots[o->count++];
      }
      return &o->slots[6];
    }
    return 0;
  }
  return &o->defaults[0];
}
