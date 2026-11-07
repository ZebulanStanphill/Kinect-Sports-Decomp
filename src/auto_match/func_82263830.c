typedef unsigned char U8;

extern unsigned char *fn_8225F670(void);
extern int fn_8225FD88(int);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB08(const char *, int, int);
extern void fn_82E1CB40(const char *, int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CCA8(void);
extern void fn_82E1CD08(void);

extern unsigned int lbl_83265A58[];
extern unsigned char lbl_832760AA;
extern unsigned char lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;

void fn_82263830(int param_1, int param_2, int param_3, int param_4,
                 int param_5, int param_6, int param_7)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x4c, 1) == 0 && fn_82E1CAD0(0x4c) != 0) {
      fn_82E1CD08();
      fn_82E1CB88("MatchCounter", param_1);
      fn_82E1CB08("MatchType", param_2, 0);
      fn_82E1CB40("PartyMode", param_3);
      fn_82E1CB40("LIVE", param_4);
      fn_82E1CB08("Difficulty", fn_8225FD88(param_5), 0);
      fn_82E1CB40("Team0Player0IsHuman", 1);
      fn_82E1CB40("Team0Player1IsHuman", param_6);
      fn_82E1CB40("Team1Player0IsHuman", param_7);
      fn_82E1CB40("Team1Player1IsHuman", 0);
      fn_82E1CCA8();
    }
  }
  lbl_832760B8 = lbl_83265A58[0x6a0 / 4];
  lbl_832760BC = lbl_83265A58[0x6a4 / 4];
  lbl_832760AA = 1;
  lbl_832760AB = 0;
}
