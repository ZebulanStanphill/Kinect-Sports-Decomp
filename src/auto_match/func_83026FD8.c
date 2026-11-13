typedef struct { char pad[8]; float f8; } Cfg_83026FD8;
typedef struct {
  char pad0[0x10];
  char sub[0x5e];
  unsigned short s6e;
  char pad70[0x26];
  unsigned short s96;
  char pad98[0x18];
  Cfg_83026FD8 *cfg;
  char padb4[4];
  unsigned char b8;
  unsigned char b9;
  char padba[2];
  unsigned short sbc;
} Obj_83026FD8;
typedef struct {
  char pad[0xc];
  unsigned short sc;
  char pad2[0x332];
  int s340;
} Arg_83026FD8;

extern void fn_83026CE0(Obj_83026FD8 *, Arg_83026FD8 *);
extern void fn_8303A208(void *, float);

void fn_83026FD8(Obj_83026FD8 *self, Arg_83026FD8 *arg)
{
  unsigned short sc = arg->sc;
  int v;
  self->b9 = 0;
  self->sbc = sc;
  fn_8303A208(self->sub, self->cfg->f8);
  if (self->s96 >= arg->sc) {
    v = 0x2d;
  } else {
    if (self->s6e != 0) {
      fn_83026CE0(self, arg);
      return;
    }
    if (self->b8 == 0) {
      return;
    }
    v = 0x11;
  }
  arg->s340 = v;
}
