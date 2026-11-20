#include "havok/hkString.h"

typedef void (*Output_82CF7C08)(const char *, void *);

typedef struct Reporter_82CF7C08 {
    void *unknown; /* 0x00 */
    void *tracer;  /* 0x04 */
    char map[0x3c - 8];
    Output_82CF7C08 output; /* 0x3c */
    void *context;          /* 0x40 */
} Reporter_82CF7C08;

typedef struct Block_82CF7C08 {
    unsigned int trace;
    int size;
} Block_82CF7C08;

extern "C" int fn_82D00D60(void *, unsigned int, void **, int);
extern "C" void fn_82D00D38(void *, void **, int, Output_82CF7C08, void *);

extern "C" void fn_82CF7C08(Reporter_82CF7C08 *self, const char *description, const void *address,
                 const Block_82CF7C08 *block)
{
    void *trace[32];
    char text[256];
    int count;
    hkString::snprintf(text, 256, "\nAddress=0x%p size=%i\n", address, block->size);
    self->output(description, self->context);
    self->output(text, self->context);
    count = fn_82D00D60(self->map, block->trace, trace, 32);
    fn_82D00D38(self->tracer, trace, count, self->output, self->context);
    self->output("-------------------------------------------------------------------\n\n", self->context);
}
