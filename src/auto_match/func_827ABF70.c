struct File_827ABF70;
typedef struct FileVT_827ABF70 {
  void *s0;
  struct File_827ABF70 *(*open)(struct File_827ABF70 *, unsigned, int, int);
  unsigned char (*ok)(struct File_827ABF70 *);
  void *sc, *s10, *s14;
  int (*size)(struct File_827ABF70 *);
  void *s1c, *s20, *s24;
  int (*read)(struct File_827ABF70 *, char *, int);
} FileVT_827ABF70;
typedef struct File_827ABF70 { FileVT_827ABF70 *vt; } File_827ABF70;
typedef struct Obj_827ABF70 { int f0, f4, f8; char *fc; int f10; } Obj_827ABF70;

extern char *fn_8267B890(unsigned, int, int);
extern int fn_8267C4F0(void *);
extern unsigned int lbl_831E7E64;

void fn_827ABF70(Obj_827ABF70 *o, unsigned *param_2, File_827ABF70 *param_3)
{
  File_827ABF70 *f;

  f = param_3->vt->open(param_3, (*param_2 & 0xfffffffc) + 8, 0x21, 0x1b6);
  if (f != 0) {
    if (f->vt->ok(f)) {
      o->f10 = f->vt->size(f);
      if (o->f10 != 0) {
        o->fc = fn_8267B890(lbl_831E7E64, o->f10 + 2, 0);
        f->vt->read(f, o->fc, o->f10);
        o->fc[o->f10 + 1] = 0;
        o->fc[o->f10] = 0;
      }
    }
    fn_8267C4F0(f);
  }
}
