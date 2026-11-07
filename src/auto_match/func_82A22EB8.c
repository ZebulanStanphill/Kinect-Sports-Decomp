typedef unsigned long ULONG;
typedef void *PVOID;

typedef struct _LDR_DATA_TABLE_ENTRY {
    char pad[0x58];
    PVOID XexHeaderBase;
} LDR_DATA_TABLE_ENTRY;

typedef struct Header_82A22EB8 {
    ULONG magic;
    ULONG version;
    ULONG id;
    ULONG titleVersion;
} Header_82A22EB8;

typedef struct Ops_82A22EB8 {
    void *f0;
    void (*close)(int handle);
} Ops_82A22EB8;

extern LDR_DATA_TABLE_ENTRY **__imp_XexExecutableModuleHandle;
extern PVOID RtlImageXexHeaderField(PVOID XexHeaderBase, ULONG Key);
extern void *memset(void *, int, unsigned int);
extern void *lbl_8315D2EC;
extern Ops_82A22EB8 *lbl_83219B8C;
extern void *fn_8265C940(unsigned int size, void *heap);
extern void fn_8265C990(void *p, void *heap);
extern int fn_82A1F888(int *handle, int mode);
extern int fn_82A1F950(int *handle, void *buf, unsigned int block);
extern void fn_82A207C8(void *buf, unsigned int size, int a, int b);

static __forceinline int getField_82A22EB8(ULONG key, ULONG **out)
{
    LDR_DATA_TABLE_ENTRY *mod = *__imp_XexExecutableModuleHandle;
    ULONG *p;

    if (mod == 0) {
        return 0xc0000225;
    }
    p = (ULONG *)RtlImageXexHeaderField(mod->XexHeaderBase, key);
    *out = p;
    return p != 0 ? 0 : 0xc0000225;
}

int fn_82A22EB8(int *handle, ULONG id)
{
    Header_82A22EB8 *buf;
    int hr;
    unsigned int i;

    buf = (Header_82A22EB8 *)fn_8265C940(0x1000, lbl_8315D2EC);
    if (buf == 0) {
        hr = 0;
        goto done;
    }
    hr = fn_82A1F888(handle, 1);
    if (((unsigned int)hr & 0xc0000000) != 0xc0000000) {
        ULONG *p;
        ULONG v;

        buf->id = id;
        buf->magic = 0xfadebac4;
        buf->version = 3;
        if (getField_82A22EB8(0x40006, &p) >= 0) {
            v = p[1];
        } else {
            v = 0;
        }
        buf->titleVersion = v;
        hr = fn_82A1F950(handle, buf, 0);
        if (hr >= 0) {
            fn_82A207C8(buf, 0x1000, 0x24, 1);
            hr = fn_82A1F950(handle, buf, 1);
            if (hr >= 0) {
                memset(buf, 0, 0x1000);
                for (i = 1; i < 16; i++) {
                    hr = fn_82A1F950(handle, buf, i + 1);
                    if (hr < 0) {
                        break;
                    }
                }
            }
        }
        lbl_83219B8C->close(*handle);
        *handle = -1;
    }
    fn_8265C990(buf, lbl_8315D2EC);
done:
    return hr;
}
