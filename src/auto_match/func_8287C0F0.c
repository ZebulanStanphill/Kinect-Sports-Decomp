extern const float lbl_82015468;    /* 6.2831855f (2 pi) */

/* Signed difference to - from in radians, wrapped into (-pi, pi]. */
float fn_8287C0F0(float from, float to)
{
    float diff = from - to;

    if (diff >= 3.14159274f) {
        from -= lbl_82015468;
    } else if (diff <= -3.14159274f) {
        to -= lbl_82015468;
    }
    return to - from;
}
