typedef struct Buffer_8285F430 { char *data; unsigned count; unsigned unused; unsigned stride; } Buffer_8285F430;
extern void *memcpy(void *, const void *, unsigned);
void *fn_8285F430(Buffer_8285F430 *o) {
 char *src=o->data; unsigned stride=o->stride;
 ++o->count; o->data=src+stride;
 return memcpy(o->data,src,stride);
}
