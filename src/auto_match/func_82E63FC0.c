void *memset(void *, int, unsigned int);

typedef struct {
    unsigned short vt;
    unsigned short r1;
    unsigned short r2;
    unsigned short r3;
    __int64 val;
} PropVar_82E63FC0;
typedef struct {
    unsigned char fmtid[16];
    unsigned int pid;
} PropKey_82E63FC0;
typedef struct Store_82E63FC0 Store_82E63FC0;
typedef struct {
    void *QueryInterface;
    void *AddRef;
    void *Release;
    int (*GetCount)(Store_82E63FC0 *, unsigned int *);
    int (*GetAt)(Store_82E63FC0 *, unsigned int, PropKey_82E63FC0 *);
    int (*GetValue)(Store_82E63FC0 *, PropKey_82E63FC0 *, PropVar_82E63FC0 *);
} StoreVt_82E63FC0;
struct Store_82E63FC0 { StoreVt_82E63FC0 *vt; };
typedef struct Stream_82E63FC0 Stream_82E63FC0;
typedef struct {
    void *QueryInterface;
    void *AddRef;
    void *Release;
    void *Read;
    int (*Write)(Stream_82E63FC0 *, const void *, unsigned int, unsigned int *);
} StreamVt_82E63FC0;
struct Stream_82E63FC0 { StreamVt_82E63FC0 *vt; };
extern void fn_82E50D88(void *lock);
extern void fn_82E50FA0(void *lock);
extern int fn_82E49100(Stream_82E63FC0 *stream, PropVar_82E63FC0 *pv);
extern void fn_82E50330(PropVar_82E63FC0 *pv);

int fn_82E63FC0(char *self, Stream_82E63FC0 *stream)
{
    Store_82E63FC0 *store;
    unsigned int count;
    int written;
    unsigned int i;
    int hr;
    PropKey_82E63FC0 key;
    PropVar_82E63FC0 pv;

    fn_82E50D88(self + 8);
    written = 0;
    if (stream == 0) {
        hr = 0x80004003;
    } else {
        store = (Store_82E63FC0 *)(self - 4);
        memset(&pv, 0, sizeof(pv));
        hr = store->vt->GetCount(store, &count);
        if (hr >= 0) {
            for (i = 0; i < count; i++) {
                hr = store->vt->GetAt(store, i, &key);
                if (hr < 0) {
                    goto done;
                }
                if (store->vt->GetValue(store, &key, &pv) >= 0) {
                    written++;
                }
            }
            hr = stream->vt->Write(stream, &written, 4, 0);
            if (hr >= 0) {
                for (i = 0; i < count; i++) {
                    hr = store->vt->GetAt(store, i, &key);
                    if (hr < 0) {
                        break;
                    }
                    if (store->vt->GetValue(store, &key, &pv) >= 0) {
                        hr = stream->vt->Write(stream, key.fmtid, 0x10, 0);
                        if (hr < 0) {
                            break;
                        }
                        hr = stream->vt->Write(stream, &key.pid, 4, 0);
                        if (hr < 0) {
                            break;
                        }
                        hr = fn_82E49100(stream, &pv);
                        fn_82E50330(&pv);
                    }
                }
            }
        }
    }
done:
    fn_82E50FA0(self + 8);
    return hr;
}
