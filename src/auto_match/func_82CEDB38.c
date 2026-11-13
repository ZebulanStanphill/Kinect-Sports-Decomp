typedef struct Stream_82CEDB38 Stream_82CEDB38;
typedef struct {
  void *f0, *f4, *f8, *fc;
  void (*write)(Stream_82CEDB38 *, const char *, unsigned);
} StreamVtbl_82CEDB38;
struct Stream_82CEDB38 { StreamVtbl_82CEDB38 *vt; };
typedef struct Ostream_82CEDB38 {
  void *vt;
  int f4;
  Stream_82CEDB38 *writer;
} Ostream_82CEDB38;
extern unsigned fn_82CFBE40(const char *);

Ostream_82CEDB38 *fn_82CEDB38(Ostream_82CEDB38 *self, const char *str)
{
  Stream_82CEDB38 *s = self->writer;
  if (str != 0) {
    StreamVtbl_82CEDB38 *vt = s->vt;
    vt->write(s, str, fn_82CFBE40(str));
  } else {
    s->vt->write(s, "(null)", 6);
  }
  return self;
}
