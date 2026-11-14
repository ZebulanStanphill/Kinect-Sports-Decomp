typedef struct Buffer_82764270 {
    void *data;
    unsigned int size;
    int pad8;
} Buffer_82764270;

typedef struct Obj_82764270 {
    char pad[0x50];
    Buffer_82764270 first;
    Buffer_82764270 second;
} Obj_82764270;

typedef struct Info_82764270 {
    int pad0;
    void *firstData;            /* 0x04 */
    void *secondData;           /* 0x08 */
    char padC[0x48 - 0xc];
    unsigned int firstSize;     /* 0x48 */
    unsigned int secondSize;    /* 0x4c */
} Info_82764270;

void fn_82764270(Obj_82764270 *self, Info_82764270 *info)
{
    unsigned int size = self->first.size;

    info->firstSize = size;
    info->secondSize = self->second.size;
    info->firstData = info->firstSize > 0 ? self->first.data : 0;
    info->secondData = info->secondSize > 0 ? self->second.data : 0;
}
