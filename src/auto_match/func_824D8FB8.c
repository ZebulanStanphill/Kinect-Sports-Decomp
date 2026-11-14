typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_824D8FB8 {
    char data[0x30];
} Entry_824D8FB8;

extern float fn_8255A070(__vector4 v);
extern __vector4 fn_8255AE78(__vector4 v, float angle);
extern int fn_824D9D48(void *a, void *b, Entry_824D8FB8 *entries, int count, void *c,
                       __vector4 dir, __vector4 pos, __vector4 extent);

Entry_824D8FB8 *fn_824D8FB8(void *self, void *a, void *b, __vector4 extent, __vector4 forward, __vector4 pos, Entry_824D8FB8 *entries, int *count, __vector4 *outDir, void *c)
{
    __vector4 dir = fn_8255AE78(pos, fn_8255A070(forward));
    *outDir = dir;
    return &entries[fn_824D9D48(a, b, entries, *count, c, dir, pos, extent)];
}
