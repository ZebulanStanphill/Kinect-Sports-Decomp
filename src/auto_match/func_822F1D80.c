typedef struct String_822F1D80 {
    int words[7];
} String_822F1D80;

typedef struct Player_822F1D80 {
    char pad00[0x0c];
    int forehand; /* 0x0c */
} Player_822F1D80;

typedef struct SharedPtr_822F1D80 {
    Player_822F1D80 *px;
    int *rep;
} SharedPtr_822F1D80;

typedef struct Rules_822F1D80 {
    char pad00[0x68];
    void *quickServe; /* 0x68 */
} Rules_822F1D80;

typedef struct Match_822F1D80 {
    char pad000[0x178];
    int serveMode; /* 0x178 */
    char pad17c[0x2e0 - 0x17c];
    Rules_822F1D80 *rules; /* 0x2e0 */
} Match_822F1D80;

typedef struct ServeState_822F1D80 {
    char pad00[0x0c];
    void *animator;        /* 0x0c */
    Match_822F1D80 *match; /* 0x10 */
    char pad14[0x34 - 0x14];
    int started; /* 0x34 */
} ServeState_822F1D80;

extern void fn_822E5F48(SharedPtr_822F1D80 *out, void *animator);
extern void fn_82230110(String_822F1D80 *s, const char *text);
extern void fn_82230300(String_822F1D80 *s, int built, int size);
extern void fn_822E52D8(void *animator, String_822F1D80 *name);
extern void fn_822E5340(void *animator, String_822F1D80 *name);
extern int fn_82399C38(Match_822F1D80 *match);
extern void fn_822315A0(int *rep);

void fn_822F1D80(ServeState_822F1D80 *self)
{
    SharedPtr_822F1D80 player;
    String_822F1D80 intoQuick;
    String_822F1D80 idleQuick;
    String_822F1D80 intoForehandMatchPoint;
    String_822F1D80 intoForehand;
    String_822F1D80 idleForehand;
    String_822F1D80 intoBackhandMatchPoint;
    String_822F1D80 intoBackhand;
    String_822F1D80 idleBackhand;

    fn_822E5F48(&player, self->animator);
    if (self->match->serveMode != 2) {
        if (player.px->forehand != 0) {
            if (fn_82399C38(self->match) != 0) {
                fn_82230110(&intoForehandMatchPoint, "into_serve_matchpoint_forehand");
                fn_822E52D8(self->animator, &intoForehandMatchPoint);
                fn_82230300(&intoForehandMatchPoint, 1, 0);
            } else {
                fn_82230110(&intoForehand, "into_serve_forehand");
                fn_822E52D8(self->animator, &intoForehand);
                fn_82230300(&intoForehand, 1, 0);
            }
            fn_82230110(&idleForehand, "idle_serveforehand");
            fn_822E5340(self->animator, &idleForehand);
            fn_82230300(&idleForehand, 1, 0);
        } else {
            if (fn_82399C38(self->match) != 0) {
                fn_82230110(&intoBackhandMatchPoint, "into_serve_matchpoint_backhand");
                fn_822E52D8(self->animator, &intoBackhandMatchPoint);
                fn_82230300(&intoBackhandMatchPoint, 1, 0);
            } else {
                fn_82230110(&intoBackhand, "into_serve_backhand");
                fn_822E52D8(self->animator, &intoBackhand);
                fn_82230300(&intoBackhand, 1, 0);
            }
            fn_82230110(&idleBackhand, "idle_servebackhand");
            fn_822E5340(self->animator, &idleBackhand);
            fn_82230300(&idleBackhand, 1, 0);
        }
    } else {
        if (self->match->rules->quickServe == 0) {
            fn_82230110(&intoQuick, "into_serve_quick");
            fn_822E52D8(self->animator, &intoQuick);
            fn_82230300(&intoQuick, 1, 0);
        }
        fn_82230110(&idleQuick, "idle_servequick");
        fn_822E5340(self->animator, &idleQuick);
        fn_82230300(&idleQuick, 1, 0);
    }
    self->started = 1;
    if (player.rep != 0)
        fn_822315A0(player.rep);
}
