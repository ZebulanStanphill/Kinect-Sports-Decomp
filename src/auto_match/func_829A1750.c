typedef struct Device_829A1750 {
    char pad0[0x28];
    unsigned int count1;
    char pad2c[0x3c - 0x2c];
    unsigned int count3;
} Device_829A1750;

typedef struct Param_829A1750 {
    char pad0[0x6e];
    unsigned char index;
    unsigned char kind;
} Param_829A1750;

long fn_829A1750(Device_829A1750 *dev, Param_829A1750 *param, unsigned int *index,
                 unsigned int *kind)
{
    unsigned int i = param->index;
    unsigned char k = param->kind;
    unsigned int result;

    *index = i;
    if (k == 1) {
        if (i >= dev->count1)
            return 0x80004005;
        result = 1;
    } else if (k == 3) {
        if (i >= dev->count3)
            return 0x80004005;
        result = 3;
    } else {
        return 0x80004005;
    }
    *kind = result;
    return 0;
}
