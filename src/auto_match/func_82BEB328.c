typedef struct Asset_82BEB328 Asset_82BEB328;

typedef struct AssetVt_82BEB328 {
    void (*destroy)(Asset_82BEB328 *self, unsigned int flags);
} AssetVt_82BEB328;

struct Asset_82BEB328 {
    AssetVt_82BEB328 *vt;
};

typedef struct Core_82BEB328 {
    char pad0[0x10];
    int state; /* 0x10 */
} Core_82BEB328;

typedef struct Response_82BEB328 {
    char pad0[0x14];
    int type; /* 0x14 */
} Response_82BEB328;

typedef struct Zone_82BEB328 {
    char pad0[0x10];
    int state; /* 0x10 */
    char pad14[0x28];
    void *mao;       /* 0x3C */
    void *order;     /* 0x40 */
    void *assets;    /* 0x44 */
    void *orderInfo; /* 0x48 */
} Zone_82BEB328;

extern int fn_82BF5E80(Response_82BEB328 *response, void **mao, void **order, void **orderInfo,
                       void **assets);
extern int fn_82BE5240(Zone_82BEB328 *self, int code, const char *format, ...);
extern unsigned int fn_82BEACC8(Zone_82BEB328 *zone);
extern void *fn_82BE56B0(unsigned int size);
extern Asset_82BEB328 *fn_82BF0C00(void *mem, void *name, void *url, void *path, void *type, void *data,
                                   void *size, void *extra, unsigned short width, unsigned short height,
                                   float duration, float scale, void *a, void *b, void *c);
extern void *fn_82BEB628(void *mem, Asset_82BEB328 *asset);
extern int fn_82BE52B8(void *list, void *node);
extern int fn_82BEA590(Zone_82BEB328 *self);
extern Core_82BEB328 *fn_82BE1A10(void);
extern void fn_82BEB838(Zone_82BEB328 *self, Response_82BEB328 *response);

void fn_82BEB328(Zone_82BEB328 *self, Response_82BEB328 *response)
{
    void *memory;
    Asset_82BEB328 *asset;
    void *node;

    if (response->type == 0x1033) {
        if (fn_82BF5E80(response, &self->mao, &self->order, &self->orderInfo, &self->assets) == 0) {
            fn_82BE5240(self, 0x12e, "Failed to take MAO List Ownership");
            self->state = 0;
        } else {
            if (self->mao != 0 && self->order != 0 && self->orderInfo != 0 && self->assets != 0) {
                if (fn_82BEACC8(self) == 0) {
                    memory = fn_82BE56B0(0x70);
                    if (memory != 0) {
                        asset = fn_82BF0C00(memory, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0f, 0.0f, 0, 0, 0);
                    } else {
                        asset = 0;
                    }
                    if (asset == 0) {
                        fn_82BE5240(self, 0x65, "CMassiveAsset in HandleResponse");
                        self->state = 0;
                    } else {
                        memory = fn_82BE56B0(0xc);
                        if (memory != 0) {
                            node = fn_82BEB628(memory, asset);
                        } else {
                            node = 0;
                        }
                        if (node == 0) {
                            fn_82BE5240(self, 0x65, "CMassiveListNode in HandleResponse");
                            self->state = 0;
                            asset->vt->destroy(asset, 1);
                        } else {
                            fn_82BE52B8(self->assets, node);
                            fn_82BEA590(self);
                            self->state = 2;
                            if (fn_82BE1A10()->state == 0xb || fn_82BE1A10()->state == 0xd) {
                                fn_82BE1A10()->state = 0xc;
                            }
                        }
                    }
                }
                goto done;
            }
            fn_82BE5240(self, 0x12e, "One or more of the lists is NULL");
            self->state = 0;
        }
    } else if (response->type == 0x1065 && self->state == 0xf) {
        self->state = 4;
    }
done:
    fn_82BEB838(self, response);
}
