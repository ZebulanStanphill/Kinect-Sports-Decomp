extern char lbl_83265A28[];
extern const float lbl_8218EC10;
extern float lbl_831E4880;
extern float fn_822CF9D8(void);
extern int fn_82520780(void *table, float time);

int fn_822CFA38(void)
{
    float t = fn_822CF9D8();
    if (t < lbl_8218EC10)
        return 0;
    if (t > lbl_831E4880)
        return 1;
    return fn_82520780(lbl_83265A28, t);
}
