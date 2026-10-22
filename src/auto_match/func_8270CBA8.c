typedef struct Inner Inner;
typedef struct InnerVtbl {
  char pad[0x38];
  int (*seek)(Inner *self, unsigned int offset, int origin);
} InnerVtbl;
struct Inner { InnerVtbl *vt; };
typedef struct Stream {
  int pad0;
  int pad4;
  Inner *inner;
  int padc;
  int mode;
  unsigned int pos;
  unsigned int len;
  int pad1c;
  unsigned __int64 filepos;
} Stream;
extern void fn_8270C708(Stream *s);

unsigned int fn_8270CBA8(Stream *s, unsigned int offset, int origin)
{
  unsigned int np;
  unsigned int pos;
  unsigned int len;
  int r;

  if (s->mode == 1) {
    if (origin == 1) {
      pos = s->pos;
      len = s->len;
      np = pos + offset;
      if (np <= len) {
        s->pos = np;
        return (unsigned int)s->filepos - len + np;
      }
      s->len = 0;
      origin = 0;
      s->pos = 0;
      offset = (unsigned int)s->filepos - len + pos + offset;
      goto do_seek;
    }
    if (origin == 0) {
      if (offset - s->filepos + s->len <= s->len) {
        s->pos = s->len - (unsigned int)s->filepos + offset;
        return offset;
      }
      s->len = 0;
      s->pos = 0;
      goto do_seek;
    }
  }
  fn_8270C708(s);
do_seek:
  r = s->inner->vt->seek(s->inner, offset, origin);
  s->filepos = r;
  return (unsigned int)s->filepos;
}
