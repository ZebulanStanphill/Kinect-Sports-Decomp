extern unsigned int fn_82A2A700(int, void *, int, unsigned int);
extern int fn_82F65320(unsigned int);
extern unsigned __int64 fn_82F6E380(void *);
extern int fn_82FEBFF8(void);
extern int fn_83009F28(void);
extern int fn_83009FC0(void);
extern int fn_830131C8(unsigned int);
extern int XNotifyGetNext(unsigned int, unsigned int, unsigned int *, unsigned int *);
extern unsigned int lbl_832642E4;

typedef struct Obj_83037768 {
  int pad0;
  unsigned int h4;
  char pad8[8];
  unsigned char stop;
} Obj_83037768;

int fn_83037768(Obj_83037768 *self)
{
  unsigned __int64 h;
  unsigned int r;
  unsigned int id;
  unsigned int param;
  unsigned char ok;

  h = fn_82F6E380(0);
  fn_82F65320((unsigned int)h);
  fn_82FEBFF8();
  r = 0x102;
  for (;;) {
    switch (r) {
    case 0:
      id = 0;
      param = 0;
      if (XNotifyGetNext(self->h4, 0xa000003, &id, &param) != 0) {
        ok = 0;
        if (id == 0xa000003) {
          ok = param != 0;
        }
        if (ok) {
          fn_83009FC0();
        } else {
          fn_83009F28();
        }
      }
      break;
    case 1:
    case 2:
    case 0x102:
      fn_830131C8(lbl_832642E4);
      break;
    }
    r = fn_82A2A700(3, &self->h4, 0, -1);
    if (self->stop != 0) {
      return 0;
    }
  }
}
