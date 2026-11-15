typedef struct Buffer_82677B90 Buffer_82677B90;

typedef struct Vtable_82677B90 {
    void *reserved[2];
    void (*release)(Buffer_82677B90 *);
    void *(*data)(Buffer_82677B90 *);
} Vtable_82677B90;

struct Buffer_82677B90 {
    Vtable_82677B90 *vtable;
};

extern int fn_828F0DD0(const char *, unsigned int, void *, void *, const char *, const char *, unsigned int,
                       Buffer_82677B90 **, void *, void *);
extern unsigned int fn_82631830(void *);
extern unsigned int strlen(const char *);

unsigned int fn_82677B90(void *unused, int *shader, const char *source)
{
    if (*shader == 0) {
        Buffer_82677B90 *buffer = 0;
        int result = fn_828F0DD0(source, strlen(source), 0, 0, "main", "vs_2_0", 1, &buffer, 0, 0);
        if (result < 0) {
            if (buffer) {
                buffer->vtable->release(buffer);
            }
            return 0;
        }
        if (buffer == 0) {
            return 0;
        }
        {
            unsigned int created = fn_82631830(buffer->vtable->data(buffer));
            *shader = created;
            if (created == 0) {
                if (buffer) {
                    buffer->vtable->release(buffer);
                }
                return 0;
            }
            if (buffer) {
                buffer->vtable->release(buffer);
            }
        }
    }
    return 1;
}
