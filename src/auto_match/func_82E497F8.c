typedef struct { unsigned int v[4]; } Guid_82E497F8;

typedef struct Unknown_82E497F8 Unknown_82E497F8;
typedef struct UnknownVtbl_82E497F8 {
    int (*QueryInterface)(Unknown_82E497F8 *self, const Guid_82E497F8 *riid, void **ppv);
} UnknownVtbl_82E497F8;
struct Unknown_82E497F8 {
    UnknownVtbl_82E497F8 *vt;
};

typedef struct Service_82E497F8 {
    char pad[0xb8];
    Unknown_82E497F8 *inner;   /* 0xb8 */
} Service_82E497F8;

extern int memcmp(const void *, const void *, unsigned int);
extern Guid_82E497F8 lbl_8214C000;

int fn_82E497F8(Service_82E497F8 *self, const Guid_82E497F8 *service, const Guid_82E497F8 *riid, void **ppv)
{
    if (ppv == 0)
        return 0x80070057;
    *ppv = 0;
    if (memcmp(&lbl_8214C000, service, sizeof(Guid_82E497F8)) == 0)
        return self->inner->vt->QueryInterface(self->inner, riid, ppv);
    return 0xc00d36ba;
}
