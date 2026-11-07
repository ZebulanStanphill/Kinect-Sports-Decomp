extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int id, int flag);
extern unsigned char fn_82E1CAD0(int id);
extern void fn_82E1CB88(const char *name, int value);
extern void fn_82E1CCA8(void);
extern void fn_82E1CD08(void);

extern int lbl_83265A58[];
extern unsigned char lbl_832760AA;
extern unsigned char lbl_832760AB;
extern int lbl_832760B8;
extern int lbl_832760BC;

void fn_82260CD0(int mode, int gameId, int numHumans, int isParty, int isLive)
{
    if (*fn_8225F670() != 0) {
        if (mode == 2) {
            if (fn_8225FDE0(0x23, 1) != 0)
                goto done;
            if (fn_82E1CAD0(0x23))
                goto report;
        }
        if (mode == 3) {
            if (fn_8225FDE0(0x25, 1) != 0)
                goto done;
            if (fn_82E1CAD0(0x25))
                goto report;
        }
        if (mode == 4) {
            if (fn_8225FDE0(0x27, 1) != 0)
                goto done;
            if (fn_82E1CAD0(0x27))
                goto report;
        }
        if (mode == 0) {
            if (fn_8225FDE0(0x24, 1) != 0)
                goto done;
            if (fn_82E1CAD0(0x24))
                goto report;
        }
        if (mode != 1)
            goto done;
        if (fn_8225FDE0(0x26, 1) != 0)
            goto done;
        if (!fn_82E1CAD0(0x26))
            goto done;
report:
        fn_82E1CD08();
        fn_82E1CB88("GameId", gameId);
        fn_82E1CB88("NumberOfHumanPlayers", numHumans);
        fn_82E1CB88("IsPartyMode", isParty);
        fn_82E1CB88("IsLiveGame", isLive);
        fn_82E1CCA8();
    }
done:
    lbl_832760B8 = lbl_83265A58[0x1a8];
    lbl_832760BC = lbl_83265A58[0x1a9];
    lbl_832760AA = 1;
    lbl_832760AB = 0;
}
