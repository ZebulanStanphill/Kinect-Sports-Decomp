typedef struct Stream_826E03B8 Stream_826E03B8;
typedef struct Resources_826E03B8 Resources_826E03B8;

typedef struct Loader_826E03B8 {
    char pad0[0x14];
    char log[0xc];                   /* 0x14 */
    Resources_826E03B8 *resources;   /* 0x20 */
    int unk24;
    char stream[0x2ec];              /* 0x28 */
    Stream_826E03B8 *altStream;      /* 0x314 */
} Loader_826E03B8;

extern unsigned short fn_826A6A38(Loader_826E03B8 *loader);
extern void *fn_826D8EA8(Resources_826E03B8 *resources, unsigned int *id);
extern void fn_8276E270(void *font, Stream_826E03B8 *stream, int tag);
extern void fn_826DFA28(void *log, const char *format, ...);

void fn_826E03B8(Loader_826E03B8 *self, int *tag)
{
    unsigned int id = fn_826A6A38(self);
    unsigned int key = id;
    void *font = fn_826D8EA8(self->resources, &key);
    Stream_826E03B8 *stream;

    if (font != 0) {
        stream = self->altStream;
        if (stream == 0)
            stream = (Stream_826E03B8 *)self->stream;
        fn_8276E270(font, stream, *tag);
    } else {
        fn_826DFA28(self->log, "GFx_DefineFontInfoLoader: can't find GFxFontResource w/ id %d\n", id);
    }
}
