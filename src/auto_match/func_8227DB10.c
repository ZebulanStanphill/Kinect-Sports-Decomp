typedef struct Request_8227DB10 {
    float x; /* 0x00 */
    float y; /* 0x04 */
    float z; /* 0x08 */
    float pad0C;
    float width;  /* 0x10 */
    float height; /* 0x14 */
    float scale;  /* 0x18 */
    int color;    /* 0x1c */
    int useAlt;   /* 0x20 */
    int flags;    /* 0x24 */
    char pad28[0x14];
    int resource; /* 0x3c */
} Request_8227DB10;

extern int fn_8266F580(int resource);
extern void fn_824EA798(float x, float y, float z, float width, float height, int texture, float scale,
                        int enabled, int flags, int color);
extern void fn_824EAEA0(float x, float y, float z, float width, float height, int texture, float scale,
                        int enabled, int flags, int color);

void fn_8227DB10(Request_8227DB10 *request)
{
    int resource = request->resource;

    if (request->useAlt != 0) {
        float scale = request->scale;

        fn_824EAEA0(request->x, request->y, request->z, request->width, request->height,
                    fn_8266F580(resource), scale, 1, request->flags, request->color);
    } else {
        fn_824EA798(request->x, request->y, request->z, request->width, request->height,
                    fn_8266F580(resource), request->scale, 1, request->flags, request->color);
    }
}
