extern void *memmove(void *, const void *, unsigned int);

typedef struct WStr_8278FC90 {
  unsigned short *p;
  unsigned int size;
} WStr_8278FC90;

void fn_8278FC90(WStr_8278FC90 *s, unsigned int pos, unsigned int n)
{
  if (pos < s->size) {
    if (pos + n >= s->size) {
      s->size = pos;
    } else {
      memmove(s->p + pos, s->p + (pos + n), (s->size - pos - n) * 2);
      s->size = s->size - n;
    }
  }
}
