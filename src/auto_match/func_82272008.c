extern int fn_82271780(void *, int);
extern int fn_8266C6D8(int, int, int);
extern int fn_8266C708(int, int, int);
extern int fn_8266EC60(void);
extern int lbl_8326B370[];

typedef struct Dev_82272008 { char pad[0x19c]; int f19c; int f1a0; int f1a4; } Dev_82272008;
typedef struct Obj_82272008 {
  Dev_82272008 *dev;      /* 0x00 */
  char pad4[0x90];
  int f94;
  int f98;
  char pad9c[4];
  int fa0;
  char pada4[8];
  unsigned fac;
  char padb0[4];
  int fb4;
  char padb8[8];
  int fc0, fc4, fc8;
  char padcc[4];
  int fd0;
  char padd4[4];
  unsigned fd8; int fdc;
} Obj_82272008;

int fn_82272008(Obj_82272008 *o)
{
  int ret = o->fa0;
  if (o->f98 != 0) {
    o->fb4 = 0;
    fn_82271780(o, 0);
    if (o->dev != 0) {
      o->dev->f19c = lbl_8326B370[9];
      o->dev->f1a0 = lbl_8326B370[9];
      o->fc8 = 0;
    }
    o->fc0 = 0;
    o->fc4 = 0;
    o->fd0 = 0;
    fn_8266C6D8(fn_8266EC60(), 0x20, 1);
    fn_8266C708(fn_8266EC60(), 0x20, 1);
    if (o->dev != 0) {
      if (o->fd8 != 0) {
        o->fd8 = 0;
        o->dev->f1a4 = lbl_8326B370[9];
      }
      o->fdc = 0;
    }
  }
  if (o->fac != 0) {
    ret = 1;
    o->f94 = 1;
  }
  return ret;
}
