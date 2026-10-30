typedef struct { int count; unsigned pos; } Hd_82823728;
typedef struct { Hd_82823728 *h; int pad4; unsigned f8; char padc[8]; unsigned f14; unsigned f18; unsigned f1c; char pad20[4]; unsigned f24; unsigned f28; } B_82823728;
extern void *memmove(void *, const void *, unsigned);
extern void *memcpy(void *, const void *, unsigned);
int fn_82823728(char *param_1, B_82823728 *b, unsigned param_3, unsigned *param_4)
{
  unsigned avail, n, sz;
  unsigned char *rec;
  if (b->h->count > 0) {
    if (b->f28 > b->f24) {
      rec = (unsigned char *)(b->h->count * 5 + param_1);
      avail = b->f28 - b->f24;
      sz = *(unsigned *)(rec - 4);
      n = avail;
      if (avail >= sz) n = sz;
      if (*param_4 + n + 5 > b->f18) return 1;
      *(unsigned *)(rec - 4) = n;
      rec[-5] = 1;
      if (param_3 != 0) memmove((char *)(b->h->pos + b->f14) + n, (char *)(b->h->pos + b->f14), param_3);
      memcpy((void *)(b->h->pos + b->f14), (void *)(b->f1c + b->f8 - sz), n);
      b->h->pos = b->h->pos + n;
      if (sz > avail) {
        *rec = 0;
        *(unsigned *)(rec + 1) = sz - avail;
        b->h->count = b->h->count + 1;
        *param_4 = *param_4 + 5;
      }
      b->f28 = b->f24;
    }
  }
  return 0;
}
