extern void fn_829C8658(int, int, int *);
extern int fn_829C9100(int, int, float);
extern int fn_829C90F0(int, int, int);

unsigned int fn_82F5E0A0(void *self, const int *parameters)
{
    int mode = -1;
    unsigned int success = 1;
    fn_829C8658(0, 0, &mode);
    if (parameters[0] != mode) {
        if (mode == 0) {
            success = fn_829C9100(0, 0, 30.0f) == 0;
            success = (fn_829C9100(0, 6, 0.0f) == 0) & success;
            success = (fn_829C9100(0, 7, 0.0f) == 0) & success;
            success = (fn_829C9100(0, 8, 0.0f) == 0) & success;
        } else if (mode == 1) {
            success = fn_829C90F0(0, 2, 0) == 0;
            success = (fn_829C9100(0, 5, 0.0f) == 0) & success;
        } else {
            goto done;
        }
    }
done:
    return success;
}
