typedef struct Params_827A2CF8 {
    int x;
    int y;
    int start;
    int a;
    int b;
    int count;
    unsigned int color;
    unsigned int end;
    int c;
    unsigned char depth;
} Params_827A2CF8;

typedef struct Entry_827A2CF8 {
    unsigned int position; /* 0x0 */
    unsigned int selected; /* 0x4 */
} Entry_827A2CF8;

typedef struct Track_827A2CF8 {
    char pad0[0x8];
    void *document; /* 0x08 */
    char pad0C[0x18 - 0xC];
    unsigned int position; /* 0x18 */
    char pad1C[0x68 - 0x1C];
    unsigned short flags; /* 0x68 */
} Track_827A2CF8;

extern void *fn_8279C588(void *document);
extern Entry_827A2CF8 *fn_827AEE00(void *target, int index);
extern Entry_827A2CF8 *fn_827AFE68(void *target, Params_827A2CF8 *params);
extern void fn_82799C20(void *document, Entry_827A2CF8 *entry);

void fn_827A2CF8(Track_827A2CF8 *track)
{
    if ((track->flags & 1) == 0 && ((unsigned char)(track->flags >> 8) & 1) != 0) {
        void *target = fn_8279C588(track->document);
        Entry_827A2CF8 *entry = fn_827AEE00(target, 0x7FFFFFFE);
        unsigned char selected;

        if (entry == 0) {
            Params_827A2CF8 params;

            params.count = 0x7FFFFFFE;
            params.a = 0;
            params.b = 0;
            params.c = 0;
            params.x = 0;
            params.y = 0;
            params.start = 0;
            params.color = 0xFF000000;
            params.depth = 0x18;
            params.end = 0xFFFFFFFF;
            entry = fn_827AFE68(target, &params);
            selected = 0;
        } else {
            selected = entry->selected != 0;
        }
        if (entry->position != track->position || selected != ((unsigned char)(track->flags >> 3) & 1)) {
            entry->position = track->position;
            entry->selected = (unsigned char)(track->flags >> 3) & 1;
            fn_82799C20(track->document, entry);
        }
    }
}
