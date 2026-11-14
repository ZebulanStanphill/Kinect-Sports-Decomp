typedef struct Params_8301EE38 {
    int words[6];
} Params_8301EE38;

typedef struct Motion_8301EE38 {
    Params_8301EE38 params;     /* 0x0 */
    float a;                    /* 0x18 */
    float b;                    /* 0x1c */
} Motion_8301EE38;

typedef struct Entry_8301EE38 {
    char pad[0x30];
    Motion_8301EE38 motion;     /* 0x30 */
    unsigned char enabled;      /* 0x50 */
    char rest[0x90 - 0x51];
} Entry_8301EE38;

extern Entry_8301EE38 lbl_83264610[8];

int fn_8301EE38(unsigned int index, unsigned char enabled, Params_8301EE38 *params)
{
    if (index >= 8)
        return 0x1f;
    lbl_83264610[index].enabled = enabled;
    if (params != 0) {
        Motion_8301EE38 *m = &lbl_83264610[index].motion;
        m->params = *params;
        m->a = 0.0f;
        m->b = 0.0f;
    }
    return 1;
}
