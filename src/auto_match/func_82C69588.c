typedef struct Cfg_82C69588 { char pad[0x2c8]; int f2c8; char pad2[0x3c]; int f308; int f30c; char pad3[0x4508]; unsigned f4818; } Cfg_82C69588;
typedef struct Obj_82C69588 { char pad0[0xb4]; int fb4; int pad1; int fbc; char pad2[0x60]; int f120; char pad3[0x5f4c]; Cfg_82C69588 *f6070; char pad4[0x50d8]; int fb14c; } Obj_82C69588;
int fn_82C69588(Obj_82C69588 *o)
{
  int r, mx, n, w, h, c;
  Cfg_82C69588 *cfg;
  r = o->fb14c;
  if (r != 0) return r;
  cfg = o->f6070;
  r = 1;
  if (cfg->f2c8 != 0) {
    w = o->fbc;
    h = o->fb4;
    mx = cfg->f308;
    n = (w * h + 0x257ff) / 0x25800;
    r = mx < n ? mx : n;
    if (r >= 4) r = 4;
    if (o->f120 == 2 || o->f120 == 4) {
      c = cfg->f30c + 1;
    } else {
      if (cfg->f30c > mx) r = 1;
      c = 0;
    }
    { int *pc = &cfg->f30c; *pc = c; }
    if (cfg->f4818 != 0 && o->f120 == 2) r = 1;
  }
  o->fb14c = r;
  return r;
}
