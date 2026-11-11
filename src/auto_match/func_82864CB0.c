extern float lbl_8201FBC8; /* -96 */
extern float lbl_8200D8B4; /* -10 */
extern float lbl_8201FBC4; /* -2.4 */
extern float lbl_8201FBA0; /* -40 */
extern float lbl_8201FBB8; /* 48 */
extern float lbl_8201FB98; /* -60 */
extern float lbl_820885C8; /* 40 */
extern float lbl_8201FBB0; /* 84 */
extern float lbl_8201FB94; /* -200 */
extern float lbl_8201EBA4; /* 60 */
extern float lbl_8201FBBC; /* 0.0285714 */
extern float lbl_8201FBA8; /* 96 */

float fn_82864CB0(float x)
{
    float r;

    if (x < 10.0f) {
        x = 10.0f;
    } else if (x > lbl_8201FBC8) {
        x = lbl_8201FBC8;
    }
    if (x >= 10.0f) {
        r = 0.0f;
    } else if (x > lbl_8200D8B4) {
        r = (x - 10.0f) * lbl_8201FBC4;
    } else if (x > lbl_8201FBA0) {
        r = lbl_8201FBB8 - (x + 10.0f) * 1.2f;
    } else if (x > lbl_8201FB98) {
        r = lbl_8201FBB0 - (x + 40.0f) * 0.6f;
    } else if (x > lbl_8201FB94) {
        r = lbl_8201FBA8 - (x + 60.0f) * lbl_8201FBBC;
    } else {
        r = 100.0f;
    }
    return 100.0f - r;
}
