typedef struct Guid_82E7E1D8 { unsigned char data[16]; } Guid_82E7E1D8;

typedef struct Unknown_82E7E1D8 Unknown_82E7E1D8;
typedef struct UnknownVtbl_82E7E1D8 {
    int (*QueryInterface)(Unknown_82E7E1D8 *self, const Guid_82E7E1D8 *iid, void **out);
    unsigned int (*AddRef)(Unknown_82E7E1D8 *self);
    unsigned int (*Release)(Unknown_82E7E1D8 *self);
} UnknownVtbl_82E7E1D8;
struct Unknown_82E7E1D8 {
    UnknownVtbl_82E7E1D8 *vt;
};

typedef struct Entry_82E7E1D8 Entry_82E7E1D8;
typedef struct EntryVtbl_82E7E1D8 {
    int (*QueryInterface)(Entry_82E7E1D8 *self, const Guid_82E7E1D8 *iid, void **out);
    unsigned int (*AddRef)(Entry_82E7E1D8 *self);
    unsigned int (*Release)(Entry_82E7E1D8 *self);
    void *slots[30];
    int (*GetId)(Entry_82E7E1D8 *self, unsigned int *id);       /* +0x84 */
} EntryVtbl_82E7E1D8;
struct Entry_82E7E1D8 {
    EntryVtbl_82E7E1D8 *vt;
};

typedef struct Source_82E7E1D8 Source_82E7E1D8;
typedef struct SourceVtbl_82E7E1D8 {
    void *slots[33];
    int (*GetCount)(Source_82E7E1D8 *self, unsigned int *count);  /* +0x84 */
    int (*GetEntry)(Source_82E7E1D8 *self, unsigned int index, unsigned int *key, Entry_82E7E1D8 **entry); /* +0x88 */
} SourceVtbl_82E7E1D8;
struct Source_82E7E1D8 {
    SourceVtbl_82E7E1D8 *vt;
};

typedef struct Obj_82E7E1D8 {
    void *factory;
    void *iface;
} Obj_82E7E1D8;

extern Guid_82E7E1D8 lbl_820ED018;
extern Guid_82E7E1D8 lbl_82154C58;
extern Guid_82E7E1D8 lbl_82154C18;

extern int fn_82E59440(void *factory, const Guid_82E7E1D8 *clsid, const Guid_82E7E1D8 *iid, Unknown_82E7E1D8 **out);
extern int fn_82E7C300(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7DA30(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7DDC8(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7C6C0(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7D068(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7D348(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7DBC0(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7C9B8(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7D568(Obj_82E7E1D8 *self, Source_82E7E1D8 *src, int arg);
extern int fn_82E7CB88(Obj_82E7E1D8 *self, Source_82E7E1D8 *src);
extern int fn_82E7CDE8(Obj_82E7E1D8 *self, unsigned short id, Entry_82E7E1D8 *entry);
extern int fn_82E7D7A0(Obj_82E7E1D8 *self, unsigned short id, Entry_82E7E1D8 *entry);
extern int fn_82E7D948(Obj_82E7E1D8 *self, unsigned short id, Source_82E7E1D8 *src, Entry_82E7E1D8 *entry, int arg);

int fn_82E7E1D8(Obj_82E7E1D8 *self, Source_82E7E1D8 *src, int arg)
{
    int hr;
    unsigned int count = 0;
    unsigned int key = 0;
    Unknown_82E7E1D8 *unk = 0;
    Entry_82E7E1D8 *entry = 0;
    unsigned int id = 0;
    unsigned int i;

    if (src == 0) {
        hr = 0x80004003;
        goto cleanup;
    }
    if (self->factory == 0) {
        goto fail;
    }
    if (self->iface == 0) {
        hr = fn_82E59440(self->factory, &lbl_820ED018, &lbl_82154C58, &unk);
        if (hr < 0) goto check;
        hr = unk->vt->QueryInterface(unk, &lbl_82154C18, &self->iface);
        if (hr < 0) goto check;
    }
    hr = fn_82E7C300(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7DA30(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7DDC8(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7C6C0(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7D068(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7D348(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7DBC0(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7C9B8(self, src);
    if (hr < 0) goto check;
    hr = fn_82E7D568(self, src, arg);
    if (hr < 0) goto check;
    hr = fn_82E7CB88(self, src);
    if (hr < 0) goto check;
    hr = src->vt->GetCount(src, &count);
    if (hr < 0) goto check;
    for (i = 0; i < count; i++) {
        unsigned short entryId;
        if (entry != 0) {
            entry->vt->Release(entry);
            entry = 0;
        }
        hr = src->vt->GetEntry(src, i, &key, &entry);
        if (hr < 0) goto check;
        hr = entry->vt->GetId(entry, &id);
        if (hr < 0) goto check;
        entryId = (unsigned short)id;
        hr = fn_82E7CDE8(self, entryId, entry);
        if (hr < 0) goto check;
        hr = fn_82E7D7A0(self, entryId, entry);
        if (hr < 0) goto check;
        hr = fn_82E7D948(self, entryId, src, entry, arg);
        if (hr < 0) goto check;
    }
check:
    if (hr == (int)0xC00D3A9A || hr == (int)0xC00D36B1 || hr == (int)0x8000FFFF || hr == (int)0x80070057) {
fail:
        hr = 0xC00D3E8C;
    }
cleanup:
    if (unk != 0) {
        unk->vt->Release(unk);
        unk = 0;
    }
    if (entry != 0) {
        entry->vt->Release(entry);
    }
    return hr;
}
