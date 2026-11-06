extern int fn_825F4FE8();
extern int fn_825F50E8();
extern int fn_825F5150();
extern int fn_82BFEDE8();

typedef struct { char pad0[0x10]; float f10; char pad14[4]; void *p18; } Cfg_825F4A28;
typedef struct {
  Cfg_825F4A28 *cfg;
  char pad4[0x14];
  float f18;
  char pad1c[4];
  int state;
  char pad24[4];
  int f28;
  char pad2c[4];
  int f30;
  int f34;
  char pad38[8];
  int f40;
} Sub_825F4A28;
typedef struct {
  char pad0[0x10];
  int x10;
  char pad14[0x8c8];
  Sub_825F4A28 s;
} Obj_825F4A28;

void fn_825F4A28(Obj_825F4A28 *o)
{
  Sub_825F4A28 *s = &o->s;
  int state;
  int out[4];

  if (s->cfg == 0) {
    return;
  }
  state = s->state;
  if (state == 0) {
    return;
  }
  if (state == 5) {
    return;
  }
  if (s->f34 == 0) {
    if (o->x10 == 1) {
      fn_825F5150(o);
    } else {
      fn_825F50E8(o);
    }
  } else if (s->f30 != 0 && state != 4) {
    fn_825F50E8(o);
  } else if (s->f30 == 0 && state == 4) {
    fn_825F5150(o);
    if (s->state != 4) {
      s->f34 = 0;
    }
  }
  if (s->f40 != 0) {
    if (s->f18 >= s->cfg->f10) {
      fn_825F4FE8(o);
      return;
    }
  }
  if (s->f40 != 0) {
    return;
  }
  if (s->cfg->p18 != 0) {
    fn_82BFEDE8(s->cfg->p18, out);
    if (out[0] == 7) {
      s->state = 5;
      if (s->f28 != 0) {
        s->f28 = 0;
      }
    }
  }
}
