typedef struct XOverlapped_82A821B0 {
    unsigned int InternalLow;
    unsigned int InternalHigh;
    unsigned int InternalContext;
    void *hEvent;
    void *pCompletionRoutine;
    unsigned int dwCompletionContext;
    int dwExtendedError;
} XOverlapped_82A821B0;

extern unsigned char lbl_8322344C;

int fn_82A82160(unsigned int flags, unsigned int *resultSize, unsigned int *assetSize);
int XamAvatarGetAssets(void *request, unsigned int flags, unsigned int options, void *result,
                       void *assets, XOverlapped_82A821B0 *overlapped);
void fn_82A2A370(int hr);

unsigned int fn_82A821B0(void *request, unsigned int flags, unsigned int options,
                         unsigned int resultBytes, void *result, unsigned int assetBytes,
                         void *assets, XOverlapped_82A821B0 *overlapped)
{
    int hr;
    unsigned int resultSize;
    unsigned int assetSize;

    if (lbl_8322344C == 0) {
        hr = (int)0x8000FFFF;
    }
    else {
        fn_82A82160(flags, &resultSize, &assetSize);
        if (request != 0 && (unsigned short)flags && !((unsigned short)flags & ~0x1fff)
            && resultBytes >= resultSize && result != 0
            && assetBytes >= assetSize && assets != 0) {
            hr = XamAvatarGetAssets(request, flags, options & 0xfe00ffff, result, assets, overlapped);
        }
        else {
            hr = (int)0x80070057;
        }
        if (hr >= 0) {
            return overlapped ? 0x3e5 : 0;
        }
    }
    if (overlapped != 0) {
        overlapped->dwExtendedError = hr;
    }
    else {
        fn_82A2A370(hr);
    }
    return 0x65b;
}
