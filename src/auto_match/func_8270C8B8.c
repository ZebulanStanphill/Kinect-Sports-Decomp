typedef struct Stream Stream;
typedef __int64 (*fn_t)();
struct Stream {
  fn_t *vt;
};

typedef struct {
  char pad0[8];
  Stream *stream;
  char padc[4];
  int mode;
  unsigned int base;
  unsigned int start;
  char pad1c[4];
  __int64 offset;
} File;

__int64 fn_8270C8B8(File *f)
{
  __int64 pos;

  if (f->mode == 1) {
    pos = (unsigned __int64)f->base - f->start + f->offset;
  } else {
    pos = f->stream->vt[0x14 / 4](f->stream);
    if (pos != -1 && f->mode == 2) {
      pos = f->base + pos;
    }
  }
  return pos;
}
