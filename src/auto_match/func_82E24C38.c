/* QueryInterface for an object with one interface: the GUID lbl_82153188. */
typedef struct Guid_82E24C38 {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82E24C38;

extern const Guid_82E24C38 lbl_82153188;

int memcmp(const void *a, const void *b, unsigned int n);

int fn_82E24C38(void *self, const Guid_82E24C38 *iid, void **out)
{
    if (memcmp(iid, &lbl_82153188, sizeof(Guid_82E24C38)) == 0) {
        *out = self;
        return 0;
    }
    *out = 0;
    return 0x80004002;
}
