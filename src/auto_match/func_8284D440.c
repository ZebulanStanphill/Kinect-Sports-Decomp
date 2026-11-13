typedef struct Obj_8284D440 {
    unsigned char pad[0x124];
    void *file;
} Obj_8284D440;

extern unsigned int fn_828177C8(void *file, const char *section);
extern unsigned int fn_8284FD98(Obj_8284D440 *self);

unsigned int fn_8284D440(Obj_8284D440 *self)
{
    unsigned int size = (fn_828177C8(self->file, ".data") + 0xf) & ~0xf;
    return fn_8284FD98(self) + size;
}
