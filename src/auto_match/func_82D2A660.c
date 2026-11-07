void __debugbreak(void);

typedef struct ErrorVtbl_82D2A660 {
    void *slot0;
    void *slot1;
    void *slot2;
    int (*message)(void *self, int type, unsigned int id, const char *text, const char *file, int line);
} ErrorVtbl_82D2A660;

typedef struct Error_82D2A660 {
    ErrorVtbl_82D2A660 *vt;
} Error_82D2A660;

typedef struct Ostream_82D2A660 {
    unsigned char data[16];
} Ostream_82D2A660;

extern Error_82D2A660 *lbl_8323B464;
extern void fn_82CEE578(Ostream_82D2A660 *os, char *buf, int size);
extern Ostream_82D2A660 *fn_82CEDB38(Ostream_82D2A660 *os, const char *s);
extern void fn_82CED958(Ostream_82D2A660 *os);

int fn_82D2A660(void)
{
    Ostream_82D2A660 os;
    char buf[512];

    fn_82CEE578(&os, buf, 0x200);
    fn_82CEDB38(&os, "Not implemented");
    if (lbl_8323B464->vt->message(lbl_8323B464, 3, 0xcfa7dfcc, buf,
            "d:\\build\\20090926_024535\\Source\\Common/Internal/GeometryProcessing/Mesh/hkgpMesh.h", 0x111) != 0) {
        __debugbreak();
    }
    fn_82CED958(&os);
    return 0;
}
