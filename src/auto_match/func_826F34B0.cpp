extern "C" {
void fn_8267C4C8(void *object);
void fn_8267C4F0(void *object);
void fn_82683F88(void *log, const char *format, ...);
}

struct Log_826F34B0 {
    void *vt;          /* 0x00 */
    int refs;          /* 0x04 */
    int pad8;          /* 0x08 */
    char writer[0x10]; /* 0x0c */
};

template <class T> struct Ptr_826F34B0 {
    T *object;

    Ptr_826F34B0()
    {
        object = 0;
    }

    __forceinline Ptr_826F34B0(const Ptr_826F34B0 &other)
    {
        if ((int)other.object != 0) {
            fn_8267C4C8(other.object);
        }
        object = other.object;
    }

    __forceinline ~Ptr_826F34B0()
    {
        if (object != 0) {
            fn_8267C4F0(object);
        }
    }

    T *GetPtr() const
    {
        return object;
    }
};

struct File_826F34B0;

struct FileOpener_826F34B0 {
    virtual void vf0();
    virtual void vf4();
    virtual void vf8();
    virtual File_826F34B0 *OpenFile(const char *url, Log_826F34B0 *log, int flags, int mode);
};

struct States_826F34B0 {
    char pad[8];
    FileOpener_826F34B0 *opener; /* 0x08 */
};

struct Loader_826F34B0 {
    char pad[8];
    States_826F34B0 *states;        /* 0x08 */
    Ptr_826F34B0<Log_826F34B0> log; /* 0x0c */
};

/* GFxLoader-style file open: the null tests compile to signed cmpwi in the original, so the
 * pointers are tested as int there. */
extern "C" File_826F34B0 *fn_826F34B0(Loader_826F34B0 *self, const char *url, unsigned int flags)
{
    if ((int)self->states->opener == 0) {
        if ((int)self->log.object != 0 && (flags & 0x200000) == 0) {
            fn_82683F88(self->log.object->writer,
                        "Error: GFxLoader failed to open '%s', GFxFileOpener not installed\n", url);
        }
        return 0;
    }
    return self->states->opener->OpenFile(
        url, ((flags & 0x200000) ? Ptr_826F34B0<Log_826F34B0>() : self->log).GetPtr(), 0x21, 0x1b6);
}
