/* Format tag of a WAVEFORMATEXTENSIBLE sub-format GUID: Data1's low word when the remaining 12 bytes match the
   base sub-format GUID lbl_8208E050, else 0. */
typedef struct Guid_82E26058 {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82E26058;

extern const Guid_82E26058 lbl_8208E050;

int memcmp(const void *a, const void *b, unsigned int n);

static __forceinline int IsWaveFormatGuid(const Guid_82E26058 *guid)
{
    return memcmp((const unsigned long *)guid + 1, (const unsigned long *)&lbl_8208E050 + 1, sizeof(Guid_82E26058) - sizeof(unsigned long)) == 0;
}

unsigned short fn_82E26058(const Guid_82E26058 *guid)
{
    if (!IsWaveFormatGuid(guid))
        return 0;
    return (unsigned short)guid->Data1;
}
