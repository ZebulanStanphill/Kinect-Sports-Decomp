extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern int fn_8225FD88(int);
extern int fn_82250A18(void);
extern unsigned char fn_82E1CAD0(int);
extern int fn_82E1CB08(const char *, int, int);
extern int fn_82E1CB40(const char *, int);
extern int fn_82E1CB88(const char *, int);
extern int fn_82E1CCA8(void);
extern int fn_82E1CD08(void);
extern int lbl_83265A58[];
extern char lbl_832760AA;
extern char lbl_832760AB;
extern int lbl_832760B8;
extern int lbl_832760BC;
typedef struct { char pad[4]; unsigned char f4; } Cfg_8225FE40;
extern Cfg_8225FE40 *lbl_832975B0;
void fn_8225FE40(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
  unsigned char *pc;
  Cfg_8225FE40 *cfg;
  pc = fn_8225F670();
  if (*pc != 0) {
    if (fn_8225FDE0(0x18, 1) == 0 && fn_82E1CAD0(0x18) != 0) {
      fn_82E1CD08();
      fn_82E1CB88("MatchCounter", a1);
      fn_82E1CB08("GameMode", a2, 0);
      fn_82E1CB88("IsPartyMode", a3);
      cfg = lbl_832975B0 ? lbl_832975B0 : (Cfg_8225FE40 *)fn_82250A18();
      fn_82E1CB40("IsLiveGame", cfg->f4);
      fn_82E1CB08("Difficulty", fn_8225FD88(a4), 0);
      fn_82E1CB88("Team0Player0IsHuman", a5);
      fn_82E1CB88("Team0Player0IsLeftHanded", a6);
      fn_82E1CB88("Team0Player1IsHuman", a7);
      fn_82E1CB88("Team0Player1IsLeftHanded", a8);
      fn_82E1CB88("Team1Player0IsHuman", a9);
      fn_82E1CB88("Team1Player0IsLeftHanded", a10);
      fn_82E1CB88("Team1Player1IsHuman", a11);
      fn_82E1CB88("Team1Player1IsLeftHanded", a12);
      fn_82E1CCA8();
    }
  }
  lbl_832760B8 = lbl_83265A58[0x1a8];
  lbl_832760BC = lbl_83265A58[0x1a9];
  lbl_832760AA = 1;
  lbl_832760AB = 0;
}
