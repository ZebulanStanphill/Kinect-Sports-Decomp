struct Unknown_82E46080;
typedef struct UnknownVtbl_82E46080 {
    int (*QueryInterface)(struct Unknown_82E46080 *self, const void *iid, void **out);
    unsigned int (*AddRef)(struct Unknown_82E46080 *self);
    unsigned int (*Release)(struct Unknown_82E46080 *self);
} UnknownVtbl_82E46080;
typedef struct Unknown_82E46080 {
    UnknownVtbl_82E46080 *vt;
} Unknown_82E46080;

extern int fn_82E44F90(char *table, unsigned int index, Unknown_82E46080 **out);
extern int fn_82E32040(Unknown_82E46080 **out);
extern int fn_82E44C10(char *table, unsigned int index, Unknown_82E46080 *item);

static __forceinline Unknown_82E46080 *SelectFound(int ok, Unknown_82E46080 *value)
{
    return ok ? value : 0;
}

int fn_82E46080(char *self, unsigned short index, Unknown_82E46080 **out)
{
    Unknown_82E46080 *created = 0;
    Unknown_82E46080 *found;
    Unknown_82E46080 *item;
    int hr = 0;
    int ok;

    if (out == 0) {
        hr = 0x80004003;
    } else {
        *out = 0;
        ok = fn_82E44F90(self + 0x84, index, &found);
        item = SelectFound(ok, found);
        if (item != 0) {
            *out = item;
            item->vt->AddRef(item);
        } else {
            hr = fn_82E32040(&created);
            if (hr >= 0) {
                if (fn_82E44C10(self + 0x84, index, created) == 0) {
                    hr = 0x8007000e;
                } else {
                    *out = created;
                    if (created != 0)
                        created->vt->AddRef(created);
                    created = 0;
                }
            }
        }
        if (created != 0)
            created->vt->Release(created);
    }
    return hr;
}
