typedef struct Stream_826E7110 {
    char pad00[0x40];
    int end;
    char pad44[8];
    int position;
    char pad50[4];
    int buffered;
} Stream_826E7110;

extern void fn_826E6CF8(Stream_826E7110 *);
extern int fn_826E6F60(Stream_826E7110 *, void *, int);

int fn_826E7110(Stream_826E7110 *self, int target)
{
    char buffer[4096];
    int end = self->end;
    if (target < end) {
        if (target >= end - self->buffered) {
            self->position = target;
            return target;
        }
        fn_826E6CF8(self);
    } else if (target > end) {
        self->position = end;
    }
    while (self->position < target) {
        int count = target - self->position;

        if (fn_826E6F60(self, buffer, count < 4096 ? count : 4096) == 0) {
            break;
        }
    }
    return self->position;
}
