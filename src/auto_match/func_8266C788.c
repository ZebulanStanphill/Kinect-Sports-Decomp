typedef struct FontEntry_8266C788 {
    char type[0x80];
    int name;                       /* 0x80 */
    int file;                       /* 0x84 */
} FontEntry_8266C788;

typedef struct Self_8266C788 {
    char pad0[0x1c];
    void *fontMap;                  /* 0x1c */
    void *fileList;                 /* 0x20 */
} Self_8266C788;

extern void fn_82520158(const char *name, void *path, int flags);
extern FontEntry_8266C788 *fn_8251F718(void *path);
extern unsigned int fn_8251FBA8(void *data);
extern int fn_82526B90(const char *a, const char *b);
extern void fn_82674580(void *map, int *name);
extern void fn_82674108(void *list, int *file);
extern void fn_8251FB08(void *data);

void fn_8266C788(Self_8266C788 *self)
{
    void *fontMap = self->fontMap;
    void *fileList = self->fileList;
    char path[8];
    FontEntry_8266C788 *entries;
    unsigned int count;
    unsigned int i;

    fn_82520158("gfxFontList", path, 0);
    entries = fn_8251F718(path);
    count = fn_8251FBA8(entries) / sizeof(FontEntry_8266C788);
    for (i = 0; i < count; i++) {
        if (fn_82526B90(entries[i].type, "localised_font") == 0) {
            fn_82674580(fontMap, &entries[i].name);
            fn_82674108(fileList, &entries[i].file);
        }
    }
    fn_8251FB08(entries);
}
