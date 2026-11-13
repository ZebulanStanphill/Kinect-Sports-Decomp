typedef struct { char pad0[4]; unsigned char swapped; } Settings_82337BE0;
typedef struct { char pad0[0x24]; int active; char pad28[4]; int side; } Team_82337BE0;
typedef struct { char pad0[0xc]; void *team; } Match_82337BE0;
typedef struct {
  char pad0[0x2c];
  int side;
  char pad30[0x170];
  Match_82337BE0 *match;
} Self_82337BE0;

extern Team_82337BE0 *fn_8242C1B8(void *team);
extern Settings_82337BE0 *fn_82250A18(void);
extern Settings_82337BE0 *lbl_832975B0;

static __forceinline Settings_82337BE0 *settings(void)
{
  return lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
}

int fn_82337BE0(Self_82337BE0 *self)
{
  Team_82337BE0 *team = fn_8242C1B8(self->match->team);
  if (team == 0)
    return 0;
  if (team->active == 0)
    return 0;
  {
    Settings_82337BE0 *st = settings();
    int mySide = self->side;
    return mySide == (st->swapped ? team->side == 0 : team->side + 1);
  }
}
