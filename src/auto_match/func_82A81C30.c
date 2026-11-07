typedef struct XOverlapped_82A81C30 {
    unsigned int InternalLow;
    unsigned int InternalHigh;
    unsigned int InternalContext;
    void *hEvent;
    void *pCompletionRoutine;
    unsigned int dwCompletionContext;
    int dwExtendedError;
} XOverlapped_82A81C30;

extern unsigned char lbl_8322344C;

int XamAvatarGetMetadataSignedOutProfile(unsigned int param_1, unsigned int param_2,
                                         XOverlapped_82A81C30 *param_3);
void fn_82A2A370(int hr);

unsigned int fn_82A81C30(unsigned int param_1, unsigned int param_2,
                         XOverlapped_82A81C30 *param_3)
{
    int hr;

    if (lbl_8322344C == 0) {
        hr = (int)0x8000FFFF;
    }
    else if (param_2 == 0) {
        hr = (int)0x80070057;
    }
    else {
        hr = XamAvatarGetMetadataSignedOutProfile(param_1, param_2, param_3);
        if (hr >= 0) {
            return param_3 ? 0x3e5 : 0;
        }
    }
    if (param_3 != 0) {
        param_3->dwExtendedError = hr;
    }
    else {
        fn_82A2A370(hr);
    }
    return 0x65b;
}
