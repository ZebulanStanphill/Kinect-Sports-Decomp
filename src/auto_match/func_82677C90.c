typedef struct Buffer_82677C90 Buffer_82677C90;

typedef struct Vtable_82677C90 {
    void *reserved[2];
    void (*release)(Buffer_82677C90 *);
    void *(*data)(Buffer_82677C90 *);
} Vtable_82677C90;

struct Buffer_82677C90 {
    Vtable_82677C90 *vtable;
};

extern int fn_828F0DD0(const char *, unsigned int, void *, void *, const char *, const char *, unsigned int,
                       Buffer_82677C90 **, void *, void *);
extern unsigned int fn_82631488(void *);
extern unsigned int strlen(const char *);

unsigned int fn_82677C90(void *unused, int *shader, const char *source)
{
    if (*shader == 0) {
        Buffer_82677C90 *errors = 0;
        Buffer_82677C90 *buffer = 0;
        int result = fn_828F0DD0(source, strlen(source), 0, 0, "main", "ps_2_0", 1, &buffer, &errors, 0);
        if (result < 0) {
            if (buffer) {
                buffer->vtable->release(buffer);
            }
            if (errors) {
                errors->vtable->release(errors);
            }
            return 0;
        }
        if (buffer != 0) {
        } else {
            if (errors) {
                errors->vtable->release(errors);
            }
            return 0;
        }
        {
            unsigned int created = fn_82631488(buffer->vtable->data(buffer));
            *shader = created;
            if (created != 0) {
            } else {
                if (buffer) {
                    buffer->vtable->release(buffer);
                }
                if (errors) {
                    errors->vtable->release(errors);
                }
                return 0;
            }
            if (buffer) {
                buffer->vtable->release(buffer);
            }
        }
        if (errors) {
            errors->vtable->release(errors);
        }
    }
    return 1;
}
