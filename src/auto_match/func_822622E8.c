typedef struct {
    unsigned int angle;
    unsigned char buf[12];
} CameraInfo_822622E8;

extern unsigned char *fn_8225F670(void);
extern void fn_8225F6D0(void);
extern int fn_8225FD88(int);
extern int fn_8225FDE0(int, int);
extern int fn_829C5988(unsigned int *, unsigned char *);
extern void fn_82E1CA30(void);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB08(const char *, int, int);
extern void fn_82E1CB40(const char *, int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CC18(const char *, unsigned int);
extern void fn_82E1CC60(const char *, float);
extern void fn_82E1CCA8(void);
extern void fn_82E1CD30(void);

void fn_822622E8(int matchId, int gameType, int difficulty, int aiMatch,
                 int score0, int score1, int score2, int score3,
                 float duration)
{
    CameraInfo_822622E8 cam;

    if (*fn_8225F670() != 0) {
        if (fn_8225FDE0(0x47, 1) == 0 && fn_82E1CAD0(0x47) != 0) {
            fn_82E1CD30();
            fn_82E1CB88("MatchId", matchId);
            fn_82E1CB08("GameType", gameType, 0);
            fn_82E1CB08("Difficulty", fn_8225FD88(difficulty), 0);
            fn_82E1CB40("AIMatch", aiMatch);
            fn_82E1CB88("Player0Score", score0);
            fn_82E1CB88("Player1Score", score1);
            fn_82E1CB88("Player2Score", score2);
            fn_82E1CB88("Player3Score", score3);
            fn_82E1CC60("Duration", duration);
            if (fn_829C5988(&cam.angle, cam.buf) >= 0) {
                fn_82E1CC18("CameraAngle", cam.angle);
            } else {
                fn_82E1CB88("CameraAngle", -1);
            }
            fn_82E1CCA8();
            fn_82E1CA30();
        }
    }
    fn_8225F6D0();
}
