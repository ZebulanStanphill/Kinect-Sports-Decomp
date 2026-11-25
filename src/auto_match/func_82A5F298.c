typedef struct GUID {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;

/* The audio format structures are byte-packed, as in the XDK headers. */
#pragma pack(push, 1)

typedef struct WAVEFORMATEX {
    unsigned short wFormatTag;     /* 0x00 */
    unsigned short nChannels;      /* 0x02 */
    unsigned int nSamplesPerSec;   /* 0x04 */
    unsigned int nAvgBytesPerSec;  /* 0x08 */
    unsigned short nBlockAlign;    /* 0x0c */
    unsigned short wBitsPerSample; /* 0x0e */
    unsigned short cbSize;         /* 0x10 */
} WAVEFORMATEX;

typedef struct WAVEFORMATEXTENSIBLE {
    WAVEFORMATEX Format;                /* 0x00 */
    unsigned short wValidBitsPerSample; /* 0x12 */
    unsigned int dwChannelMask;         /* 0x14 */
    GUID SubFormat;                     /* 0x18 */
} WAVEFORMATEXTENSIBLE;

#pragma pack(pop)

extern GUID lbl_8208E050;
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern void *memset(void *dst, int value, unsigned int size);
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern unsigned int fn_82A5DE08(const WAVEFORMATEX *format, int useDefault);

WAVEFORMATEXTENSIBLE *fn_82A5F298(const WAVEFORMATEX *format)
{
    WAVEFORMATEXTENSIBLE *extensible;
    unsigned int size;
    unsigned int copySize;
    GUID subFormat;

    if (format->wFormatTag == 0x165 || format->wFormatTag == 1 ||
        (size = format->cbSize + sizeof(WAVEFORMATEX)) < sizeof(WAVEFORMATEXTENSIBLE)) {
        size = sizeof(WAVEFORMATEXTENSIBLE);
    }
    extensible = (WAVEFORMATEXTENSIBLE *)fn_8265C940(size, 0x20970000);
    if (extensible != 0) {
        if (format->wFormatTag == 0x165) {
            copySize = 0x20;
        } else if (format->wFormatTag == 1) {
            copySize = 0x10;
        } else {
            copySize = format->cbSize + sizeof(WAVEFORMATEX);
        }
        memcpy(extensible, format, copySize);
        memset((char *)extensible + copySize, 0, size - copySize);
        if (format->wFormatTag != 0xfffe) {
            extensible->wValidBitsPerSample = format->wBitsPerSample;
            extensible->dwChannelMask = fn_82A5DE08(format, 1);
            extensible->Format.cbSize = 0x16;
            extensible->Format.wFormatTag = 0xfffe;
            subFormat = lbl_8208E050;
            subFormat.Data1 = format->wFormatTag;
            extensible->SubFormat = subFormat;
        }
    }
    return extensible;
}
