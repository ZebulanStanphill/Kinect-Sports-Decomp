void *memset(void *, int, unsigned int);
typedef struct { char pad[0x54]; int a; char pad2[0x30]; unsigned __int64 b[2]; int c; } G_8311D200;
extern G_8311D200 lbl_831D3D88;
void fn_8311D200(void)
{
    memset(&lbl_831D3D88.a, 0, sizeof(int));
    memset(lbl_831D3D88.b, 0, 0x14);
}
