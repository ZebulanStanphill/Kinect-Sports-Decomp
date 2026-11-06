typedef int (*Fn_82C2B4F0)(void *, void *, void *);
typedef struct { Fn_82C2B4F0 fn; } Ent_82C2B4F0;
extern Ent_82C2B4F0 *lbl_83175B80[];
int fn_82C2B4F0(void *a, void *b, void *c)
{
  char i = 0;
  int r = 0x80500003;
  do {
    if (lbl_83175B80[i]->fn != 0) {
      r = lbl_83175B80[i]->fn(a, b, c);
      if (r >= 0 || (unsigned int)r != 0x80500003) {
        return r;
      }
    }
    i = i + 1;
  } while ((unsigned char)i < 8);
  return r;
}
