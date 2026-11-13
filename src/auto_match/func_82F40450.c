typedef struct Obj_82F40450 {
    char pad0[0xc];
    void *ready;
    char pad10[0x10];
    unsigned __int64 size;
} Obj_82F40450;

int fn_82F40450(Obj_82F40450 *self, unsigned int length)
{
    int result = 0;
    unsigned int total;
    if (self->ready == 0) {
        result = 0xc00d36b6;
    } else {
        total = length + 0x2e;
        if (total > 0xffffffff) {
            result = 0x80070057;
        } else {
            self->size = total;
        }
    }
    return result;
}
