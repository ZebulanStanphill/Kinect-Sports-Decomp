typedef unsigned int U32;
typedef unsigned short U16;
typedef struct { char pad[0x22]; U16 n; char pad1[0x244 - 0x24]; U16 n2; char pad2[2]; U16 *list; } Hdr_82C3A858;
typedef struct { int val; int pad; } Ent_82C3A858;
typedef struct { int count; int *arr; char pad[0x98 - 8]; } Slot_82C3A858;
typedef struct {
  Hdr_82C3A858 *hdr;
  int pad4;
  Ent_82C3A858 *tab;
  char pad0[0x5c - 12];
  int mode;
  char pad1[0x74 - 0x60];
  int idx;
  Slot_82C3A858 *slots;
  char pad2[0xe0 - 0x7c];
  char bits[1];
} Ctx_82C3A858;
extern int fn_82C30370(void *, int, int *);
extern void *memset(void *, int, U32);
int fn_82C3A858(Ctx_82C3A858 *c)
{
  Hdr_82C3A858 *h = c->hdr;
  int hr = 0;
  int bit = 0;
  Slot_82C3A858 *s;
  if (c->idx >= h->n) return 0x80040002;
  s = &c->slots[c->idx];
  s->count = 0;
  memset(s->arr, 0, h->n * 4);
  if (c->mode <= 2) {
    int i = 0;
    if (h->n != 0) {
      int off4 = 0;
      int off8 = 0;
      do {
        Ent_82C3A858 *e = (Ent_82C3A858 *)((char *)c->tab + off8);
        i++;
        off8 += 8;
        *(int *)((char *)s->arr + off4) = (e->val - 1) != 0;
        off4 += 4;
        e->val = 1;
      } while (i < h->n);
    }
    s->count = c->mode;
  } else {
    int j = 0;
    if ((short)h->n2 > 0) {
      do {
        int k = (short)h->list[j];
        Ent_82C3A858 *e = &c->tab[k];
        if (e->val == 0) {
          hr = fn_82C30370(c->bits, 1, &bit);
          if (hr < 0) return hr;
          if (bit == 1) {
            s->arr[k] = 1;
            e->val = 1;
            s->count++;
          }
        }
        j++;
      } while (j < (short)h->n2);
    }
  }
  if (s->count < 1) return 0x80040002;
  return hr;
}
