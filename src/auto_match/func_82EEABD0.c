/* QueryInterface for an object with one interface: the GUID lbl_8318A700. */
typedef struct {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82EEABD0;

extern const Guid_82EEABD0 lbl_8318A700;

int memcmp(const void *a, const void *b, unsigned int n);

int fn_82EEABD0(void *self, const Guid_82EEABD0 *iid, void **out)
{
    int hr = 0;
    if (out != 0) {
        if (memcmp(iid, &lbl_8318A700, sizeof(Guid_82EEABD0)) == 0) {
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
