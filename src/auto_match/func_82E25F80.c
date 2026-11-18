typedef struct Guid_82E25F80 {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82E25F80;

extern const Guid_82E25F80 lbl_8208E050;

int memcmp(const void *a, const void *b, unsigned int n);
extern Guid_82E25F80 fn_82E25E88(const Guid_82E25F80 *guid);

static __forceinline int IsWaveFormatGuid(const Guid_82E25F80 *guid)
{
    return 0 == memcmp((const unsigned long *)guid + 1, (const unsigned long *)&lbl_8208E050 + 1,
                       sizeof(Guid_82E25F80) - sizeof(unsigned long));
}

unsigned long fn_82E25F80(const Guid_82E25F80 *guid)
{
    Guid_82E25F80 mapped;

    if (IsWaveFormatGuid(guid)) {
        return guid->Data1;
    }
    mapped = fn_82E25E88(guid);
    return IsWaveFormatGuid(&mapped) ? mapped.Data1 : 0;
}
