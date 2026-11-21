typedef struct Sp_822F0780 {
    int *px;
    int *rep;
} Sp_822F0780;

typedef struct Swing_822F0780 {
    char pad0[0x8];
    float spin;   /* 0x08 */
    int forehand; /* 0x0c */
} Swing_822F0780;

typedef struct World_822F0780 {
    char pad0[0x178];
    int mode; /* 0x178 */
} World_822F0780;

typedef struct Ctx_822F0780 {
    char pad0[0xc];
    int player;            /* 0x0c */
    World_822F0780 *world; /* 0x10 */
} Ctx_822F0780;

extern void fn_822315A0(void *rep);
extern int **fn_822E5F48(Sp_822F0780 *out, int player);

static __forceinline Swing_822F0780 *GetSwing_822F0780(Sp_822F0780 *temp, int player)
{
    return (Swing_822F0780 *)*fn_822E5F48(temp, player);
}

const char *fn_822F0780(Ctx_822F0780 *self)
{
    Sp_822F0780 handTemp;
    Sp_822F0780 forehandTopTemp;
    Sp_822F0780 forehandBackTemp;
    Sp_822F0780 backhandTopTemp;
    Sp_822F0780 backhandBackTemp;
    int forehand;
    unsigned char topspin;
    unsigned char backspin;

    if (self->world->mode == 2) {
        return "serve_quick_straight";
    }
    forehand = GetSwing_822F0780(&handTemp, self->player)->forehand;
    if (handTemp.rep != 0) {
        fn_822315A0(handTemp.rep);
    }
    if (forehand != 0) {
        topspin = GetSwing_822F0780(&forehandTopTemp, self->player)->spin > 0.0f;
        if (forehandTopTemp.rep != 0) {
            fn_822315A0(forehandTopTemp.rep);
        }
        if (topspin) {
            return "serve_forehand_topspin";
        }
        backspin = GetSwing_822F0780(&forehandBackTemp, self->player)->spin < 0.0f;
        if (forehandBackTemp.rep != 0) {
            fn_822315A0(forehandBackTemp.rep);
        }
        if (backspin) {
            return "serve_forehand_backspin";
        }
        return "serve_forehand_normal";
    }
    topspin = GetSwing_822F0780(&backhandTopTemp, self->player)->spin > 0.0f;
    if (backhandTopTemp.rep != 0) {
        fn_822315A0(backhandTopTemp.rep);
    }
    if (topspin) {
        return "serve_backhand_topspin";
    }
    backspin = GetSwing_822F0780(&backhandBackTemp, self->player)->spin < 0.0f;
    if (backhandBackTemp.rep != 0) {
        fn_822315A0(backhandBackTemp.rep);
    }
    if (backspin) {
        return "serve_backhand_backspin";
    }
    return "serve_backhand_normal";
}
