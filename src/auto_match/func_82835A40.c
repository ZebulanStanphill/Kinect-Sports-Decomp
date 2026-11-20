typedef struct Source_82835A40 {
    char pad0[0x8];
    unsigned int flags; /* 0x08 */
} Source_82835A40;

typedef struct Reader_82835A40 {
    void *vt;                /* 0x00 */
    void *owner;             /* 0x04 */
    int position;            /* 0x08 */
    int length;              /* 0x0c */
    Source_82835A40 *source; /* 0x10 */
} Reader_82835A40;

extern char lbl_8201F2BC[];
extern void *fn_8265C9E0(unsigned int size);
extern Reader_82835A40 *fn_82836958(void *mem, void *owner, Source_82835A40 *source);
extern Reader_82835A40 *fn_828366F8(void *mem, void *owner, Source_82835A40 *source);
extern Reader_82835A40 *fn_828365A8(void *mem, void *owner, Source_82835A40 *source);
extern Reader_82835A40 *fn_82836048(void *mem, void *owner, Source_82835A40 *source);
extern Reader_82835A40 *fn_82835E98(void *mem, void *owner, Source_82835A40 *source);
extern Reader_82835A40 *fn_82835CF8(void *mem, void *owner, Source_82835A40 *source);

static __forceinline Reader_82835A40 *NewReader(void *owner, Source_82835A40 *source)
{
    Reader_82835A40 *reader = (Reader_82835A40 *)fn_8265C9E0(0x14);

    if (reader != 0) {
        reader->owner = owner;
        reader->source = source;
        reader->position = 0;
        reader->vt = lbl_8201F2BC;
        reader->length = 0;
        return reader;
    }
    return 0;
}

Reader_82835A40 *fn_82835A40(void *owner, Source_82835A40 *source)
{
    unsigned int flags = source->flags;
    void *mem;

    if ((flags & 0x1) != 0) {
        mem = fn_8265C9E0(0x14);
        if (mem != 0) {
            return fn_82836958(mem, owner, source);
        }
        return 0;
    }
    if ((flags & 0x8) != 0) {
        mem = fn_8265C9E0(0x14);
        if (mem != 0) {
            return fn_828366F8(mem, owner, source);
        }
        return 0;
    }
    if ((flags & 0x40) != 0) {
        mem = fn_8265C9E0(0x14);
        if (mem != 0) {
            return fn_828365A8(mem, owner, source);
        }
        return 0;
    }
    if ((flags & 0x2) != 0) {
        mem = fn_8265C9E0(0x14);
        if (mem != 0) {
            return fn_82836048(mem, owner, source);
        }
        return 0;
    }
    if ((flags & 0x4) != 0) {
        mem = fn_8265C9E0(0x14);
        if (mem != 0) {
            return fn_82835E98(mem, owner, source);
        }
        return 0;
    }
    if ((flags & 0x10) != 0) {
        mem = fn_8265C9E0(0x14);
        if (mem != 0) {
            return fn_82835CF8(mem, owner, source);
        }
        return 0;
    }
    if ((flags & 0x20) != 0) {
        return NewReader(owner, source);
    }
    if ((flags & 0x100) != 0) {
        return NewReader(owner, source);
    }
    return NewReader(owner, source);
}
