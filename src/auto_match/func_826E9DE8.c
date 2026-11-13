typedef struct {
  int x0;
  int x4;
  int x8;
  unsigned char open;
  void *file;
  int x14;
  int error;
} File_826E9DE8;
extern int fn_82F67988(void *stream);
extern int fn_826E96C8(void);

unsigned char fn_826E9DE8(File_826E9DE8 *f)
{
  if (fn_82F67988(f->file) != 0) {
    f->error = fn_826E96C8();
    return 0;
  }
  f->open = 0;
  f->file = 0;
  f->error = 0;
  return 1;
}
