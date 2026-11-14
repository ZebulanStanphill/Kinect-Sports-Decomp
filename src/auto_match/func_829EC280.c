typedef struct {
    const char *name;
    int refs;
    int pad8[2];
    unsigned __int64 size;
    void *data;
    int pad1c;
} Entry_829EC280;

extern Entry_829EC280 lbl_83218A38[10];
extern int fn_82F6F868(const char *a, const char *b);

int fn_829EC280(const char *name, void **data, unsigned __int64 *size, const char **outName)
{
    int hr = 0x80004005;
    unsigned int i;

    *data = 0;
    *size = 0;
    if (name == 0) {
        return hr;
    }
    for (i = 0; i < 10; i++) {
        if (lbl_83218A38[i].name != 0 && fn_82F6F868(name, lbl_83218A38[i].name) == 0) {
            hr = 0;
            *data = lbl_83218A38[i].data;
            *size = lbl_83218A38[i].size;
            *outName = lbl_83218A38[i].name;
            lbl_83218A38[i].refs++;
            break;
        }
    }
    return hr;
}
