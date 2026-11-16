extern unsigned int lbl_8320A898;
extern const float lbl_821CA45C[2];
extern void fn_82637B30(unsigned int, int);
extern void fn_8263CBB0(unsigned int, int, unsigned int, unsigned __int64);
extern void fn_82640058(unsigned int, int, int, void *, int);
extern void fn_8263FB38(unsigned int, int, unsigned int, unsigned int, unsigned int, int, int, int, float,
                        int, int);

typedef struct Geometry_824F5700 {
    char pad[8];
    unsigned int indices;  /* 0x08 */
    unsigned int vertices; /* 0x0c */
} Geometry_824F5700;

void fn_824F5700(Geometry_824F5700 *self, void *data, unsigned int count)
{
    fn_82637B30(lbl_8320A898, 0);
    fn_8263CBB0(lbl_8320A898, 0, self->indices, 0x80000000);
    fn_82640058(lbl_8320A898, 8, 3, data, 16);
    fn_8263FB38(lbl_8320A898, 0, count, self->vertices, count, 0, 0, 0, lbl_821CA45C[1], 0, 0);
}
