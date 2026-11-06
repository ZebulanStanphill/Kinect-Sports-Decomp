extern int fn_82250A18();
extern char *fn_8225F670();
extern int fn_8225FD88();
extern int fn_8225FDE0();
extern unsigned char fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD08();

typedef struct { char pad[4]; unsigned char f4; } Cfg_822627F8;
extern Cfg_822627F8 *lbl_832975B0;
extern struct { char pad[0x6a0]; int f6a0; int f6a4; } lbl_83265A58;
extern unsigned char lbl_832760AA;
extern unsigned char lbl_832760AB;
extern int lbl_832760B8;
extern int lbl_832760BC;

void fn_822627F8(int a, int b, int c, int d, int e, int f, int g, int h)
{
  Cfg_822627F8 *cfg;

  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(4, 1) == 0 && fn_82E1CAD0(4) != 0) {
      fn_82E1CD08();
      fn_82E1CB88("MatchCounter", a);
      fn_82E1CB08("GameMode", b, 0);
      fn_82E1CB88("IsPartyMode", c);
      cfg = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        cfg = (Cfg_822627F8 *)fn_82250A18();
      }
      fn_82E1CB40("IsLiveGame", cfg->f4);
      fn_82E1CB08("Difficulty", fn_8225FD88(d), 0);
      fn_82E1CB88("Team0Player0IsHuman", e);
      fn_82E1CB88("Team0Player1IsHuman", f);
      fn_82E1CB88("Team1Player0IsHuman", g);
      fn_82E1CB88("Team1Player1IsHuman", h);
      fn_82E1CCA8();
    }
  }
  lbl_832760B8 = lbl_83265A58.f6a0;
  lbl_832760BC = lbl_83265A58.f6a4;
  lbl_832760AA = 1;
  lbl_832760AB = 0;
}
