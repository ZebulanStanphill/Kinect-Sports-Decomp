typedef struct Device_82C3D380 {
    char pad00[0x20];
    unsigned int width;  /* 0x20 */
    unsigned int height; /* 0x24 */
    char pad28[0x64 - 0x28];
    unsigned int format; /* 0x64 */
    unsigned int mode;   /* 0x68 */
    unsigned int pitch;  /* 0x6c */
    char pad70[0x1084 - 0x70];
    int handle; /* 0x1084 */
} Device_82C3D380;

typedef struct Desc_82C3D380 {
    char pad00[0x1c];
    int usage; /* 0x1c */
} Desc_82C3D380;

int fn_82C4D9B8(Desc_82C3D380 *desc, int handle, int *formats, int count, unsigned int *format,
                unsigned int *mode, int *converted);
int fn_82C4DC18(Desc_82C3D380 *desc, int handle, unsigned int mode, unsigned int *width, unsigned int *height,
                unsigned int *pitch, int *converted);
int fn_82C107F8(int handle, int usage, int flags, int reserved);

int fn_82C3D380(Device_82C3D380 *self, Desc_82C3D380 *desc)
{
    int usage = desc->usage;
    int converted;
    int formats[12];
    int hr;

    converted = 0;
    formats[0] = 12;
    formats[1] = 1;
    formats[2] = 2;
    formats[3] = 3;
    formats[4] = 4;
    formats[5] = 5;
    formats[6] = 6;
    formats[7] = 7;
    formats[8] = 8;
    formats[9] = 9;
    formats[10] = 10;
    formats[11] = 11;
    hr = fn_82C4D9B8(desc, self->handle, formats, 12, &self->format, &self->mode, &converted);
    if (hr < 0) {
        return hr;
    }
    hr = fn_82C4DC18(desc, self->handle, self->mode, &self->width, &self->height, &self->pitch, &converted);
    if (hr < 0) {
        return hr;
    }
    hr = fn_82C107F8(self->handle, usage, 0x90000, 0);
    if (hr < 0) {
        return hr;
    }
    if (converted != 0) {
        hr = 0x500009;
    }
    return hr;
}
