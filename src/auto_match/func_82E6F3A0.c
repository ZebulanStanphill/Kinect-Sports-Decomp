typedef struct Guid_82E6F3A0 {
    unsigned int words[4];
} Guid_82E6F3A0;

extern Guid_82E6F3A0 lbl_8202E618;
extern int memcmp(const void *first, const void *second, unsigned int size);

int fn_82E6F3A0(int *self)
{
    Guid_82E6F3A0 id;
    int result;
    int *next;

    id = *(Guid_82E6F3A0 *)(self + 3);
    if (memcmp(&lbl_8202E618, &id, 16) == 0) {
        result =
            (*(int (**)(void *, unsigned __int64))(*self + 0x2c))(self, *(unsigned __int64 *)(self + 0x12));
        if (result < 0) {
            return result;
        }
    }
    result = (*(int (**)(void *))(*self + 0x14))(self);
    if (result >= 0) {
        next = (*(int *(**)(void *))(*self + 0x20))(self);
        if (next != 0) {
            result = fn_82E6F3A0(next);
            if (result < 0) {
                return result;
            }
        }
    }
    return result;
}
