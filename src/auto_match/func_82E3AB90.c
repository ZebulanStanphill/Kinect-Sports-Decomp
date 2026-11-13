extern char lbl_82154B18[];

typedef struct Unknown_82E3AB90 Unknown_82E3AB90;
typedef struct UnknownVt_82E3AB90 {
    int (*QueryInterface)(Unknown_82E3AB90 *, void *, void **);
    unsigned int (*AddRef)(Unknown_82E3AB90 *);
    unsigned int (*Release)(Unknown_82E3AB90 *);
    int (*GetCount)(Unknown_82E3AB90 *, void *, unsigned int *);
    int (*GetAt)(Unknown_82E3AB90 *, void *, unsigned int, Unknown_82E3AB90 **);
} UnknownVt_82E3AB90;
struct Unknown_82E3AB90 { UnknownVt_82E3AB90 *vt; };

extern int fn_82E62670(Unknown_82E3AB90 *obj, unsigned int *out);

int fn_82E3AB90(void *self, Unknown_82E3AB90 *src, int *out)
{
    Unknown_82E3AB90 *obj;
    unsigned int count;
    unsigned int value;
    unsigned int i;
    int found;
    int hr;
    if (src == 0 || out == 0)
        return 0x80004003;
    *out = 1;
    obj = 0;
    count = 0;
    hr = src->vt->GetCount(src, lbl_82154B18, &count);
    if (hr >= 0) {
        found = 0;
        i = 0;
        do {
            if (i >= count)
                break;
            hr = src->vt->GetAt(src, lbl_82154B18, i, &obj);
            if (hr < 0)
                goto done;
            value = 0;
            hr = fn_82E62670(obj, &value);
            if (hr < 0)
                goto done;
            if (value == 0x80000000)
                found = 1;
            if (obj != 0) {
                obj->vt->Release(obj);
                obj = 0;
            }
            i++;
        } while (found == 0);
        *out = found == 0;
    }
done:
    if (obj != 0)
        obj->vt->Release(obj);
    return hr;
}
