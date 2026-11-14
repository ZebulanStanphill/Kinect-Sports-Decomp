extern const float lbl_82022E5C;    /* 180.0f */
extern const float lbl_82022E58;    /* -180.0f */
extern const float lbl_8201543C;    /* 360.0f */

/* Signed difference to - from in degrees, wrapped into (-180, 180]. */
float fn_8287C0A8(float from, float to)
{
    float diff = from - to;

    if (diff >= lbl_82022E5C) {
        from -= lbl_8201543C;
    } else if (diff <= lbl_82022E58) {
        to -= lbl_8201543C;
    }
    return to - from;
}
