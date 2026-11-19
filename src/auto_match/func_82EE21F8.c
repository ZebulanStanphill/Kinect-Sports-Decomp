void *memset(void *, int, unsigned int);
int memcmp(const void *, const void *, unsigned int);

typedef struct PropVar_82EE21F8 {
    unsigned short vt;
    unsigned short r1;
    unsigned short r2;
    unsigned short r3;
    __int64 val;
} PropVar_82EE21F8;

typedef struct PropKey_82EE21F8 {
    unsigned char fmtid[16]; /* 0x0 */
    unsigned int pid;        /* 0x10 */
} PropKey_82EE21F8;

typedef struct Store_82EE21F8 Store_82EE21F8;

typedef struct StoreVt_82EE21F8 {
    void *QueryInterface;
    void *AddRef;
    void *Release;
    int (*GetCount)(Store_82EE21F8 *, unsigned int *);
    int (*GetAt)(Store_82EE21F8 *, unsigned int, PropKey_82EE21F8 *);
    int (*GetValue)(Store_82EE21F8 *, PropKey_82EE21F8 *, PropVar_82EE21F8 *);
    int (*SetValue)(Store_82EE21F8 *, PropKey_82EE21F8 *, PropVar_82EE21F8 *);
} StoreVt_82EE21F8;

struct Store_82EE21F8 {
    StoreVt_82EE21F8 *vt;
};

extern unsigned char lbl_8202E618[16];
extern void fn_82E50330(PropVar_82EE21F8 *pv);

int fn_82EE21F8(const unsigned char *fmtid, Store_82EE21F8 *target, Store_82EE21F8 *source)
{
    unsigned int count;
    unsigned int i;
    int hr;
    PropKey_82EE21F8 key;
    PropVar_82EE21F8 pv;

    if (source == 0 || target == 0) {
        hr = 0x80070057;
    } else {
        count = 0;
        memset(&pv, 0, sizeof(pv));
        hr = source->vt->GetCount(source, &count);
        if (hr >= 0) {
            for (i = 0; i < count; i++) {
                hr = source->vt->GetAt(source, i, &key);
                if (hr < 0) {
                    break;
                }
                if (memcmp(lbl_8202E618, fmtid, 16) == 0 || memcmp(key.fmtid, fmtid, 16) == 0) {
                    hr = source->vt->GetValue(source, &key, &pv);
                    if (hr < 0) {
                        break;
                    }
                    hr = target->vt->SetValue(target, &key, &pv);
                    if (0xC00D3E8E == hr) {
                        hr = 0;
                    }
                    if (hr < 0) {
                        break;
                    }
                    fn_82E50330(&pv);
                }
            }
        }
    }
    fn_82E50330(&pv);
    return hr;
}
