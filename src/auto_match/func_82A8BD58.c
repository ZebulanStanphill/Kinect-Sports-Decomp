typedef struct Item_82A8BD58 {
    int pad0[2];
    int data;               /* 0x08: what the caller gets */
} Item_82A8BD58;

extern unsigned char lbl_8322344C;  /* initialised flag */
extern int fn_82A8BC78(void *self, int key, void *arg, Item_82A8BD58 **out);

int fn_82A8BD58(void *self, int key, void *arg, int **out)
{
    Item_82A8BD58 *item;
    int hr;

    if (out == 0)
        return 0x80070057;
    if (self == 0 || arg == 0) {
        *out = 0;
        return 0x80070057;
    }
    if (lbl_8322344C == 0) {
        hr = 0x8000ffff;
    } else {
        item = 0;
        hr = fn_82A8BC78(self, key, arg, &item);
        if (hr >= 0) {
            *out = item ? &item->data : 0;
            return hr;
        }
    }
    *out = 0;
    return hr;
}
