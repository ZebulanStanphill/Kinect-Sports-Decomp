extern const float lbl_8208DD9C;
extern const float lbl_8208DD98;
extern const float lbl_8208DD8C;
extern const float lbl_8207F51C;
extern const float lbl_8208DD94;

float fn_82E34C68(unsigned int level, unsigned short format)
{
    if (level <= 10) {
        return lbl_8208DD9C;
    }
    if (level <= 25) {
        return lbl_8208DD98;
    }
    if (level <= 50) {
        return lbl_8208DD8C;
    }
    if (level <= 75) {
        return 0.05f;
    }
    if (level <= 90) {
        return lbl_8207F51C;
    }
    if (level < 100) {
        return lbl_8208DD94;
    }
    if (level == 100 && (format == 0x163 || format == 0x167)) {
        return 0.0f;
    }
    return -1.0f;
}
