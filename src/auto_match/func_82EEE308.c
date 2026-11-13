typedef struct Item_82EEE308 {
    char pad0[0x14];
    unsigned short id;
} Item_82EEE308;

extern int fn_82EEDD60(void *self, unsigned short id, int b, Item_82EEE308 **out, int c, int d, int e);

int fn_82EEE308(char *self, unsigned short id, int b, unsigned short *out)
{
    int hr = 0;
    Item_82EEE308 *item = 0;
    if (out == 0) {
        hr = 0x80070057;
    } else if (id != 0xffff) {
        *out = id;
    } else {
        hr = fn_82EEDD60(self - 0x7c, id, b, &item, 0, 0, 1);
        if (hr >= 0) {
            *out = item->id;
        }
    }
    return hr;
}
