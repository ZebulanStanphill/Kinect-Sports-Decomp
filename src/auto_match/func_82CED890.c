typedef struct Stream_82CED890 Stream_82CED890;
typedef struct {
  void *f0, *f4, *f8, *fc;
  void (*write)(Stream_82CED890 *, const char *, unsigned);
} StreamVtbl_82CED890;
struct Stream_82CED890 { StreamVtbl_82CED890 *vt; };
extern unsigned fn_82CFBE40(const char *);

void fn_82CED890(Stream_82CED890 *s, const char *str)
{
  if (str != 0) {
    StreamVtbl_82CED890 *vt = s->vt;
    vt->write(s, str, fn_82CFBE40(str));
  } else {
    s->vt->write(s, "(null)", 6);
  }
}
