typedef struct Section_82AA3AA8 {
    unsigned int offset;
    unsigned int size;
} Section_82AA3AA8;

typedef struct Header_82AA3AA8 {
    char pad0[0x18];
    Section_82AA3AA8 sections[1];
} Header_82AA3AA8;

extern long fn_82AA3400(void *data, void *a2, void *a3, void *a4, void *a5);
extern long fn_82AA3680(void *data, void *a2, void *a3, void *a4, void *a5);

long fn_82AA3AA8(void *context, unsigned int kind, Header_82AA3AA8 *header, unsigned int size,
                 void *a3, void *a4, void *a2, int index)
{
    long hr = 0;
    unsigned int offset;
    void *data;

    if (size < 0x24)
        hr = 0x80070057;
    offset = header->sections[index].offset;
    if (offset != 0) {
        data = (char *)header + offset;
        if (hr >= 0) {
            switch (kind) {
            case 0:
                hr = fn_82AA3400(data, a2, a3, a4, context);
                break;
            case 1:
                hr = fn_82AA3680(data, a2, a3, a4, context);
                break;
            default:
                return 0x80070057;
            }
        }
        return hr;
    }
    return hr;
}
