typedef struct Obj_826954C0 {
    char pad[0x18];
    void *log;
} Obj_826954C0;

extern void fn_826ADE60(void *log, const char *format, ...);

void fn_826954C0(Obj_826954C0 *self, const char *className)
{
    fn_826ADE60(self->log, "Error: Null or invalid 'this' is used for a method of %s class.\n", className);
}
