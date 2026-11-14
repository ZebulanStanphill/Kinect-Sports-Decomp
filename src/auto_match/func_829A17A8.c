typedef struct Param_829A17A8 {
    char pad0[0x6e];
    unsigned char index;
    unsigned char kind;
} Param_829A17A8;
long fn_829A17A8(void *dev, Param_829A17A8 *param, unsigned int *index,
                 unsigned int *count, unsigned int *flag)
{
    unsigned int i = param->index;
    unsigned char k = param->kind;

    *index = i;
    if (k == 1) {
        if (i >= 1)
            return 0x80004005;
        *count = 0;
        if (flag != 0)
            *flag = 0;
    } else if (k == 2) {
        if (i != 0)
            return 0x80004005;
        *count = 9;
        if (flag != 0)
            *flag = 1;
    } else {
        return 0x80004005;
    }
    return 0;
}
