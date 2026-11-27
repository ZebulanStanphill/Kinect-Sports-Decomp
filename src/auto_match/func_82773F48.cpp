class Rasterizer_82773F48
{
  public:
    virtual void Slot00();
    virtual unsigned int GetWidth();          /* 0x04 */
    virtual unsigned int GetHeight();         /* 0x08 */
    virtual void *GetTexture(void *renderer); /* 0x0c */
};

struct Font_82773F48 {
    char unknown00[0x10];
    void *glyphs;   /* 0x10 */
    void *provider; /* 0x14 */
};

struct GlyphKey_82773F48 {
    Font_82773F48 *font;  /* 0x0 */
    unsigned short index; /* 0x4 */
    unsigned short size;  /* 0x6 */
    int flags;            /* 0x8 */
};

struct GlyphRect_82773F48 {
    char unknown00[0x20];
    unsigned short texture; /* 0x20 */
};

struct CacheEntry_82773F48 {
    char unknown00[0xc];
    GlyphRect_82773F48 *rect; /* 0xc */
};

struct GlyphInfo_82773F48 {
    GlyphKey_82773F48 key;      /* 0x00 */
    CacheEntry_82773F48 *entry; /* 0x0c */
    unsigned short x;           /* 0x10 */
    unsigned short scale;       /* 0x12 */
    void *texture;              /* 0x14 */
    unsigned short width;       /* 0x18 */
    unsigned short height;      /* 0x1a */
};

struct TextureSlot_82773F48 {
    void *texture;
    char unknown04[0x10];
};

struct GlyphCache_82773F48 {
    char unknown00[0x19];
    unsigned char warn; /* 0x19 */
    char unknown1A[0x26];
    char queue[0x38];                 /* 0x40 */
    TextureSlot_82773F48 textures[1]; /* 0x78 */
};

struct Renderer_82773F48 {
    char unknown00[0xc];
    void *device; /* 0xc */
};

struct Params_82773F48 {
    Renderer_82773F48 *renderer; /* 0x00 */
    char unknown04[0x10];
    int log; /* 0x14 */
};

extern "C" {
void fn_826D6630(void *log, const char *format, ...);
Rasterizer_82773F48 *fn_8276A0B8(void *table, void *key);
void *fn_8276A0F0(void *glyphs, unsigned int index);
CacheEntry_82773F48 *fn_827BA058(void *queue, void *device, GlyphKey_82773F48 *key, void *shape,
                                 void *outline, int x, int log);
int fn_82773F48(GlyphCache_82773F48 *self, GlyphInfo_82773F48 *info, GlyphKey_82773F48 *key, void *shape,
                void *outline, Params_82773F48 *params, unsigned char useRasterizer);
}

int fn_82773F48(GlyphCache_82773F48 *self, GlyphInfo_82773F48 *info, GlyphKey_82773F48 *key, void *shape,
                void *outline, Params_82773F48 *params, unsigned char useRasterizer)
{
    info->key.font = key->font;
    *(int *)&info->key.index = *(int *)&key->index;
    info->key.flags = key->flags;
    info->entry = 0;
    info->texture = 0;
    info->width = 0;
    info->height = 0;
    void *glyphs;

    if ((useRasterizer || outline == 0) && (glyphs = key->font->glyphs) != 0) {
        info->x = 0;
        info->scale = 0x100;
        void *glyphSet = fn_8276A0F0(glyphs, key->index);
        Rasterizer_82773F48 *rasterizer = fn_8276A0B8(glyphSet, key->font->provider);
        if (rasterizer != 0) {
            info->texture = rasterizer->GetTexture(params->renderer->device);
            info->width = rasterizer->GetWidth();
            info->height = rasterizer->GetHeight();
        }
    } else {
        info->entry =
            fn_827BA058(self->queue, params->renderer->device, key, shape, outline, info->x, params->log);
        if (info->entry != 0) {
            info->texture = self->textures[info->entry->rect->texture & ~0xc000].texture;
            info->entry->rect->texture |= 0x8000;
        } else {
            if (outline != 0 && params->log != 0 && self->warn) {
                fn_826D6630((char *)params->log + 0xc,
                            "Warning: Increase raster glyph cache capacity - TextureConfig.\n");
            }
            self->warn = 0;
            return 0;
        }
    }
    return 1;
}
