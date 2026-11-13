typedef int (*Fn_82C10CC0)(void *, void *, void *, void *);
typedef struct { Fn_82C10CC0 fn; } Ent_82C10CC0;
extern Ent_82C10CC0 *lbl_83175B5C[];

int fn_82C10CC0(void *a, void *b, void *c, void *d)
{
  Fn_82C10CC0 deferred;
  char i;
  int r;
  r = 0x80500003;
  deferred = 0;
  i = 0;
  do {
    if (lbl_83175B5C[i]->fn != 0) {
      r = lbl_83175B5C[i]->fn(a, b, c, d);
      if (r >= 0) {
        if (r != 0x500000) {
          return r;
        }
        if (deferred == 0) {
          deferred = lbl_83175B5C[i]->fn;
        }
      } else {
        if ((unsigned int)r != 0x80500003) {
          return r;
        }
      }
    }
    i = i + 1;
  } while ((unsigned char)i < 3);
  if (deferred != 0) {
    r = deferred(a, b, c, d);
  }
  return r;
}
