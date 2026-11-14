typedef struct Object_82F41870 {
    char pad0[0x3c];
    unsigned int mode;
} Object_82F41870;

long fn_82F41870(Object_82F41870 *self, unsigned short *out)
{
    long hr = 0;

    *out = 1;
    switch (self->mode) {
    case 0:
        *out = 3;
        break;
    case 1:
        *out = 0;
        break;
    case 2:
        *out = 1;
        break;
    case 3:
        *out = 2;
        break;
    case 4:
        *out = 4;
        break;
    case 5:
        *out = 5;
        break;
    case 6:
        hr = 0x80004005;
        break;
    default:
        hr = 0x80004005;
        break;
    }
    return hr;
}
