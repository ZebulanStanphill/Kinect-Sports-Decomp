typedef struct Guid_82A49AC8 {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82A49AC8;

typedef struct WaveFormat_82A49AC8 {
    unsigned short wFormatTag;
    unsigned short nChannels;
    unsigned long nSamplesPerSec;
    unsigned long nAvgBytesPerSec;
    unsigned short nBlockAlign;
    unsigned short wBitsPerSample;
    unsigned short cbSize;
    unsigned short wValidBitsPerSample;
    unsigned long dwChannelMask;
    Guid_82A49AC8 SubFormat;        /* 0x18 */
} WaveFormat_82A49AC8;

extern const Guid_82A49AC8 lbl_8208E050;

int memcmp(const void *a, const void *b, unsigned int n);

static __forceinline int IsWaveFormatGuid(const Guid_82A49AC8 *guid)
{
    return memcmp((const unsigned long *)guid + 1, (const unsigned long *)&lbl_8208E050 + 1, sizeof(Guid_82A49AC8) - sizeof(unsigned long)) == 0;
}

unsigned short fn_82A49AC8(const WaveFormat_82A49AC8 *format)
{
    const Guid_82A49AC8 *guid;
    if (format->wFormatTag != 0xfffe)
        return format->wFormatTag;
    guid = &format->SubFormat;
    if (IsWaveFormatGuid(guid))
        return (unsigned short)guid->Data1;
    return 0;
}
