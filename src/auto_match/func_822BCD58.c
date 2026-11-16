typedef struct Entry_822BCD58 {
    float angle; /* 0x00 */
    char padding[0x1c];
    unsigned int first;  /* 0x20 */
    unsigned int second; /* 0x24 */
    char padding28[0x10];
    float distance; /* 0x38 */
} Entry_822BCD58;

extern float lbl_8218EC10;
extern float fn_82809CB0(float);

int fn_822BCD58(const Entry_822BCD58 *first, const Entry_822BCD58 *second)
{
    float tolerance;

    if (first->first > second->first) {
        return 1;
    }
    tolerance = lbl_8218EC10;

    if (first->distance < second->distance - tolerance) {
        return 0;
    }
    if (first->distance > second->distance + tolerance) {
        return 1;
    }
    if (first->second < second->second) {
        return 0;
    }
    if (first->second > second->second) {
        return 1;
    }
    if (fn_82809CB0(first->angle) > fn_82809CB0(second->angle) + tolerance) {
        return 0;
    }
    return fn_82809CB0(first->angle) < fn_82809CB0(second->angle) + tolerance;
}
