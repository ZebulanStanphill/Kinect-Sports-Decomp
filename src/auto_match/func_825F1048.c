typedef struct Settings_825F1048 {
    char pad0[0xf0];
    int quality; /* 0xf0 */
} Settings_825F1048;

typedef struct Device_825F1048 {
    char pad0[0x200];
    int frame; /* 0x200 */
} Device_825F1048;

typedef struct Query_825F1048 {
    char pad0[0x30];
    unsigned int value; /* 0x30 */
    int pending;        /* 0x34 */
    int frame;          /* 0x38 */
    int handle;         /* 0x3c */
    char pad40[0xe0 - 0x40];
} Query_825F1048;

typedef struct Owner_825F1048 {
    char pad0[0xbc];
    Device_825F1048 *device; /* 0xbc */
    char padC0[0xd0 - 0xc0];
    Query_825F1048 queries[4]; /* 0xd0 */
} Owner_825F1048;

extern Settings_825F1048 lbl_8326B370;
extern int fn_82649240(int handle, void *buffer, int size, int flags);

unsigned char fn_825F1048(Owner_825F1048 *self)
{
    unsigned char result = 1;
    int frame = self->device->frame;
    Query_825F1048 *query = &self->queries[frame % 4];
    int previous = frame - 4;

    if (query->pending != 0) {
        int failed = fn_82649240(query->handle, &query->value, 4, 0);
        query->pending = 0;
        if (failed != 0) {
            goto done;
        }
    }
    if (query->frame == previous) {
        unsigned int limits[3] = {1, 2, 4};
        result = query->value < limits[lbl_8326B370.quality] * 3;
    }
done:
    return result;
}
