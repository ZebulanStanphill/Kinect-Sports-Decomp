// Writes the shader PDB XML document: header, <shader-pdb pdbHint=... version=...>, the
// three child sections, and the closing tag.
typedef struct Pdb_82A9F6F8 {
    char pad0[0xa0];
    unsigned int hint[3];   /* 0xa0 */
} Pdb_82A9F6F8;

typedef struct Writer_82A9F6F8 {
    int unk0;
    int unk4;
    int newline;            /* 0x08 */
} Writer_82A9F6F8;

extern void fn_82A9D448(Pdb_82A9F6F8 *pdb);
extern void fn_82A99B70(Writer_82A9F6F8 *w, const char *fmt, ...);
extern void fn_82A99BC8(Writer_82A9F6F8 *w);
extern void fn_82A9A860(Writer_82A9F6F8 *w);
extern void fn_82A99C28(Writer_82A9F6F8 *w, const char *name);
extern void fn_82A9A9E8(Pdb_82A9F6F8 *pdb, Writer_82A9F6F8 *w);
extern void fn_82A9C480(Pdb_82A9F6F8 *pdb, Writer_82A9F6F8 *w);
extern void fn_82A9E960(Pdb_82A9F6F8 *pdb, Writer_82A9F6F8 *w);

void fn_82A9F6F8(Pdb_82A9F6F8 *pdb, Writer_82A9F6F8 *w)
{
    const char *name;

    if (pdb->hint[0] == 0)
        fn_82A9D448(pdb);
    fn_82A99B70(w, "<?xml version=\"1.0\" encoding=\"utf-8\"?>");
    fn_82A99B70(w, "\r\n");
    w->newline = 1;
    fn_82A99BC8(w);
    name = "shader-pdb";
    fn_82A99B70(w, "<%s", name);
    fn_82A99B70(w, " pdbHint=\"%08x-%08x-%08x\"", pdb->hint[0], pdb->hint[1], pdb->hint[2]);
    fn_82A99B70(w, " version=\"%d\"", 0x2dff);
    fn_82A9A860(w);
    fn_82A9A9E8(pdb, w);
    fn_82A9C480(pdb, w);
    fn_82A9E960(pdb, w);
    fn_82A99C28(w, name);
}
