typedef struct Header_82A86500 {
    char padding[0x30];
    unsigned int flags; /* 0x30 */
    char tail[0xc];
} Header_82A86500;

typedef struct Layout_82A86500 {
    char padding[0x14];
    unsigned int height; /* 0x14 */
    char padding18[0xc];
    unsigned int width; /* 0x24 */
    char tail[0x18];
} Layout_82A86500;

extern void fn_82A93C18(int first, int second, int a, int b, unsigned int flags, int c, int d, int e, int f,
                        Header_82A86500 *header, unsigned int *size, int *status);
extern void fn_82A94798(Header_82A86500 *header, const void *data, Layout_82A86500 *layout);
extern void fn_82A98CC0(int first, int second, const void *data, unsigned int flags, unsigned int convert,
                        void *output, int arg7, int arg8, int arg9, int arg10);

int fn_82A86500(unsigned int flags, int first, int second, const void *data, int mode, unsigned int capacity,
                int extra, void *output)
{
    unsigned int size;
    int status;
    Header_82A86500 header;
    Layout_82A86500 layout;
    unsigned int convert;
    flags = flags | 0x100;
    fn_82A93C18(first, second, 0, 0, flags, 0, 0, 0, 0, &header, &size, &status);
    convert = (~header.flags >> 11) & 1;
    if (data != 0) {
        fn_82A94798(&header, data, &layout);
        size = layout.height * layout.width;
    }
    if (size > capacity) {
        return 0;
    }
    fn_82A98CC0(first, second, data, flags & 0x3f, convert, output, 0, extra, mode, 0);
    return 1;
}
