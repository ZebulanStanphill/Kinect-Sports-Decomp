typedef struct Intro_83125170 {
    int movieId;    /* 0x0 */
    float duration; /* 0x4 */
} Intro_83125170;

extern int fn_8265BF48(const char *name, int flags);
extern Intro_83125170 lbl_83296D5C[];

void fn_83125170(void)
{
    lbl_83296D5C[0].movieId = fn_8265BF48("aid_xmv_banjox_levelintros_banjoland", 0);
    lbl_83296D5C[0].duration = 50.0f;
    lbl_83296D5C[1].movieId = fn_8265BF48("aid_xmv_banjox_levelintros_cpu", 0);
    lbl_83296D5C[1].duration = 59.0f;
    lbl_83296D5C[2].movieId = fn_8265BF48("aid_xmv_banjox_levelintros_logsolympics", 0);
    lbl_83296D5C[2].duration = 61.16f;
    lbl_83296D5C[3].movieId = fn_8265BF48("aid_xmv_banjox_levelintros_nuttyacres", 0);
    lbl_83296D5C[3].duration = 58.0f;
    lbl_83296D5C[4].movieId = fn_8265BF48("aid_xmv_banjox_levelintros_terrorium", 0);
    lbl_83296D5C[4].duration = 59.0f;
}
