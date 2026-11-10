extern unsigned char *fn_8225F670(void);
extern void fn_8225F6D0(void);
extern int fn_8225FDE0(int, int);
extern void fn_82E1CA30(void);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_82E1CCA8(void);
extern void fn_82E1CD30(void);

void fn_82264400(int matchCounter, int score0, float duration0, int score1, float duration1,
                 int score2, float duration2, int score3, float duration3)
{
    if (*fn_8225F670() != 0) {
        if (fn_8225FDE0(0x5b, 1) == 0 && fn_82E1CAD0(0x5b) != 0) {
            fn_82E1CD30();
            fn_82E1CB88("MatchCounter", matchCounter);
            fn_82E1CB88("Team0Score", score0);
            fn_82E1CC60("Team0GameDurationSecs", duration0);
            fn_82E1CB88("Team1Score", score1);
            fn_82E1CC60("Team1GameDurationSecs", duration1);
            fn_82E1CB88("Team2Score", score2);
            fn_82E1CC60("Team2GameDurationSecs", duration2);
            fn_82E1CB88("Team3Score", score3);
            fn_82E1CC60("Team3GameDurationSecs", duration3);
            fn_82E1CCA8();
            fn_82E1CA30();
        }
    }
    fn_8225F6D0();
}
