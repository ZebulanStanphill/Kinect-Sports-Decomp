typedef struct File_82F7BAF0 { unsigned char *ptr; int cnt; unsigned char *base; int flag; int file; int charbuf; int bufsiz; } File_82F7BAF0;
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern void fn_82F857F8(File_82F7BAF0 *);
extern int fn_82F7C468(File_82F7BAF0 *);
extern int fn_82F7C2C0(int, unsigned char *, int);
extern char lbl_831BBF60[];
extern char *lbl_8329F620[];

unsigned fn_82F7BAF0(File_82F7BAF0 *f)
{
  int fl;
  unsigned char c;
  int r;
  char *e;
  if (f == 0) {
    *_errno() = 0x16;
    _invalid_parameter_noinfo();
    return -1;
  }
  fl = f->flag;
  if ((fl & 0x83) != 0 && (fl & 0x40) == 0) {
    if ((fl & 2) != 0) {
      fl = fl | 0x20;
    } else {
      fl = fl | 1;
      f->flag = fl;
      if ((fl & 0x10c) == 0) fn_82F857F8(f);
      else f->ptr = f->base;
      r = fn_82F7C2C0(fn_82F7C468(f), f->base, f->bufsiz);
      f->cnt = r;
      if (r != 0 && r != -1) {
        if ((f->flag & 0x82) == 0) {
          if (fn_82F7C468(f) == -1 || fn_82F7C468(f) == -2) e = lbl_831BBF60;
          else e = lbl_8329F620[fn_82F7C468(f) >> 5] + (fn_82F7C468(f) & 0x1f) * 0x48;
          if ((e[4] & 0x82) == 0x82) f->flag = f->flag | 0x2000;
        }
        if (f->bufsiz == 0x200 && (f->flag & 8) != 0 && (f->flag & 0x400) == 0) f->bufsiz = 0x1000;
        f->cnt = f->cnt - 1;
        c = *f->ptr;
        f->ptr = f->ptr + 1;
        return c;
      }
      f->cnt = 0;
      fl = f->flag | ((r != 0 ? 0x20 : 0x10));
    }
    f->flag = fl;
  }
  return -1;
}
