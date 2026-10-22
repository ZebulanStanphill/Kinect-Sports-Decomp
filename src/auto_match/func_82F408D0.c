typedef struct Item { int pad[5]; unsigned int flags; } Item;
extern int fn_82F49100(int a, int b, Item **out);

int fn_82F408D0(int self, int id, unsigned short write)
{
    Item *item = 0;
    int hr;
    hr = fn_82F49100(id, 0, &item);
    if (hr >= 0) {
        if (hr == 0) {
            unsigned int f = item->flags;
            if (!(f & 0x80) && (write == 0 || !(f & 0x2000))) {
                if (!(f & 0x200)) hr = 1;
                return hr;
            }
        }
        hr = 0;
    }
    return hr;
}
