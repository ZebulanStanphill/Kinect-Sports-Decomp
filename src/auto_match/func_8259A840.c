typedef struct ContentData_8259A840 {
    unsigned char bytes[0x134];
} ContentData_8259A840;

typedef struct Lock_8259A840 {
    int pad;
} Lock_8259A840;

typedef struct Storage_8259A840 {
    char pad0[0x60];
    Lock_8259A840 lock; /* 0x60 */
    char pad64[0xc];
    void *user; /* 0x70 */
    char pad74[0x20];
    unsigned int type;   /* 0x94 */
    unsigned int device; /* 0x98 */
} Storage_8259A840;

extern void *lbl_83265988;
extern int fn_82A1BB18(void);
extern void fn_8259C5D8(Lock_8259A840 *lock, int mode, int time);
extern void fn_8259C738(Lock_8259A840 *lock);
extern int fn_823AB478(void *user);
extern unsigned int fn_82A264D0(int userIndex, unsigned int device, unsigned int type, unsigned int flags,
                                unsigned int count, unsigned int *bufferSize, void **enumerator);
extern int fn_82A1E988(void *enumerator, void *buffer, unsigned int size, unsigned int *count,
                       void *overlapped);
extern int fn_82A1E658(void *handle);
extern void *fn_82522D98(unsigned int size);
extern void fn_82522ED8(void *memory);
extern unsigned char fn_8259A958(Storage_8259A840 *self, ContentData_8259A840 *content);

/* Enumerates the saved content and refreshes each item; returns 0x3e5 when any item changed. */
int fn_8259A840(Storage_8259A840 *self)
{
    unsigned int bufferSize;
    unsigned int count;
    void *enumerator;
    ContentData_8259A840 *contents;
    unsigned char changed;
    unsigned int i;
    int userIndex;
    void *user;

    fn_8259C5D8(&self->lock, 1, fn_82A1BB18() + 1);
    changed = 0;
    count = 0;
    user = self->user;
    if (user == 0) {
        user = lbl_83265988;
    }
    userIndex = fn_823AB478(user);
    if (fn_82A264D0(userIndex, self->device, self->type, 0, 999, &bufferSize, &enumerator) == 0 &&
        enumerator != 0) {
        contents = fn_82522D98(bufferSize);
        fn_82A1E988(enumerator, contents, bufferSize, &count, 0);
        fn_82A1E658(enumerator);
        for (i = 0; i < count; i++) {
            changed |= fn_8259A958(self, &contents[i]);
        }
        fn_82522ED8(contents);
    }
    fn_82A1BB18();
    fn_8259C738(&self->lock);
    return changed ? 0x3e5 : 0;
}
