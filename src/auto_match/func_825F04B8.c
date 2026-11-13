typedef struct Cfg_825F04B8 { int pad[0x90 / 4]; int f90; } Cfg_825F04B8;
typedef struct Blk_825F04B8 { Cfg_825F04B8 *cfg; int pad[0x1d]; unsigned int flags[1]; } Blk_825F04B8;
typedef struct Arg_825F04B8 {
  Blk_825F04B8 *blk;
  int pad[3];
  int f10;
} Arg_825F04B8;
typedef struct Self_825F04B8 {
  int pad0;
  unsigned char *f4;
  int pad8[2];
  int f10;
} Self_825F04B8;

int fn_825F04B8(Self_825F04B8 *self, Arg_825F04B8 *a)
{
  if (a->f10 == 0) return 0;
  if ((a->blk->flags[self->f10] & 0x20) != 0) return 0;
  if (a->blk->cfg->f90 != 0 && self->f4[0xbdc] == 0) return 0;
  return 1;
}
