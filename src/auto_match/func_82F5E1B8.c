typedef struct Parameters_82F5E1B8 {
    int mode;        /* 0x0 */
    float first;     /* 0x4 */
    float second;    /* 0x8 */
    float third;     /* 0xc */
    float fourth;    /* 0x10 */
    int integer;     /* 0x14 */
    float alternate; /* 0x18 */
} Parameters_82F5E1B8;

extern int fn_829C9100(int context, int property, float value);
extern int fn_829C90F0(int context, int property, int value);

unsigned int fn_82F5E1B8(void *unused, Parameters_82F5E1B8 *parameters)
{
    unsigned int result = 1;
    unsigned int success;
    int property;
    float value;
    if (parameters->mode == 0) {
        success = fn_829C9100(0, 0, parameters->first) == 0;
        success = (fn_829C9100(0, 6, parameters->second) == 0) & success;
        success = (fn_829C9100(0, 7, parameters->third) == 0) & success;
        value = parameters->fourth;
        property = 8;
    } else if (parameters->mode == 1) {
        success = fn_829C90F0(0, 2, parameters->integer) == 0;
        value = parameters->alternate;
        property = 5;
    } else {
        goto done;
    }
    result = (fn_829C9100(0, property, value) == 0) & success;
done:
    return result;
}
