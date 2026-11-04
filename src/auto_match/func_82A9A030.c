extern void *memcpy(void *, const void *, unsigned);
typedef struct S_82A9A030 { int pad[3]; int hr; unsigned char *buf; unsigned size; unsigned pos; } S_82A9A030;
void fn_82A9A030(S_82A9A030 *s, void *src, unsigned count) {
  unsigned avail, n; unsigned char *dst;
  if (s->hr >= 0) {
    avail = s->size - s->pos;
    dst = s->buf + s->pos;
    if (count > avail) {
      s->hr = 0x80004005;
    } else {
      if (count < avail) n = count; else n = avail;
      memcpy(dst, src, n);
      s->pos += (count < avail) ? count : avail;
    }
  }
}
