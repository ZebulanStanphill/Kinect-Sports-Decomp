typedef struct Buffer_82764220 {
    void *data;
    unsigned int size;
    int pad8;
} Buffer_82764220;

typedef struct Obj_82764220 {
    char pad[0x50];
    Buffer_82764220 first;
    Buffer_82764220 second;
} Obj_82764220;

void fn_82764220(Obj_82764220 *self, void **firstData, unsigned int *firstSize,
                 void **secondData, unsigned int *secondSize)
{
    *firstSize = self->first.size;
    *secondSize = self->second.size;
    *firstData = self->first.size > 0 ? self->first.data : 0;
    *secondData = self->second.size > 0 ? self->second.data : 0;
}
