typedef struct Entry_82E4FE80 {
    int data[4];
} Entry_82E4FE80;

extern int fn_82E4FF98(Entry_82E4FE80 *entry, void *context);

int fn_82E4FE80(unsigned int count, Entry_82E4FE80 *entries, void *context)
{
    int hr = 0;
    unsigned int i;

    if (entries != 0) {
        for (i = 0; i < count; i++) {
            if (fn_82E4FF98(&entries[i], context) == (int)0x80030057) {
                hr = (int)0x80030057;
            }
        }
    }
    return hr;
}
