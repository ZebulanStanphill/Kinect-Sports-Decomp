typedef struct Source_8284FD98 {
    char pad0[0x1c];
    unsigned int kind;
} Source_8284FD98;

typedef struct Obj_8284FD98 {
    char pad0[0x90];
    Source_8284FD98 *source;
} Obj_8284FD98;

extern char *fn_8285C228(Source_8284FD98 *source);
extern char *fn_8285FFE0(Source_8284FD98 *source);

void *fn_8284FD98(Obj_8284FD98 *self)
{
    void *result = 0;
    Source_8284FD98 *source = self->source;
    if (source != 0) {
        switch (source->kind) {
        case 0:
            result = fn_8285C228(source) + 0x20;
            break;
        case 1:
            result = fn_8285FFE0(source) + 0x10;
            break;
        }
    }
    return result;
}
