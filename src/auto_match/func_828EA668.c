extern unsigned int fn_82A1BFB8(void *user, int setting, int *value);

int fn_828EA668(void *user, unsigned char enabled)
{
    int value;

    if (!enabled) {
        return 0;
    }
    value = 0;
    if (fn_82A1BFB8(user, 0xfc, &value) == 0) {
        if (value != 0) {
            return 0;
        }
        fn_82A1BFB8(user, 0xfb, &value);
        return value == 0;
    }
    return 1;
}
