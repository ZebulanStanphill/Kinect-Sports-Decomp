typedef struct Rect_829C8FD0 {
    float x;      /* 0x0 */
    float y;      /* 0x4 */
    float width;  /* 0x8 */
    float height; /* 0xc */
} Rect_829C8FD0;

extern int lbl_83214FFC;
extern char lbl_83215000[];
extern const float lbl_820288E4;
extern const float lbl_820570D4;
extern int fn_829C8918(unsigned int index);

int fn_829C8FD0(int user, unsigned int index, const Rect_829C8FD0 *rect)
{
    unsigned int offset;
    int invalid;

    invalid = index >= 2 || user != 0;
    if (invalid) {
        return 0x80070057;
    }
    if (lbl_83214FFC == 0) {
        return 0x8000ffff;
    }
    if (rect == 0) {
        return 0x80070057;
    }
    if (rect->width < lbl_820288E4 || rect->width > 1.0f || rect->height < lbl_820288E4 ||
        rect->height > 1.0f) {
        return 0x80070057;
    }
    offset = index * 0x184;
    *(int *)(lbl_83215000 + 0x6d0 + offset) = (int)(rect->x * lbl_820570D4);
    *(int *)(lbl_83215000 + 0x6d4 + offset) = (int)(rect->y * lbl_820570D4);
    *(int *)(lbl_83215000 + 0x6d8 + offset) = (int)(rect->width * lbl_820570D4);
    *(int *)(lbl_83215000 + 0x6dc + offset) = (int)(rect->height * lbl_820570D4);
    fn_829C8918(index);
    return 0;
}
