/* QueryInterface for an object with one interface: the GUID lbl_8318A6F0. */
typedef struct {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82EE8320;

extern const Guid_82EE8320 lbl_8318A6F0;

int memcmp(const void *a, const void *b, unsigned int n);

int fn_82EE8320(void *self, const Guid_82EE8320 *iid, void **out)
{
    int hr = 0;
    if (out != 0) {
        if (memcmp(iid, &lbl_8318A6F0, sizeof(Guid_82EE8320)) == 0) {
            *out = self;
        } else {
            hr = 0x80004002;
            *out = 0;
        }
    } else {
        hr = 0x80004003;
    }
    return hr;
}
