extern unsigned int XamContentOpenFile(unsigned int userIndex, const char *rootName, const char *path,
                                       unsigned int flags, unsigned int a, unsigned int b, void *overlapped);
extern unsigned int XamContentClose(const char *rootName, void *overlapped);
extern int fn_829CF1C0(void *context, void *out, const char *identityRoot, const char *exemplarRoot,
                       int flags);

int fn_829CF908(void *context, void *out)
{
    unsigned int exemplarResult;
    unsigned int identityResult = 2;
    int hr;

    exemplarResult = XamContentOpenFile(0xff, "stexemplar", "update:\\Database.xmplr", 0x43, 0, 0, 0);
    if (exemplarResult != 0) {
        exemplarResult = XamContentOpenFile(0xff, "stexemplar", "game:\\Database.xmplr", 0x43, 0, 0, 0);
        if (exemplarResult != 0) {
            hr = 0x8301000d;
            goto done;
        }
    }
    identityResult = XamContentOpenFile(0xff, "nuiidentity", "update:\\NuiIdentity.bin.be", 0x43, 0, 0, 0);
    if (identityResult != 0) {
        identityResult = XamContentOpenFile(0xff, "nuiidentity", "game:\\NuiIdentity.bin.be", 0x43, 0, 0, 0);
        if (identityResult != 0) {
            hr = 0x8301000d;
            goto done;
        }
    }
    hr = fn_829CF1C0(context, out, "nuiidentity:\\", "stexemplar:\\", 0);
done:
    if (exemplarResult == 0) {
        XamContentClose("stexemplar", 0);
    }
    if (identityResult == 0) {
        XamContentClose("nuiidentity", 0);
    }
    return hr;
}
