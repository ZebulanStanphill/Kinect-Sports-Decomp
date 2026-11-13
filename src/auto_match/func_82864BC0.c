extern float lbl_8201FB94; /* -200 */
extern float lbl_8201FB98; /* -60 */
extern float lbl_8201FB9C; /* 35 */
extern float lbl_8201FBA0; /* -40 */
extern float lbl_8201FBA4; /* 1.666667 */
extern float lbl_8201FBA8; /* 96 */
extern float lbl_8201FBAC; /* 0.833333 */
extern float lbl_8201FBB0; /* 84 */
extern float lbl_8201FBB4; /* 0.416667 */
extern float lbl_8201FBB8; /* 48 */
extern float lbl_8200D8B4; /* -10 */

/* inverse of fn_82864CB0 */
float fn_82864BC0(float x)
{
    float r;

    if (x < 0.0f) {
        x = 0.0f;
    } else if (x > 100.0f) {
        x = 100.0f;
    }
    if ((100.0f - x) <= 0.0f)
        return 10.0f;
    if ((100.0f - x) < lbl_8201FBB8)
        return 10.0f - (100.0f - x) * lbl_8201FBB4;
    if ((100.0f - x) < lbl_8201FBB0)
        r = lbl_8200D8B4 - ((100.0f - x) - lbl_8201FBB8) * lbl_8201FBAC;
    else if ((100.0f - x) < lbl_8201FBA8)
        r = lbl_8201FBA0 - ((100.0f - x) - lbl_8201FBB0) * lbl_8201FBA4;
    else if ((100.0f - x) < 100.0f)
        r = lbl_8201FB98 - ((100.0f - x) - lbl_8201FBA8) * lbl_8201FB9C;
    else
        return lbl_8201FB94;
    return r;
}
