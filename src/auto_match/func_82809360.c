void __dcbt(int offset, const void *base);

typedef struct Stream_82809360 {
    char *base; /* 0x00 */
    int stride; /* 0x04 */
    char pad08[0x3c - 0x08];
    int kind; /* 0x3c */
} Stream_82809360;

typedef struct Mesh_82809360 {
    char pad00[0x47];
    unsigned char format; /* 0x47 */
    char pad48[0x64 - 0x48];
    Stream_82809360 *stream; /* 0x64 */
} Mesh_82809360;

extern void fn_82808858(Mesh_82809360 *mesh, int *args, char *out);
extern void fn_828091B0(Mesh_82809360 *mesh, int *args, char *out);
extern void fn_82808998(Mesh_82809360 *mesh, int *args, char *out);
extern void fn_82808F38(Mesh_82809360 *mesh, int *args, char *out);
extern void fn_82808C10(Mesh_82809360 *mesh, int *args, char *out);

void fn_82809360(Mesh_82809360 *mesh, int *args, char *out)
{
    Stream_82809360 *stream = mesh->stream;

    __dcbt(0x80, mesh->stream->base);
    __dcbt(mesh->stream->stride + 0x80, mesh->stream->base);
    __dcbt((mesh->stream->stride + 0x40) * 2, mesh->stream->base);
    __dcbt(mesh->stream->stride * 3 + 0x80, mesh->stream->base);
    if (mesh->format == 2) {
        fn_82808858(mesh, args, out);
    } else if (mesh->format == 6) {
        if (stream->kind == 1) {
            fn_828091B0(mesh, args, out);
        } else {
            fn_82808998(mesh, args, out);
        }
    } else if (stream->kind == 1) {
        fn_82808F38(mesh, args, out);
    } else {
        fn_82808C10(mesh, args, out);
    }
}
