typedef struct Device_82C07F20 {
    char pad0[0x228];
    int surface; /* 0x228 */
} Device_82C07F20;

typedef struct Dimensions_82C07F20 {
    int f0;
    int width;  /* 0x4 */
    int height; /* 0x8 */
} Dimensions_82C07F20;

typedef struct Stream_82C07F20 {
    char pad0[0x28];
    int area;       /* 0x28 */
    void *surface;  /* 0x2c */
    void *callback; /* 0x30 */
    short format;   /* 0x34 */
    short channels; /* 0x36 */
    char pad38[0x10];
    Device_82C07F20 *device; /* 0x48 */
} Stream_82C07F20;

int fn_82C07F20(Stream_82C07F20 *stream, int property, int value, int *locked)
{
    Device_82C07F20 *device = stream->device;
    int hr = 0;

    if (*locked == 0) {
        switch (property) {
        case 0x90000:
            break;
        case 0x90010:
            *(int *)value = -1;
            break;
        case 0x90020:
            stream->callback = (void *)value;
            break;
        case 0x90030:
            stream->channels = (short)value;
            break;
        case 0x90040:
            stream->format = (short)value;
            break;
        case 0x90050:
            break;
        case 0x90060:
            break;
        case 0x90070:
            stream->area = ((Dimensions_82C07F20 *)value)->height * ((Dimensions_82C07F20 *)value)->width;
            break;
        case 0x90080:
            if (value != device->surface)
                hr = 0x805000b7;
            else
                stream->surface = (void *)value;
            break;
        case 0x90090:
            break;
        case 0x900a0:
            break;
        case 0x900b0:
            break;
        default:
            hr = 0x805000b2;
            break;
        }
    }
    return hr;
}
