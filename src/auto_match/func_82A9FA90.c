extern void fn_82A29A38(void);

void fn_82A9FA90(unsigned int sourceType, unsigned int sourceValue, unsigned int type, unsigned int value,
                 unsigned int *outType, unsigned int *outValue)
{
    *outValue = value;
    switch (type) {
    case 0x16:
        *outType = 10;
        *outValue = 1;
        break;
    case 0x17:
        *outType = 11;
        goto checkValue;
    case 0x14:
        *outType = 5;
        goto checkValue;
    case 0x15:
        *outType = 10;
        goto checkValue;
    case 0x13:
        if (value < 10) {
            switch (sourceType) {
            case 0x14:
                *outType = 5;
                *outValue = sourceValue;
                break;
            case 0x15:
                *outType = 10;
                goto checkValue;
            case 0x16:
                *outType = 10;
                *outValue = 1;
                break;
            case 0x17:
                *outType = 11;
                goto checkValue;
            case 0x21:
                *outType = 5;
                goto checkValue;
            default:
                fn_82A29A38();
                *outType = 15;
                break;
            }
        } else {
            *outType = (value >> 4) - 1;
            *outValue = value & 15;
        }
        break;
    default:
        fn_82A29A38();
        *outType = 15;
        *outValue = 15;
        break;
    }
    if (*outType > 13) {
        fn_82A29A38();
    }
checkValue:
    if (*outValue >= 16) {
        fn_82A29A38();
    }
}
